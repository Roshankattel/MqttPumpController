/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/fw/tools/gen_sys_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/2.12.1/apps/mqtt_pump/esp8266/build_contexts/build_ctx_217093085/build/gen/ /mongoose-os/fw/src/mgos_debug_udp_config.yaml /mongoose-os/fw/src/mgos_sys_config.yaml /mongoose-os/fw/platforms/esp8266/src/esp_sys_config.yaml /data/fwbuild-volumes/2.12.1/apps/mqtt_pump/esp8266/build_contexts/build_ctx_217093085/build/gen/mos_conf_schema.yml
 */

#include <stddef.h>
#include "mgos_config.h"

const struct mgos_conf_entry mgos_config_schema_[219] = {
  {.type = CONF_TYPE_OBJECT, .key = "", .offset = 0, .num_desc = 218},
  {.type = CONF_TYPE_OBJECT, .key = "debug", .offset = offsetof(struct mgos_config, debug), .num_desc = 10},
  {.type = CONF_TYPE_STRING, .key = "udp_log_addr", .offset = offsetof(struct mgos_config, debug.udp_log_addr)},
  {.type = CONF_TYPE_INT, .key = "level", .offset = offsetof(struct mgos_config, debug.level)},
  {.type = CONF_TYPE_STRING, .key = "file_level", .offset = offsetof(struct mgos_config, debug.file_level)},
  {.type = CONF_TYPE_INT, .key = "stdout_uart", .offset = offsetof(struct mgos_config, debug.stdout_uart)},
  {.type = CONF_TYPE_INT, .key = "stderr_uart", .offset = offsetof(struct mgos_config, debug.stderr_uart)},
  {.type = CONF_TYPE_INT, .key = "factory_reset_gpio", .offset = offsetof(struct mgos_config, debug.factory_reset_gpio)},
  {.type = CONF_TYPE_STRING, .key = "mg_mgr_hexdump_file", .offset = offsetof(struct mgos_config, debug.mg_mgr_hexdump_file)},
  {.type = CONF_TYPE_INT, .key = "mbedtls_level", .offset = offsetof(struct mgos_config, debug.mbedtls_level)},
  {.type = CONF_TYPE_STRING, .key = "stdout_topic", .offset = offsetof(struct mgos_config, debug.stdout_topic)},
  {.type = CONF_TYPE_STRING, .key = "stderr_topic", .offset = offsetof(struct mgos_config, debug.stderr_topic)},
  {.type = CONF_TYPE_OBJECT, .key = "device", .offset = offsetof(struct mgos_config, device), .num_desc = 7},
  {.type = CONF_TYPE_STRING, .key = "id", .offset = offsetof(struct mgos_config, device.id)},
  {.type = CONF_TYPE_STRING, .key = "license", .offset = offsetof(struct mgos_config, device.license)},
  {.type = CONF_TYPE_STRING, .key = "firmware", .offset = offsetof(struct mgos_config, device.firmware)},
  {.type = CONF_TYPE_STRING, .key = "hardware", .offset = offsetof(struct mgos_config, device.hardware)},
  {.type = CONF_TYPE_STRING, .key = "ota_url", .offset = offsetof(struct mgos_config, device.ota_url)},
  {.type = CONF_TYPE_STRING, .key = "new_firmware", .offset = offsetof(struct mgos_config, device.new_firmware)},
  {.type = CONF_TYPE_BOOL, .key = "subscription", .offset = offsetof(struct mgos_config, device.subscription)},
  {.type = CONF_TYPE_OBJECT, .key = "sys", .offset = offsetof(struct mgos_config, sys), .num_desc = 14},
  {.type = CONF_TYPE_OBJECT, .key = "mount", .offset = offsetof(struct mgos_config, sys.mount), .num_desc = 5},
  {.type = CONF_TYPE_STRING, .key = "path", .offset = offsetof(struct mgos_config, sys.mount.path)},
  {.type = CONF_TYPE_STRING, .key = "dev_type", .offset = offsetof(struct mgos_config, sys.mount.dev_type)},
  {.type = CONF_TYPE_STRING, .key = "dev_opts", .offset = offsetof(struct mgos_config, sys.mount.dev_opts)},
  {.type = CONF_TYPE_STRING, .key = "fs_type", .offset = offsetof(struct mgos_config, sys.mount.fs_type)},
  {.type = CONF_TYPE_STRING, .key = "fs_opts", .offset = offsetof(struct mgos_config, sys.mount.fs_opts)},
  {.type = CONF_TYPE_STRING, .key = "tz_spec", .offset = offsetof(struct mgos_config, sys.tz_spec)},
  {.type = CONF_TYPE_INT, .key = "wdt_timeout", .offset = offsetof(struct mgos_config, sys.wdt_timeout)},
  {.type = CONF_TYPE_STRING, .key = "pref_ota_lib", .offset = offsetof(struct mgos_config, sys.pref_ota_lib)},
  {.type = CONF_TYPE_OBJECT, .key = "atca", .offset = offsetof(struct mgos_config, sys.atca), .num_desc = 4},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, sys.atca.enable)},
  {.type = CONF_TYPE_INT, .key = "i2c_bus", .offset = offsetof(struct mgos_config, sys.atca.i2c_bus)},
  {.type = CONF_TYPE_INT, .key = "i2c_addr", .offset = offsetof(struct mgos_config, sys.atca.i2c_addr)},
  {.type = CONF_TYPE_INT, .key = "ecdh_slots_mask", .offset = offsetof(struct mgos_config, sys.atca.ecdh_slots_mask)},
  {.type = CONF_TYPE_STRING, .key = "conf_acl", .offset = offsetof(struct mgos_config, conf_acl)},
  {.type = CONF_TYPE_OBJECT, .key = "i2c", .offset = offsetof(struct mgos_config, i2c), .num_desc = 5},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, i2c.enable)},
  {.type = CONF_TYPE_INT, .key = "freq", .offset = offsetof(struct mgos_config, i2c.freq)},
  {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, i2c.debug)},
  {.type = CONF_TYPE_INT, .key = "sda_gpio", .offset = offsetof(struct mgos_config, i2c.sda_gpio)},
  {.type = CONF_TYPE_INT, .key = "scl_gpio", .offset = offsetof(struct mgos_config, i2c.scl_gpio)},
  {.type = CONF_TYPE_OBJECT, .key = "http", .offset = offsetof(struct mgos_config, http), .num_desc = 10},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, http.enable)},
  {.type = CONF_TYPE_STRING, .key = "listen_addr", .offset = offsetof(struct mgos_config, http.listen_addr)},
  {.type = CONF_TYPE_STRING, .key = "document_root", .offset = offsetof(struct mgos_config, http.document_root)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, http.ssl_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, http.ssl_key)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, http.ssl_ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "upload_acl", .offset = offsetof(struct mgos_config, http.upload_acl)},
  {.type = CONF_TYPE_STRING, .key = "hidden_files", .offset = offsetof(struct mgos_config, http.hidden_files)},
  {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, http.auth_domain)},
  {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, http.auth_file)},
  {.type = CONF_TYPE_OBJECT, .key = "mjs", .offset = offsetof(struct mgos_config, mjs), .num_desc = 1},
  {.type = CONF_TYPE_BOOL, .key = "generate_jsc", .offset = offsetof(struct mgos_config, mjs.generate_jsc)},
  {.type = CONF_TYPE_OBJECT, .key = "mqtt", .offset = offsetof(struct mgos_config, mqtt), .num_desc = 21},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mqtt.enable)},
  {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, mqtt.server)},
  {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, mqtt.client_id)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, mqtt.user)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, mqtt.pass)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_min)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_max)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, mqtt.ssl_key)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cipher_suites", .offset = offsetof(struct mgos_config, mqtt.ssl_cipher_suites)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_identity", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_identity)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_key", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_key)},
  {.type = CONF_TYPE_BOOL, .key = "clean_session", .offset = offsetof(struct mgos_config, mqtt.clean_session)},
  {.type = CONF_TYPE_INT, .key = "keep_alive", .offset = offsetof(struct mgos_config, mqtt.keep_alive)},
  {.type = CONF_TYPE_STRING, .key = "will_topic", .offset = offsetof(struct mgos_config, mqtt.will_topic)},
  {.type = CONF_TYPE_STRING, .key = "will_message", .offset = offsetof(struct mgos_config, mqtt.will_message)},
  {.type = CONF_TYPE_INT, .key = "max_qos", .offset = offsetof(struct mgos_config, mqtt.max_qos)},
  {.type = CONF_TYPE_INT, .key = "recv_mbuf_limit", .offset = offsetof(struct mgos_config, mqtt.recv_mbuf_limit)},
  {.type = CONF_TYPE_BOOL, .key = "require_time", .offset = offsetof(struct mgos_config, mqtt.require_time)},
  {.type = CONF_TYPE_BOOL, .key = "cloud_events", .offset = offsetof(struct mgos_config, mqtt.cloud_events)},
  {.type = CONF_TYPE_OBJECT, .key = "mqtt1", .offset = offsetof(struct mgos_config, mqtt1), .num_desc = 21},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mqtt1.enable)},
  {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, mqtt1.server)},
  {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, mqtt1.client_id)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, mqtt1.user)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, mqtt1.pass)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, mqtt1.reconnect_timeout_min)},
  {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, mqtt1.reconnect_timeout_max)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, mqtt1.ssl_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, mqtt1.ssl_key)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, mqtt1.ssl_ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cipher_suites", .offset = offsetof(struct mgos_config, mqtt1.ssl_cipher_suites)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_identity", .offset = offsetof(struct mgos_config, mqtt1.ssl_psk_identity)},
  {.type = CONF_TYPE_STRING, .key = "ssl_psk_key", .offset = offsetof(struct mgos_config, mqtt1.ssl_psk_key)},
  {.type = CONF_TYPE_BOOL, .key = "clean_session", .offset = offsetof(struct mgos_config, mqtt1.clean_session)},
  {.type = CONF_TYPE_INT, .key = "keep_alive", .offset = offsetof(struct mgos_config, mqtt1.keep_alive)},
  {.type = CONF_TYPE_STRING, .key = "will_topic", .offset = offsetof(struct mgos_config, mqtt1.will_topic)},
  {.type = CONF_TYPE_STRING, .key = "will_message", .offset = offsetof(struct mgos_config, mqtt1.will_message)},
  {.type = CONF_TYPE_INT, .key = "max_qos", .offset = offsetof(struct mgos_config, mqtt1.max_qos)},
  {.type = CONF_TYPE_INT, .key = "recv_mbuf_limit", .offset = offsetof(struct mgos_config, mqtt1.recv_mbuf_limit)},
  {.type = CONF_TYPE_BOOL, .key = "require_time", .offset = offsetof(struct mgos_config, mqtt1.require_time)},
  {.type = CONF_TYPE_BOOL, .key = "cloud_events", .offset = offsetof(struct mgos_config, mqtt1.cloud_events)},
  {.type = CONF_TYPE_OBJECT, .key = "provision", .offset = offsetof(struct mgos_config, provision), .num_desc = 10},
  {.type = CONF_TYPE_OBJECT, .key = "btn", .offset = offsetof(struct mgos_config, provision.btn), .num_desc = 3},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, provision.btn.pin)},
  {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, provision.btn.pull_up)},
  {.type = CONF_TYPE_INT, .key = "hold_ms", .offset = offsetof(struct mgos_config, provision.btn.hold_ms)},
  {.type = CONF_TYPE_OBJECT, .key = "led", .offset = offsetof(struct mgos_config, provision.led), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, provision.led.pin)},
  {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, provision.led.active_high)},
  {.type = CONF_TYPE_INT, .key = "stable_state", .offset = offsetof(struct mgos_config, provision.stable_state)},
  {.type = CONF_TYPE_INT, .key = "timeout", .offset = offsetof(struct mgos_config, provision.timeout)},
  {.type = CONF_TYPE_INT, .key = "max_state", .offset = offsetof(struct mgos_config, provision.max_state)},
  {.type = CONF_TYPE_OBJECT, .key = "rpc", .offset = offsetof(struct mgos_config, rpc), .num_desc = 12},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.enable)},
  {.type = CONF_TYPE_INT, .key = "max_frame_size", .offset = offsetof(struct mgos_config, rpc.max_frame_size)},
  {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, rpc.max_queue_length)},
  {.type = CONF_TYPE_INT, .key = "default_out_channel_idle_close_timeout", .offset = offsetof(struct mgos_config, rpc.default_out_channel_idle_close_timeout)},
  {.type = CONF_TYPE_STRING, .key = "acl_file", .offset = offsetof(struct mgos_config, rpc.acl_file)},
  {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, rpc.auth_domain)},
  {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, rpc.auth_file)},
  {.type = CONF_TYPE_OBJECT, .key = "uart", .offset = offsetof(struct mgos_config, rpc.uart), .num_desc = 4},
  {.type = CONF_TYPE_INT, .key = "uart_no", .offset = offsetof(struct mgos_config, rpc.uart.uart_no)},
  {.type = CONF_TYPE_INT, .key = "baud_rate", .offset = offsetof(struct mgos_config, rpc.uart.baud_rate)},
  {.type = CONF_TYPE_INT, .key = "fc_type", .offset = offsetof(struct mgos_config, rpc.uart.fc_type)},
  {.type = CONF_TYPE_STRING, .key = "dst", .offset = offsetof(struct mgos_config, rpc.uart.dst)},
  {.type = CONF_TYPE_OBJECT, .key = "wifi", .offset = offsetof(struct mgos_config, wifi), .num_desc = 60},
  {.type = CONF_TYPE_OBJECT, .key = "ap", .offset = offsetof(struct mgos_config, wifi.ap), .num_desc = 15},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.ap.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.ap.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.ap.pass)},
  {.type = CONF_TYPE_BOOL, .key = "hidden", .offset = offsetof(struct mgos_config, wifi.ap.hidden)},
  {.type = CONF_TYPE_INT, .key = "channel", .offset = offsetof(struct mgos_config, wifi.ap.channel)},
  {.type = CONF_TYPE_INT, .key = "max_connections", .offset = offsetof(struct mgos_config, wifi.ap.max_connections)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.ap.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.ap.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.ap.gw)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_start", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_start)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_end", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_end)},
  {.type = CONF_TYPE_INT, .key = "trigger_on_gpio", .offset = offsetof(struct mgos_config, wifi.ap.trigger_on_gpio)},
  {.type = CONF_TYPE_INT, .key = "disable_after", .offset = offsetof(struct mgos_config, wifi.ap.disable_after)},
  {.type = CONF_TYPE_STRING, .key = "hostname", .offset = offsetof(struct mgos_config, wifi.ap.hostname)},
  {.type = CONF_TYPE_BOOL, .key = "keep_enabled", .offset = offsetof(struct mgos_config, wifi.ap.keep_enabled)},
  {.type = CONF_TYPE_OBJECT, .key = "sta", .offset = offsetof(struct mgos_config, wifi.sta), .num_desc = 13},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta.pass)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta.user)},
  {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta.anon_identity)},
  {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta.cert)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta.key)},
  {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta.ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta.gw)},
  {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta.nameserver)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta.dhcp_hostname)},
  {.type = CONF_TYPE_OBJECT, .key = "sta1", .offset = offsetof(struct mgos_config, wifi.sta1), .num_desc = 13},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta1.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta1.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta1.pass)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta1.user)},
  {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta1.anon_identity)},
  {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta1.cert)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta1.key)},
  {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta1.ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta1.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta1.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta1.gw)},
  {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta1.nameserver)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta1.dhcp_hostname)},
  {.type = CONF_TYPE_OBJECT, .key = "sta2", .offset = offsetof(struct mgos_config, wifi.sta2), .num_desc = 13},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta2.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta2.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta2.pass)},
  {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta2.user)},
  {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta2.anon_identity)},
  {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta2.cert)},
  {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta2.key)},
  {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta2.ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta2.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta2.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta2.gw)},
  {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta2.nameserver)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta2.dhcp_hostname)},
  {.type = CONF_TYPE_INT, .key = "sta_cfg_idx", .offset = offsetof(struct mgos_config, wifi.sta_cfg_idx)},
  {.type = CONF_TYPE_INT, .key = "sta_connect_timeout", .offset = offsetof(struct mgos_config, wifi.sta_connect_timeout)},
  {.type = CONF_TYPE_OBJECT, .key = "sntp", .offset = offsetof(struct mgos_config, sntp), .num_desc = 5},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, sntp.enable)},
  {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, sntp.server)},
  {.type = CONF_TYPE_INT, .key = "retry_min", .offset = offsetof(struct mgos_config, sntp.retry_min)},
  {.type = CONF_TYPE_INT, .key = "retry_max", .offset = offsetof(struct mgos_config, sntp.retry_max)},
  {.type = CONF_TYPE_INT, .key = "update_interval", .offset = offsetof(struct mgos_config, sntp.update_interval)},
  {.type = CONF_TYPE_OBJECT, .key = "board", .offset = offsetof(struct mgos_config, board), .num_desc = 18},
  {.type = CONF_TYPE_OBJECT, .key = "led1", .offset = offsetof(struct mgos_config, board.led1), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led1.pin)},
  {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led1.active_high)},
  {.type = CONF_TYPE_OBJECT, .key = "led2", .offset = offsetof(struct mgos_config, board.led2), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led2.pin)},
  {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led2.active_high)},
  {.type = CONF_TYPE_OBJECT, .key = "led3", .offset = offsetof(struct mgos_config, board.led3), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.led3.pin)},
  {.type = CONF_TYPE_BOOL, .key = "active_high", .offset = offsetof(struct mgos_config, board.led3.active_high)},
  {.type = CONF_TYPE_OBJECT, .key = "btn1", .offset = offsetof(struct mgos_config, board.btn1), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn1.pin)},
  {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn1.pull_up)},
  {.type = CONF_TYPE_OBJECT, .key = "btn2", .offset = offsetof(struct mgos_config, board.btn2), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn2.pin)},
  {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn2.pull_up)},
  {.type = CONF_TYPE_OBJECT, .key = "btn3", .offset = offsetof(struct mgos_config, board.btn3), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "pin", .offset = offsetof(struct mgos_config, board.btn3.pin)},
  {.type = CONF_TYPE_BOOL, .key = "pull_up", .offset = offsetof(struct mgos_config, board.btn3.pull_up)},
  {.type = CONF_TYPE_OBJECT, .key = "hardware", .offset = offsetof(struct mgos_config, hardware), .num_desc = 9},
  {.type = CONF_TYPE_OBJECT, .key = "pin", .offset = offsetof(struct mgos_config, hardware.pin), .num_desc = 5},
  {.type = CONF_TYPE_INT, .key = "voltage", .offset = offsetof(struct mgos_config, hardware.pin.voltage)},
  {.type = CONF_TYPE_INT, .key = "thermal", .offset = offsetof(struct mgos_config, hardware.pin.thermal)},
  {.type = CONF_TYPE_INT, .key = "contactor", .offset = offsetof(struct mgos_config, hardware.pin.contactor)},
  {.type = CONF_TYPE_INT, .key = "on_relay", .offset = offsetof(struct mgos_config, hardware.pin.on_relay)},
  {.type = CONF_TYPE_INT, .key = "off_relay", .offset = offsetof(struct mgos_config, hardware.pin.off_relay)},
  {.type = CONF_TYPE_OBJECT, .key = "timer", .offset = offsetof(struct mgos_config, hardware.timer), .num_desc = 2},
  {.type = CONF_TYPE_INT, .key = "telemetry", .offset = offsetof(struct mgos_config, hardware.timer.telemetry)},
  {.type = CONF_TYPE_INT, .key = "pulse", .offset = offsetof(struct mgos_config, hardware.timer.pulse)},
};

