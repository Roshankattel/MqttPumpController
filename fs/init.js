load('api_config.js');
load('api_mqtt.js');
load('api_gpio.js');
load('api_timer.js');

let topic = 'my/topic';

let pin1=Cfg.get('hardware.input1');
let pin2=Cfg.get('hardware.input2');
let pin3=Cfg.get('hardware.input3');

let rpin1=Cfg.get('hardware.relay1');
let rpin2=Cfg.get('hardware.relay2');

GPIO.set_mode(pin1, GPIO.MODE_INPUT);
GPIO.set_mode(pin2, GPIO.MODE_INPUT);
GPIO.set_mode(pin3, GPIO.MODE_INPUT);

GPIO.set_mode(rpin1, GPIO.MODE_OUTPUT);
GPIO.set_mode(rpin2, GPIO.MODE_OUTPUT);


GPIO.set_button_handler(pin1, GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 200, function () {
  print('Pin', pin1, 'got interrupt');
  MQTT.pub('my/topic', JSON.stringify({ a: 0, b: 0 }));
}, null);

GPIO.set_button_handler(pin2, GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 200, function () {
  print('Pin', pin2, 'got interrupt');
  MQTT.pub('my/topic', JSON.stringify({ a: 0, b: 1 }));
}, null);

GPIO.set_button_handler(pin3, GPIO.PULL_UP, GPIO.INT_EDGE_NEG, 200, function () {
  print('Pin', pin3, 'got interrupt');
  MQTT.pub('my/topic', JSON.stringify({ a: 1, b: 0 }));
}, null);

MQTT.sub('my/topic/#', function (conn, topic, msg) {
  print('Topic:', topic, 'message:', msg);
  if (msg[0] === "O" && msg[1] === "N") {
    print('SAID TO ON');
    GPIO.write(rpin1, 1);
    Timer.set(10000, 0, function () {
      print('turning led1 off');
      GPIO.write(rpin1, 0);
    }, null);
  }
  if (msg[0] === "O" && msg[1] === "F" && msg[2] === "F") {
    print('SAID TO OFF');
    GPIO.write(rpin2, 1);
    Timer.set(10000, 0, function () {
      print('turning led2 off');
      GPIO.write(rpin2, 0);
    }, null);
  }
}, null);
