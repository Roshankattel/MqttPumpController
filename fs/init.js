load('api_config.js');
load('api_gpio.js');
load('api_mqtt.js');
load('api_timer.js');
load('api_sys.js');
load('api_rpc.js');

let f = ffi('void mgos_config_reset(int)');

let vPin = Cfg.get('hardware.pin.voltage');
let tPin = Cfg.get('hardware.pin.thermal');
let cPin = Cfg.get('hardware.pin.contactor');

let onPin = Cfg.get('hardware.pin.on_relay');
let ofPin = Cfg.get('hardware.pin.off_relay');

GPIO.setup_input(vPin, GPIO.PULL_UP);
GPIO.setup_input(tPin, GPIO.PULL_UP);
GPIO.setup_input(cPin, GPIO.PULL_UP);

GPIO.setup_output(onPin, 0);
GPIO.setup_output(ofPin, 0);

function publishTelemetry() {
  // if (Cfg.get('device.subscription')===true)
  //{
  let time = Math.floor(Timer.now() * 1000);
  print('Publishing telemetry at', time);
  let msg = {
    ts: time,
    values: {
      voltage: GPIO.read(vPin),
      thermal: GPIO.read(tPin),
      contactor: GPIO.read(cPin)
    }
  };
  print(JSON.stringify(msg));
  MQTT.pub('v1/devices/me/telemetry', JSON.stringify(msg));
  //}
}

function pulse(relay) {
  print('Pulse on relay ', relay);
  GPIO.write(relay, 1);
  Timer.set(Cfg.get('hardware.timer.pulse'), 0, function (relay) {
    print('Pulse over for ', relay);
    GPIO.write(relay, 0);
  }, relay);
}
MQTT.setEventHandler(function (conn, ev, edata) {
  if (ev === MQTT.EV_CONNACK) {
    print('MQTT event handler: got', ev);
    MQTT.pub('v1/devices/me/attributes', JSON.stringify({ hardware: Cfg.get('device.hardware'), firmware: Cfg.get('device.firmware') }));
  }
}, null);

Timer.set(Cfg.get('hardware.timer.telemetry'), Timer.REPEAT, publishTelemetry, null);

GPIO.set_button_handler(cPin, GPIO.PULL_UP, GPIO.INT_EDGE_POS, 200, publishTelemetry, null);
GPIO.set_button_handler(tPin, GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 200, publishTelemetry, null);
GPIO.set_button_handler(vPin, GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 200, publishTelemetry, null);

MQTT.sub('v1/devices/me/attributes', function (conn, topic, msg) {
  print('Shared attribute update', topic, "message:", msg);
  let attributes = JSON.parse(msg);
  Cfg.set({ device: { new_firmware: attributes.firmware } });
  Cfg.set({ device: { ota_url: attributes.ota_url } });
  Cfg.set({ device: { subscription: attributes.subscription } });
}, null);

MQTT.sub('v1/devices/me/rpc/request/+', function (conn, topic, msg) {
  print('RPC request from server:', topic, "message:", msg);
  let request = JSON.parse(msg);
  if (request.method === 'setContactor') {
    if (request.params === 'on') {
      pulse(onPin);
    } else if (request.params === 'off') {
      pulse(ofPin);
    }
  }
  else if (request.method === 'utility') {
    if (request.params === 'restart') {
      Sys.reboot(0);
    } else if (request.params === 'factoryReset') {
      f(9);
      Sys.reboot(0);
    }
  }

  else if (request.method === 'setConfig') {
    Cfg.set(request.params);
   }

  else if (request.method === 'getConfig') {
    let response = {};
    let temp =topic.slice(26);
    let reptopic = 'v1/devices/me/rpc/response/'+temp;
    print(Cfg.get(request.params));
    response[request.params]= Cfg.get(request.params)
    MQTT.pub(reptopic, JSON.stringify(response));
  }
}, null);