const struct mgos_conf_entry *mgos_config_schema() {
  return mgos_config_schema_;
}

/* Global instance */
struct mgos_config mgos_sys_config;

/* Getters {{{ */
const struct mgos_config_debug *mgos_config_get_debug(struct mgos_config *cfg) {
  return &cfg->debug;
}
const char *mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg) {
  return cfg->debug.udp_log_addr;
}
int         mgos_config_get_debug_level(struct mgos_config *cfg) {
  return cfg->debug.level;
}
const char *mgos_config_get_debug_file_level(struct mgos_config *cfg) {
  return cfg->debug.file_level;
}
int         mgos_config_get_debug_stdout_uart(struct mgos_config *cfg) {
  return cfg->debug.stdout_uart;
}
int         mgos_config_get_debug_stderr_uart(struct mgos_config *cfg) {
  return cfg->debug.stderr_uart;
}
int         mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg) {
  return cfg->debug.factory_reset_gpio;
}
const char *mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg) {
  return cfg->debug.mg_mgr_hexdump_file;
}
int         mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg) {
  return cfg->debug.mbedtls_level;
}
const char *mgos_config_get_debug_stdout_topic(struct mgos_config *cfg) {
  return cfg->debug.stdout_topic;
}
const char *mgos_config_get_debug_stderr_topic(struct mgos_config *cfg) {
  return cfg->debug.stderr_topic;
}
const struct mgos_config_device *mgos_config_get_device(struct mgos_config *cfg) {
  return &cfg->device;
}
const char *mgos_config_get_device_id(struct mgos_config *cfg) {
  return cfg->device.id;
}
const char *mgos_config_get_device_license(struct mgos_config *cfg) {
  return cfg->device.license;
}
const char *mgos_config_get_device_firmware(struct mgos_config *cfg) {
  return cfg->device.firmware;
}
const char *mgos_config_get_device_hardware(struct mgos_config *cfg) {
  return cfg->device.hardware;
}
const char *mgos_config_get_device_ota_url(struct mgos_config *cfg) {
  return cfg->device.ota_url;
}
const char *mgos_config_get_device_new_firmware(struct mgos_config *cfg) {
  return cfg->device.new_firmware;
}
int         mgos_config_get_device_subscription(struct mgos_config *cfg) {
  return cfg->device.subscription;
}
const struct mgos_config_sys *mgos_config_get_sys(struct mgos_config *cfg) {
  return &cfg->sys;
}
const struct mgos_config_sys_mount *mgos_config_get_sys_mount(struct mgos_config *cfg) {
  return &cfg->sys.mount;
}
const char *mgos_config_get_sys_mount_path(struct mgos_config *cfg) {
  return cfg->sys.mount.path;
}
const char *mgos_config_get_sys_mount_dev_type(struct mgos_config *cfg) {
  return cfg->sys.mount.dev_type;
}
const char *mgos_config_get_sys_mount_dev_opts(struct mgos_config *cfg) {
  return cfg->sys.mount.dev_opts;
}
const char *mgos_config_get_sys_mount_fs_type(struct mgos_config *cfg) {
  return cfg->sys.mount.fs_type;
}
const char *mgos_config_get_sys_mount_fs_opts(struct mgos_config *cfg) {
  return cfg->sys.mount.fs_opts;
}
const char *mgos_config_get_sys_tz_spec(struct mgos_config *cfg) {
  return cfg->sys.tz_spec;
}
int         mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg) {
  return cfg->sys.wdt_timeout;
}
const char *mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg) {
  return cfg->sys.pref_ota_lib;
}
const struct mgos_config_sys_atca *mgos_config_get_sys_atca(struct mgos_config *cfg) {
  return &cfg->sys.atca;
}
int         mgos_config_get_sys_atca_enable(struct mgos_config *cfg) {
  return cfg->sys.atca.enable;
}
int         mgos_config_get_sys_atca_i2c_bus(struct mgos_config *cfg) {
  return cfg->sys.atca.i2c_bus;
}
int         mgos_config_get_sys_atca_i2c_addr(struct mgos_config *cfg) {
  return cfg->sys.atca.i2c_addr;
}
int         mgos_config_get_sys_atca_ecdh_slots_mask(struct mgos_config *cfg) {
  return cfg->sys.atca.ecdh_slots_mask;
}
const char *mgos_config_get_conf_acl(struct mgos_config *cfg) {
  return cfg->conf_acl;
}
const struct mgos_config_i2c *mgos_config_get_i2c(struct mgos_config *cfg) {
  return &cfg->i2c;
}
int         mgos_config_get_i2c_enable(struct mgos_config *cfg) {
  return cfg->i2c.enable;
}
int         mgos_config_get_i2c_freq(struct mgos_config *cfg) {
  return cfg->i2c.freq;
}
int         mgos_config_get_i2c_debug(struct mgos_config *cfg) {
  return cfg->i2c.debug;
}
int         mgos_config_get_i2c_sda_gpio(struct mgos_config *cfg) {
  return cfg->i2c.sda_gpio;
}
int         mgos_config_get_i2c_scl_gpio(struct mgos_config *cfg) {
  return cfg->i2c.scl_gpio;
}
const struct mgos_config_http *mgos_config_get_http(struct mgos_config *cfg) {
  return &cfg->http;
}
int         mgos_config_get_http_enable(struct mgos_config *cfg) {
  return cfg->http.enable;
}
const char *mgos_config_get_http_listen_addr(struct mgos_config *cfg) {
  return cfg->http.listen_addr;
}
const char *mgos_config_get_http_document_root(struct mgos_config *cfg) {
  return cfg->http.document_root;
}
const char *mgos_config_get_http_ssl_cert(struct mgos_config *cfg) {
  return cfg->http.ssl_cert;
}
const char *mgos_config_get_http_ssl_key(struct mgos_config *cfg) {
  return cfg->http.ssl_key;
}
const char *mgos_config_get_http_ssl_ca_cert(struct mgos_config *cfg) {
  return cfg->http.ssl_ca_cert;
}
const char *mgos_config_get_http_upload_acl(struct mgos_config *cfg) {
  return cfg->http.upload_acl;
}
const char *mgos_config_get_http_hidden_files(struct mgos_config *cfg) {
  return cfg->http.hidden_files;
}
const char *mgos_config_get_http_auth_domain(struct mgos_config *cfg) {
  return cfg->http.auth_domain;
}
const char *mgos_config_get_http_auth_file(struct mgos_config *cfg) {
  return cfg->http.auth_file;
}
const struct mgos_config_mjs *mgos_config_get_mjs(struct mgos_config *cfg) {
  return &cfg->mjs;
}
int         mgos_config_get_mjs_generate_jsc(struct mgos_config *cfg) {
  return cfg->mjs.generate_jsc;
}
const struct mgos_config_mqtt *mgos_config_get_mqtt(struct mgos_config *cfg) {
  return &cfg->mqtt;
}
int         mgos_config_get_mqtt_enable(struct mgos_config *cfg) {
  return cfg->mqtt.enable;
}
const char *mgos_config_get_mqtt_server(struct mgos_config *cfg) {
  return cfg->mqtt.server;
}
const char *mgos_config_get_mqtt_client_id(struct mgos_config *cfg) {
  return cfg->mqtt.client_id;
}
const char *mgos_config_get_mqtt_user(struct mgos_config *cfg) {
  return cfg->mqtt.user;
}
const char *mgos_config_get_mqtt_pass(struct mgos_config *cfg) {
  return cfg->mqtt.pass;
}
double      mgos_config_get_mqtt_reconnect_timeout_min(struct mgos_config *cfg) {
  return cfg->mqtt.reconnect_timeout_min;
}
double      mgos_config_get_mqtt_reconnect_timeout_max(struct mgos_config *cfg) {
  return cfg->mqtt.reconnect_timeout_max;
}
const char *mgos_config_get_mqtt_ssl_cert(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_cert;
}
const char *mgos_config_get_mqtt_ssl_key(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_key;
}
const char *mgos_config_get_mqtt_ssl_ca_cert(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_ca_cert;
}
const char *mgos_config_get_mqtt_ssl_cipher_suites(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_cipher_suites;
}
const char *mgos_config_get_mqtt_ssl_psk_identity(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_psk_identity;
}
const char *mgos_config_get_mqtt_ssl_psk_key(struct mgos_config *cfg) {
  return cfg->mqtt.ssl_psk_key;
}
int         mgos_config_get_mqtt_clean_session(struct mgos_config *cfg) {
  return cfg->mqtt.clean_session;
}
int         mgos_config_get_mqtt_keep_alive(struct mgos_config *cfg) {
  return cfg->mqtt.keep_alive;
}
const char *mgos_config_get_mqtt_will_topic(struct mgos_config *cfg) {
  return cfg->mqtt.will_topic;
}
const char *mgos_config_get_mqtt_will_message(struct mgos_config *cfg) {
  return cfg->mqtt.will_message;
}
int         mgos_config_get_mqtt_max_qos(struct mgos_config *cfg) {
  return cfg->mqtt.max_qos;
}
int         mgos_config_get_mqtt_recv_mbuf_limit(struct mgos_config *cfg) {
  return cfg->mqtt.recv_mbuf_limit;
}
int         mgos_config_get_mqtt_require_time(struct mgos_config *cfg) {
  return cfg->mqtt.require_time;
}
int         mgos_config_get_mqtt_cloud_events(struct mgos_config *cfg) {
  return cfg->mqtt.cloud_events;
}
const struct mgos_config_mqtt *mgos_config_get_mqtt1(struct mgos_config *cfg) {
  return &cfg->mqtt1;
}
int         mgos_config_get_mqtt1_enable(struct mgos_config *cfg) {
  return cfg->mqtt1.enable;
}
const char *mgos_config_get_mqtt1_server(struct mgos_config *cfg) {
  return cfg->mqtt1.server;
}
const char *mgos_config_get_mqtt1_client_id(struct mgos_config *cfg) {
  return cfg->mqtt1.client_id;
}
const char *mgos_config_get_mqtt1_user(struct mgos_config *cfg) {
  return cfg->mqtt1.user;
}
const char *mgos_config_get_mqtt1_pass(struct mgos_config *cfg) {
  return cfg->mqtt1.pass;
}
double      mgos_config_get_mqtt1_reconnect_timeout_min(struct mgos_config *cfg) {
  return cfg->mqtt1.reconnect_timeout_min;
}
double      mgos_config_get_mqtt1_reconnect_timeout_max(struct mgos_config *cfg) {
  return cfg->mqtt1.reconnect_timeout_max;
}
const char *mgos_config_get_mqtt1_ssl_cert(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_cert;
}
const char *mgos_config_get_mqtt1_ssl_key(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_key;
}
const char *mgos_config_get_mqtt1_ssl_ca_cert(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_ca_cert;
}
const char *mgos_config_get_mqtt1_ssl_cipher_suites(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_cipher_suites;
}
const char *mgos_config_get_mqtt1_ssl_psk_identity(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_psk_identity;
}
const char *mgos_config_get_mqtt1_ssl_psk_key(struct mgos_config *cfg) {
  return cfg->mqtt1.ssl_psk_key;
}
int         mgos_config_get_mqtt1_clean_session(struct mgos_config *cfg) {
  return cfg->mqtt1.clean_session;
}
int         mgos_config_get_mqtt1_keep_alive(struct mgos_config *cfg) {
  return cfg->mqtt1.keep_alive;
}
const char *mgos_config_get_mqtt1_will_topic(struct mgos_config *cfg) {
  return cfg->mqtt1.will_topic;
}
const char *mgos_config_get_mqtt1_will_message(struct mgos_config *cfg) {
  return cfg->mqtt1.will_message;
}
int         mgos_config_get_mqtt1_max_qos(struct mgos_config *cfg) {
  return cfg->mqtt1.max_qos;
}
int         mgos_config_get_mqtt1_recv_mbuf_limit(struct mgos_config *cfg) {
  return cfg->mqtt1.recv_mbuf_limit;
}
int         mgos_config_get_mqtt1_require_time(struct mgos_config *cfg) {
  return cfg->mqtt1.require_time;
}
int         mgos_config_get_mqtt1_cloud_events(struct mgos_config *cfg) {
  return cfg->mqtt1.cloud_events;
}
const struct mgos_config_provision *mgos_config_get_provision(struct mgos_config *cfg) {
  return &cfg->provision;
}
const struct mgos_config_provision_btn *mgos_config_get_provision_btn(struct mgos_config *cfg) {
  return &cfg->provision.btn;
}
int         mgos_config_get_provision_btn_pin(struct mgos_config *cfg) {
  return cfg->provision.btn.pin;
}
int         mgos_config_get_provision_btn_pull_up(struct mgos_config *cfg) {
  return cfg->provision.btn.pull_up;
}
int         mgos_config_get_provision_btn_hold_ms(struct mgos_config *cfg) {
  return cfg->provision.btn.hold_ms;
}
const struct mgos_config_provision_led *mgos_config_get_provision_led(struct mgos_config *cfg) {
  return &cfg->provision.led;
}
int         mgos_config_get_provision_led_pin(struct mgos_config *cfg) {
  return cfg->provision.led.pin;
}
int         mgos_config_get_provision_led_active_high(struct mgos_config *cfg) {
  return cfg->provision.led.active_high;
}
int         mgos_config_get_provision_stable_state(struct mgos_config *cfg) {
  return cfg->provision.stable_state;
}
int         mgos_config_get_provision_timeout(struct mgos_config *cfg) {
  return cfg->provision.timeout;
}
int         mgos_config_get_provision_max_state(struct mgos_config *cfg) {
  return cfg->provision.max_state;
}
const struct mgos_config_rpc *mgos_config_get_rpc(struct mgos_config *cfg) {
  return &cfg->rpc;
}
int         mgos_config_get_rpc_enable(struct mgos_config *cfg) {
  return cfg->rpc.enable;
}
int         mgos_config_get_rpc_max_frame_size(struct mgos_config *cfg) {
  return cfg->rpc.max_frame_size;
}
int         mgos_config_get_rpc_max_queue_length(struct mgos_config *cfg) {
  return cfg->rpc.max_queue_length;
}
int         mgos_config_get_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg) {
  return cfg->rpc.default_out_channel_idle_close_timeout;
}
const char *mgos_config_get_rpc_acl_file(struct mgos_config *cfg) {
  return cfg->rpc.acl_file;
}
const char *mgos_config_get_rpc_auth_domain(struct mgos_config *cfg) {
  return cfg->rpc.auth_domain;
}
const char *mgos_config_get_rpc_auth_file(struct mgos_config *cfg) {
  return cfg->rpc.auth_file;
}
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(struct mgos_config *cfg) {
  return &cfg->rpc.uart;
}
int         mgos_config_get_rpc_uart_uart_no(struct mgos_config *cfg) {
  return cfg->rpc.uart.uart_no;
}
int         mgos_config_get_rpc_uart_baud_rate(struct mgos_config *cfg) {
  return cfg->rpc.uart.baud_rate;
}
int         mgos_config_get_rpc_uart_fc_type(struct mgos_config *cfg) {
  return cfg->rpc.uart.fc_type;
}
const char *mgos_config_get_rpc_uart_dst(struct mgos_config *cfg) {
  return cfg->rpc.uart.dst;
}
const struct mgos_config_wifi *mgos_config_get_wifi(struct mgos_config *cfg) {
  return &cfg->wifi;
}
const struct mgos_config_wifi_ap *mgos_config_get_wifi_ap(struct mgos_config *cfg) {
  return &cfg->wifi.ap;
}
int         mgos_config_get_wifi_ap_enable(struct mgos_config *cfg) {
  return cfg->wifi.ap.enable;
}
const char *mgos_config_get_wifi_ap_ssid(struct mgos_config *cfg) {
  return cfg->wifi.ap.ssid;
}
const char *mgos_config_get_wifi_ap_pass(struct mgos_config *cfg) {
  return cfg->wifi.ap.pass;
}
int         mgos_config_get_wifi_ap_hidden(struct mgos_config *cfg) {
  return cfg->wifi.ap.hidden;
}
int         mgos_config_get_wifi_ap_channel(struct mgos_config *cfg) {
  return cfg->wifi.ap.channel;
}
int         mgos_config_get_wifi_ap_max_connections(struct mgos_config *cfg) {
  return cfg->wifi.ap.max_connections;
}
const char *mgos_config_get_wifi_ap_ip(struct mgos_config *cfg) {
  return cfg->wifi.ap.ip;
}
const char *mgos_config_get_wifi_ap_netmask(struct mgos_config *cfg) {
  return cfg->wifi.ap.netmask;
}
const char *mgos_config_get_wifi_ap_gw(struct mgos_config *cfg) {
  return cfg->wifi.ap.gw;
}
const char *mgos_config_get_wifi_ap_dhcp_start(struct mgos_config *cfg) {
  return cfg->wifi.ap.dhcp_start;
}
const char *mgos_config_get_wifi_ap_dhcp_end(struct mgos_config *cfg) {
  return cfg->wifi.ap.dhcp_end;
}
int         mgos_config_get_wifi_ap_trigger_on_gpio(struct mgos_config *cfg) {
  return cfg->wifi.ap.trigger_on_gpio;
}
int         mgos_config_get_wifi_ap_disable_after(struct mgos_config *cfg) {
  return cfg->wifi.ap.disable_after;
}
const char *mgos_config_get_wifi_ap_hostname(struct mgos_config *cfg) {
  return cfg->wifi.ap.hostname;
}
int         mgos_config_get_wifi_ap_keep_enabled(struct mgos_config *cfg) {
  return cfg->wifi.ap.keep_enabled;
}
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta(struct mgos_config *cfg) {
  return &cfg->wifi.sta;
}
int         mgos_config_get_wifi_sta_enable(struct mgos_config *cfg) {
  return cfg->wifi.sta.enable;
}
const char *mgos_config_get_wifi_sta_ssid(struct mgos_config *cfg) {
  return cfg->wifi.sta.ssid;
}
const char *mgos_config_get_wifi_sta_pass(struct mgos_config *cfg) {
  return cfg->wifi.sta.pass;
}
const char *mgos_config_get_wifi_sta_user(struct mgos_config *cfg) {
  return cfg->wifi.sta.user;
}
const char *mgos_config_get_wifi_sta_anon_identity(struct mgos_config *cfg) {
  return cfg->wifi.sta.anon_identity;
}
const char *mgos_config_get_wifi_sta_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta.cert;
}
const char *mgos_config_get_wifi_sta_key(struct mgos_config *cfg) {
  return cfg->wifi.sta.key;
}
const char *mgos_config_get_wifi_sta_ca_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta.ca_cert;
}
const char *mgos_config_get_wifi_sta_ip(struct mgos_config *cfg) {
  return cfg->wifi.sta.ip;
}
const char *mgos_config_get_wifi_sta_netmask(struct mgos_config *cfg) {
  return cfg->wifi.sta.netmask;
}
const char *mgos_config_get_wifi_sta_gw(struct mgos_config *cfg) {
  return cfg->wifi.sta.gw;
}
const char *mgos_config_get_wifi_sta_nameserver(struct mgos_config *cfg) {
  return cfg->wifi.sta.nameserver;
}
const char *mgos_config_get_wifi_sta_dhcp_hostname(struct mgos_config *cfg) {
  return cfg->wifi.sta.dhcp_hostname;
}
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta1(struct mgos_config *cfg) {
  return &cfg->wifi.sta1;
}
int         mgos_config_get_wifi_sta1_enable(struct mgos_config *cfg) {
  return cfg->wifi.sta1.enable;
}
const char *mgos_config_get_wifi_sta1_ssid(struct mgos_config *cfg) {
  return cfg->wifi.sta1.ssid;
}
const char *mgos_config_get_wifi_sta1_pass(struct mgos_config *cfg) {
  return cfg->wifi.sta1.pass;
}
const char *mgos_config_get_wifi_sta1_user(struct mgos_config *cfg) {
  return cfg->wifi.sta1.user;
}
const char *mgos_config_get_wifi_sta1_anon_identity(struct mgos_config *cfg) {
  return cfg->wifi.sta1.anon_identity;
}
const char *mgos_config_get_wifi_sta1_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta1.cert;
}
const char *mgos_config_get_wifi_sta1_key(struct mgos_config *cfg) {
  return cfg->wifi.sta1.key;
}
const char *mgos_config_get_wifi_sta1_ca_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta1.ca_cert;
}
const char *mgos_config_get_wifi_sta1_ip(struct mgos_config *cfg) {
  return cfg->wifi.sta1.ip;
}
const char *mgos_config_get_wifi_sta1_netmask(struct mgos_config *cfg) {
  return cfg->wifi.sta1.netmask;
}
const char *mgos_config_get_wifi_sta1_gw(struct mgos_config *cfg) {
  return cfg->wifi.sta1.gw;
}
const char *mgos_config_get_wifi_sta1_nameserver(struct mgos_config *cfg) {
  return cfg->wifi.sta1.nameserver;
}
const char *mgos_config_get_wifi_sta1_dhcp_hostname(struct mgos_config *cfg) {
  return cfg->wifi.sta1.dhcp_hostname;
}
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta2(struct mgos_config *cfg) {
  return &cfg->wifi.sta2;
}
int         mgos_config_get_wifi_sta2_enable(struct mgos_config *cfg) {
  return cfg->wifi.sta2.enable;
}
const char *mgos_config_get_wifi_sta2_ssid(struct mgos_config *cfg) {
  return cfg->wifi.sta2.ssid;
}
const char *mgos_config_get_wifi_sta2_pass(struct mgos_config *cfg) {
  return cfg->wifi.sta2.pass;
}
const char *mgos_config_get_wifi_sta2_user(struct mgos_config *cfg) {
  return cfg->wifi.sta2.user;
}
const char *mgos_config_get_wifi_sta2_anon_identity(struct mgos_config *cfg) {
  return cfg->wifi.sta2.anon_identity;
}
const char *mgos_config_get_wifi_sta2_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta2.cert;
}
const char *mgos_config_get_wifi_sta2_key(struct mgos_config *cfg) {
  return cfg->wifi.sta2.key;
}
const char *mgos_config_get_wifi_sta2_ca_cert(struct mgos_config *cfg) {
  return cfg->wifi.sta2.ca_cert;
}
const char *mgos_config_get_wifi_sta2_ip(struct mgos_config *cfg) {
  return cfg->wifi.sta2.ip;
}
const char *mgos_config_get_wifi_sta2_netmask(struct mgos_config *cfg) {
  return cfg->wifi.sta2.netmask;
}
const char *mgos_config_get_wifi_sta2_gw(struct mgos_config *cfg) {
  return cfg->wifi.sta2.gw;
}
const char *mgos_config_get_wifi_sta2_nameserver(struct mgos_config *cfg) {
  return cfg->wifi.sta2.nameserver;
}
const char *mgos_config_get_wifi_sta2_dhcp_hostname(struct mgos_config *cfg) {
  return cfg->wifi.sta2.dhcp_hostname;
}
int         mgos_config_get_wifi_sta_cfg_idx(struct mgos_config *cfg) {
  return cfg->wifi.sta_cfg_idx;
}
int         mgos_config_get_wifi_sta_connect_timeout(struct mgos_config *cfg) {
  return cfg->wifi.sta_connect_timeout;
}
const struct mgos_config_sntp *mgos_config_get_sntp(struct mgos_config *cfg) {
  return &cfg->sntp;
}
int         mgos_config_get_sntp_enable(struct mgos_config *cfg) {
  return cfg->sntp.enable;
}
const char *mgos_config_get_sntp_server(struct mgos_config *cfg) {
  return cfg->sntp.server;
}
int         mgos_config_get_sntp_retry_min(struct mgos_config *cfg) {
  return cfg->sntp.retry_min;
}
int         mgos_config_get_sntp_retry_max(struct mgos_config *cfg) {
  return cfg->sntp.retry_max;
}
int         mgos_config_get_sntp_update_interval(struct mgos_config *cfg) {
  return cfg->sntp.update_interval;
}
const struct mgos_config_board *mgos_config_get_board(struct mgos_config *cfg) {
  return &cfg->board;
}
const struct mgos_config_board_led1 *mgos_config_get_board_led1(struct mgos_config *cfg) {
  return &cfg->board.led1;
}
int         mgos_config_get_board_led1_pin(struct mgos_config *cfg) {
  return cfg->board.led1.pin;
}
int         mgos_config_get_board_led1_active_high(struct mgos_config *cfg) {
  return cfg->board.led1.active_high;
}
const struct mgos_config_board_led2 *mgos_config_get_board_led2(struct mgos_config *cfg) {
  return &cfg->board.led2;
}
int         mgos_config_get_board_led2_pin(struct mgos_config *cfg) {
  return cfg->board.led2.pin;
}
int         mgos_config_get_board_led2_active_high(struct mgos_config *cfg) {
  return cfg->board.led2.active_high;
}
const struct mgos_config_board_led3 *mgos_config_get_board_led3(struct mgos_config *cfg) {
  return &cfg->board.led3;
}
int         mgos_config_get_board_led3_pin(struct mgos_config *cfg) {
  return cfg->board.led3.pin;
}
int         mgos_config_get_board_led3_active_high(struct mgos_config *cfg) {
  return cfg->board.led3.active_high;
}
const struct mgos_config_board_btn1 *mgos_config_get_board_btn1(struct mgos_config *cfg) {
  return &cfg->board.btn1;
}
int         mgos_config_get_board_btn1_pin(struct mgos_config *cfg) {
  return cfg->board.btn1.pin;
}
int         mgos_config_get_board_btn1_pull_up(struct mgos_config *cfg) {
  return cfg->board.btn1.pull_up;
}
const struct mgos_config_board_btn2 *mgos_config_get_board_btn2(struct mgos_config *cfg) {
  return &cfg->board.btn2;
}
int         mgos_config_get_board_btn2_pin(struct mgos_config *cfg) {
  return cfg->board.btn2.pin;
}
int         mgos_config_get_board_btn2_pull_up(struct mgos_config *cfg) {
  return cfg->board.btn2.pull_up;
}
const struct mgos_config_board_btn3 *mgos_config_get_board_btn3(struct mgos_config *cfg) {
  return &cfg->board.btn3;
}
int         mgos_config_get_board_btn3_pin(struct mgos_config *cfg) {
  return cfg->board.btn3.pin;
}
int         mgos_config_get_board_btn3_pull_up(struct mgos_config *cfg) {
  return cfg->board.btn3.pull_up;
}
const struct mgos_config_hardware *mgos_config_get_hardware(struct mgos_config *cfg) {
  return &cfg->hardware;
}
const struct mgos_config_hardware_pin *mgos_config_get_hardware_pin(struct mgos_config *cfg) {
  return &cfg->hardware.pin;
}
int         mgos_config_get_hardware_pin_voltage(struct mgos_config *cfg) {
  return cfg->hardware.pin.voltage;
}
int         mgos_config_get_hardware_pin_thermal(struct mgos_config *cfg) {
  return cfg->hardware.pin.thermal;
}
int         mgos_config_get_hardware_pin_contactor(struct mgos_config *cfg) {
  return cfg->hardware.pin.contactor;
}
int         mgos_config_get_hardware_pin_on_relay(struct mgos_config *cfg) {
  return cfg->hardware.pin.on_relay;
}
int         mgos_config_get_hardware_pin_off_relay(struct mgos_config *cfg) {
  return cfg->hardware.pin.off_relay;
}
const struct mgos_config_hardware_timer *mgos_config_get_hardware_timer(struct mgos_config *cfg) {
  return &cfg->hardware.timer;
}
int         mgos_config_get_hardware_timer_telemetry(struct mgos_config *cfg) {
  return cfg->hardware.timer.telemetry;
}
int         mgos_config_get_hardware_timer_pulse(struct mgos_config *cfg) {
  return cfg->hardware.timer.pulse;
}
/* }}} */

/* Setters {{{ */
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.udp_log_addr, val);
}
void mgos_config_set_debug_level(struct mgos_config *cfg, int         val) {
  cfg->debug.level = val;
}
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.file_level, val);
}
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int         val) {
  cfg->debug.stdout_uart = val;
}
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int         val) {
  cfg->debug.stderr_uart = val;
}
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int         val) {
  cfg->debug.factory_reset_gpio = val;
}
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.mg_mgr_hexdump_file, val);
}
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int         val) {
  cfg->debug.mbedtls_level = val;
}
void mgos_config_set_debug_stdout_topic(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.stdout_topic, val);
}
void mgos_config_set_debug_stderr_topic(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->debug.stderr_topic, val);
}
void mgos_config_set_device_id(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->device.id, val);
}
void mgos_config_set_device_license(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->device.license, val);
}
void mgos_config_set_device_firmware(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->device.firmware, val);
}
void mgos_config_set_device_hardware(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->device.hardware, val);
}
void mgos_config_set_device_ota_url(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->device.ota_url, val);
}
void mgos_config_set_device_new_firmware(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->device.new_firmware, val);
}
void mgos_config_set_device_subscription(struct mgos_config *cfg, int         val) {
  cfg->device.subscription = val;
}
void mgos_config_set_sys_mount_path(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.path, val);
}
void mgos_config_set_sys_mount_dev_type(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.dev_type, val);
}
void mgos_config_set_sys_mount_dev_opts(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.dev_opts, val);
}
void mgos_config_set_sys_mount_fs_type(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.fs_type, val);
}
void mgos_config_set_sys_mount_fs_opts(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.mount.fs_opts, val);
}
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.tz_spec, val);
}
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int         val) {
  cfg->sys.wdt_timeout = val;
}
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sys.pref_ota_lib, val);
}
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int         val) {
  cfg->sys.atca.enable = val;
}
void mgos_config_set_sys_atca_i2c_bus(struct mgos_config *cfg, int         val) {
  cfg->sys.atca.i2c_bus = val;
}
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int         val) {
  cfg->sys.atca.i2c_addr = val;
}
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int         val) {
  cfg->sys.atca.ecdh_slots_mask = val;
}
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->conf_acl, val);
}
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int         val) {
  cfg->i2c.enable = val;
}
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int         val) {
  cfg->i2c.freq = val;
}
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int         val) {
  cfg->i2c.debug = val;
}
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int         val) {
  cfg->i2c.sda_gpio = val;
}
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int         val) {
  cfg->i2c.scl_gpio = val;
}
void mgos_config_set_http_enable(struct mgos_config *cfg, int         val) {
  cfg->http.enable = val;
}
void mgos_config_set_http_listen_addr(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.listen_addr, val);
}
void mgos_config_set_http_document_root(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.document_root, val);
}
void mgos_config_set_http_ssl_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.ssl_cert, val);
}
void mgos_config_set_http_ssl_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.ssl_key, val);
}
void mgos_config_set_http_ssl_ca_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.ssl_ca_cert, val);
}
void mgos_config_set_http_upload_acl(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.upload_acl, val);
}
void mgos_config_set_http_hidden_files(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.hidden_files, val);
}
void mgos_config_set_http_auth_domain(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.auth_domain, val);
}
void mgos_config_set_http_auth_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->http.auth_file, val);
}
void mgos_config_set_mjs_generate_jsc(struct mgos_config *cfg, int         val) {
  cfg->mjs.generate_jsc = val;
}
void mgos_config_set_mqtt_enable(struct mgos_config *cfg, int         val) {
  cfg->mqtt.enable = val;
}
void mgos_config_set_mqtt_server(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.server, val);
}
void mgos_config_set_mqtt_client_id(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.client_id, val);
}
void mgos_config_set_mqtt_user(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.user, val);
}
void mgos_config_set_mqtt_pass(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.pass, val);
}
void mgos_config_set_mqtt_reconnect_timeout_min(struct mgos_config *cfg, double      val) {
  cfg->mqtt.reconnect_timeout_min = val;
}
void mgos_config_set_mqtt_reconnect_timeout_max(struct mgos_config *cfg, double      val) {
  cfg->mqtt.reconnect_timeout_max = val;
}
void mgos_config_set_mqtt_ssl_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_cert, val);
}
void mgos_config_set_mqtt_ssl_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_key, val);
}
void mgos_config_set_mqtt_ssl_ca_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_ca_cert, val);
}
void mgos_config_set_mqtt_ssl_cipher_suites(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_cipher_suites, val);
}
void mgos_config_set_mqtt_ssl_psk_identity(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_psk_identity, val);
}
void mgos_config_set_mqtt_ssl_psk_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.ssl_psk_key, val);
}
void mgos_config_set_mqtt_clean_session(struct mgos_config *cfg, int         val) {
  cfg->mqtt.clean_session = val;
}
void mgos_config_set_mqtt_keep_alive(struct mgos_config *cfg, int         val) {
  cfg->mqtt.keep_alive = val;
}
void mgos_config_set_mqtt_will_topic(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.will_topic, val);
}
void mgos_config_set_mqtt_will_message(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt.will_message, val);
}
void mgos_config_set_mqtt_max_qos(struct mgos_config *cfg, int         val) {
  cfg->mqtt.max_qos = val;
}
void mgos_config_set_mqtt_recv_mbuf_limit(struct mgos_config *cfg, int         val) {
  cfg->mqtt.recv_mbuf_limit = val;
}
void mgos_config_set_mqtt_require_time(struct mgos_config *cfg, int         val) {
  cfg->mqtt.require_time = val;
}
void mgos_config_set_mqtt_cloud_events(struct mgos_config *cfg, int         val) {
  cfg->mqtt.cloud_events = val;
}
void mgos_config_set_mqtt1_enable(struct mgos_config *cfg, int         val) {
  cfg->mqtt1.enable = val;
}
void mgos_config_set_mqtt1_server(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt1.server, val);
}
void mgos_config_set_mqtt1_client_id(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt1.client_id, val);
}
void mgos_config_set_mqtt1_user(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt1.user, val);
}
void mgos_config_set_mqtt1_pass(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt1.pass, val);
}
void mgos_config_set_mqtt1_reconnect_timeout_min(struct mgos_config *cfg, double      val) {
  cfg->mqtt1.reconnect_timeout_min = val;
}
void mgos_config_set_mqtt1_reconnect_timeout_max(struct mgos_config *cfg, double      val) {
  cfg->mqtt1.reconnect_timeout_max = val;
}
void mgos_config_set_mqtt1_ssl_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_cert, val);
}
void mgos_config_set_mqtt1_ssl_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_key, val);
}
void mgos_config_set_mqtt1_ssl_ca_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_ca_cert, val);
}
void mgos_config_set_mqtt1_ssl_cipher_suites(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_cipher_suites, val);
}
void mgos_config_set_mqtt1_ssl_psk_identity(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_psk_identity, val);
}
void mgos_config_set_mqtt1_ssl_psk_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt1.ssl_psk_key, val);
}
void mgos_config_set_mqtt1_clean_session(struct mgos_config *cfg, int         val) {
  cfg->mqtt1.clean_session = val;
}
void mgos_config_set_mqtt1_keep_alive(struct mgos_config *cfg, int         val) {
  cfg->mqtt1.keep_alive = val;
}
void mgos_config_set_mqtt1_will_topic(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt1.will_topic, val);
}
void mgos_config_set_mqtt1_will_message(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->mqtt1.will_message, val);
}
void mgos_config_set_mqtt1_max_qos(struct mgos_config *cfg, int         val) {
  cfg->mqtt1.max_qos = val;
}
void mgos_config_set_mqtt1_recv_mbuf_limit(struct mgos_config *cfg, int         val) {
  cfg->mqtt1.recv_mbuf_limit = val;
}
void mgos_config_set_mqtt1_require_time(struct mgos_config *cfg, int         val) {
  cfg->mqtt1.require_time = val;
}
void mgos_config_set_mqtt1_cloud_events(struct mgos_config *cfg, int         val) {
  cfg->mqtt1.cloud_events = val;
}
void mgos_config_set_provision_btn_pin(struct mgos_config *cfg, int         val) {
  cfg->provision.btn.pin = val;
}
void mgos_config_set_provision_btn_pull_up(struct mgos_config *cfg, int         val) {
  cfg->provision.btn.pull_up = val;
}
void mgos_config_set_provision_btn_hold_ms(struct mgos_config *cfg, int         val) {
  cfg->provision.btn.hold_ms = val;
}
void mgos_config_set_provision_led_pin(struct mgos_config *cfg, int         val) {
  cfg->provision.led.pin = val;
}
void mgos_config_set_provision_led_active_high(struct mgos_config *cfg, int         val) {
  cfg->provision.led.active_high = val;
}
void mgos_config_set_provision_stable_state(struct mgos_config *cfg, int         val) {
  cfg->provision.stable_state = val;
}
void mgos_config_set_provision_timeout(struct mgos_config *cfg, int         val) {
  cfg->provision.timeout = val;
}
void mgos_config_set_provision_max_state(struct mgos_config *cfg, int         val) {
  cfg->provision.max_state = val;
}
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int         val) {
  cfg->rpc.enable = val;
}
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int         val) {
  cfg->rpc.max_frame_size = val;
}
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int         val) {
  cfg->rpc.max_queue_length = val;
}
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int         val) {
  cfg->rpc.default_out_channel_idle_close_timeout = val;
}
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.acl_file, val);
}
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.auth_domain, val);
}
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.auth_file, val);
}
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int         val) {
  cfg->rpc.uart.uart_no = val;
}
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int         val) {
  cfg->rpc.uart.baud_rate = val;
}
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int         val) {
  cfg->rpc.uart.fc_type = val;
}
void mgos_config_set_rpc_uart_dst(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->rpc.uart.dst, val);
}
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.enable = val;
}
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.ssid, val);
}
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.pass, val);
}
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.hidden = val;
}
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.channel = val;
}
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.max_connections = val;
}
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.ip, val);
}
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.netmask, val);
}
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.gw, val);
}
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.dhcp_start, val);
}
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.dhcp_end, val);
}
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.trigger_on_gpio = val;
}
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.disable_after = val;
}
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.ap.hostname, val);
}
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int         val) {
  cfg->wifi.ap.keep_enabled = val;
}
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int         val) {
  cfg->wifi.sta.enable = val;
}
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.ssid, val);
}
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.pass, val);
}
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.user, val);
}
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.anon_identity, val);
}
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.cert, val);
}
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.key, val);
}
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.ca_cert, val);
}
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.ip, val);
}
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.netmask, val);
}
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.gw, val);
}
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.nameserver, val);
}
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta.dhcp_hostname, val);
}
void mgos_config_set_wifi_sta1_enable(struct mgos_config *cfg, int         val) {
  cfg->wifi.sta1.enable = val;
}
void mgos_config_set_wifi_sta1_ssid(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.ssid, val);
}
void mgos_config_set_wifi_sta1_pass(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.pass, val);
}
void mgos_config_set_wifi_sta1_user(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.user, val);
}
void mgos_config_set_wifi_sta1_anon_identity(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.anon_identity, val);
}
void mgos_config_set_wifi_sta1_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.cert, val);
}
void mgos_config_set_wifi_sta1_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.key, val);
}
void mgos_config_set_wifi_sta1_ca_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.ca_cert, val);
}
void mgos_config_set_wifi_sta1_ip(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.ip, val);
}
void mgos_config_set_wifi_sta1_netmask(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.netmask, val);
}
void mgos_config_set_wifi_sta1_gw(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.gw, val);
}
void mgos_config_set_wifi_sta1_nameserver(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.nameserver, val);
}
void mgos_config_set_wifi_sta1_dhcp_hostname(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta1.dhcp_hostname, val);
}
void mgos_config_set_wifi_sta2_enable(struct mgos_config *cfg, int         val) {
  cfg->wifi.sta2.enable = val;
}
void mgos_config_set_wifi_sta2_ssid(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.ssid, val);
}
void mgos_config_set_wifi_sta2_pass(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.pass, val);
}
void mgos_config_set_wifi_sta2_user(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.user, val);
}
void mgos_config_set_wifi_sta2_anon_identity(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.anon_identity, val);
}
void mgos_config_set_wifi_sta2_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.cert, val);
}
void mgos_config_set_wifi_sta2_key(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.key, val);
}
void mgos_config_set_wifi_sta2_ca_cert(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.ca_cert, val);
}
void mgos_config_set_wifi_sta2_ip(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.ip, val);
}
void mgos_config_set_wifi_sta2_netmask(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.netmask, val);
}
void mgos_config_set_wifi_sta2_gw(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.gw, val);
}
void mgos_config_set_wifi_sta2_nameserver(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.nameserver, val);
}
void mgos_config_set_wifi_sta2_dhcp_hostname(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->wifi.sta2.dhcp_hostname, val);
}
void mgos_config_set_wifi_sta_cfg_idx(struct mgos_config *cfg, int         val) {
  cfg->wifi.sta_cfg_idx = val;
}
void mgos_config_set_wifi_sta_connect_timeout(struct mgos_config *cfg, int         val) {
  cfg->wifi.sta_connect_timeout = val;
}
void mgos_config_set_sntp_enable(struct mgos_config *cfg, int         val) {
  cfg->sntp.enable = val;
}
void mgos_config_set_sntp_server(struct mgos_config *cfg, const char *val) {
  mgos_conf_set_str(&cfg->sntp.server, val);
}
void mgos_config_set_sntp_retry_min(struct mgos_config *cfg, int         val) {
  cfg->sntp.retry_min = val;
}
void mgos_config_set_sntp_retry_max(struct mgos_config *cfg, int         val) {
  cfg->sntp.retry_max = val;
}
void mgos_config_set_sntp_update_interval(struct mgos_config *cfg, int         val) {
  cfg->sntp.update_interval = val;
}
void mgos_config_set_board_led1_pin(struct mgos_config *cfg, int         val) {
  cfg->board.led1.pin = val;
}
void mgos_config_set_board_led1_active_high(struct mgos_config *cfg, int         val) {
  cfg->board.led1.active_high = val;
}
void mgos_config_set_board_led2_pin(struct mgos_config *cfg, int         val) {
  cfg->board.led2.pin = val;
}
void mgos_config_set_board_led2_active_high(struct mgos_config *cfg, int         val) {
  cfg->board.led2.active_high = val;
}
void mgos_config_set_board_led3_pin(struct mgos_config *cfg, int         val) {
  cfg->board.led3.pin = val;
}
void mgos_config_set_board_led3_active_high(struct mgos_config *cfg, int         val) {
  cfg->board.led3.active_high = val;
}
void mgos_config_set_board_btn1_pin(struct mgos_config *cfg, int         val) {
  cfg->board.btn1.pin = val;
}
void mgos_config_set_board_btn1_pull_up(struct mgos_config *cfg, int         val) {
  cfg->board.btn1.pull_up = val;
}
void mgos_config_set_board_btn2_pin(struct mgos_config *cfg, int         val) {
  cfg->board.btn2.pin = val;
}
void mgos_config_set_board_btn2_pull_up(struct mgos_config *cfg, int         val) {
  cfg->board.btn2.pull_up = val;
}
void mgos_config_set_board_btn3_pin(struct mgos_config *cfg, int         val) {
  cfg->board.btn3.pin = val;
}
void mgos_config_set_board_btn3_pull_up(struct mgos_config *cfg, int         val) {
  cfg->board.btn3.pull_up = val;
}
void mgos_config_set_hardware_pin_voltage(struct mgos_config *cfg, int         val) {
  cfg->hardware.pin.voltage = val;
}
void mgos_config_set_hardware_pin_thermal(struct mgos_config *cfg, int         val) {
  cfg->hardware.pin.thermal = val;
}
void mgos_config_set_hardware_pin_contactor(struct mgos_config *cfg, int         val) {
  cfg->hardware.pin.contactor = val;
}
void mgos_config_set_hardware_pin_on_relay(struct mgos_config *cfg, int         val) {
  cfg->hardware.pin.on_relay = val;
}
void mgos_config_set_hardware_pin_off_relay(struct mgos_config *cfg, int         val) {
  cfg->hardware.pin.off_relay = val;
}
void mgos_config_set_hardware_timer_telemetry(struct mgos_config *cfg, int         val) {
  cfg->hardware.timer.telemetry = val;
}
void mgos_config_set_hardware_timer_pulse(struct mgos_config *cfg, int         val) {
  cfg->hardware.timer.pulse = val;
}
/* }}} */
