// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace binary_sensor;
using namespace sensor;
using namespace text_sensor;
using namespace switch_;
using namespace number;
using namespace button;
logger::Logger *logger_logger_id;
web_server_base::WebServerBase *web_server_base_webserverbase_id;
captive_portal::CaptivePortal *captive_portal_captiveportal_id;
wifi::WiFiComponent *wifi_wificomponent_id;
mdns::MDNSComponent *mdns_mdnscomponent_id;
esphome::ESPHomeOTAComponent *esphome_esphomeotacomponent_id;
web_server::WebServerOTAComponent *web_server_webserverotacomponent_id;
safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
api::APIServer *api_apiserver_id;
using namespace api;
esp32_ble_tracker::ESP32BLETracker *esp32_ble_tracker_esp32bletracker_id;
ble_client::BLEClient *client_jk_bms;
jk_bms_ble::JkBmsBle *bms0;
binary_sensor::BinarySensor *binary_sensor_binarysensor_id_2;
binary_sensor::BinarySensor *binary_sensor_binarysensor_id_3;
binary_sensor::BinarySensor *binary_sensor_binarysensor_id;
binary_sensor::BinarySensor *binary_sensor_binarysensor_id_5;
binary_sensor::BinarySensor *binary_sensor_binarysensor_id_4;
sensor::Sensor *sensor_sensor_id_24;
sensor::Sensor *sensor_sensor_id_25;
sensor::Sensor *sensor_sensor_id_26;
sensor::Sensor *sensor_sensor_id_27;
sensor::Sensor *sensor_sensor_id_28;
sensor::Sensor *sensor_sensor_id_29;
sensor::Sensor *sensor_sensor_id_30;
sensor::Sensor *sensor_sensor_id_31;
sensor::Sensor *sensor_sensor_id_32;
sensor::Sensor *sensor_sensor_id_33;
sensor::Sensor *sensor_sensor_id_34;
sensor::Sensor *sensor_sensor_id_35;
sensor::Sensor *sensor_sensor_id_36;
sensor::Sensor *sensor_sensor_id_37;
sensor::Sensor *sensor_sensor_id_38;
sensor::Sensor *sensor_sensor_id_39;
sensor::Sensor *sensor_sensor_id_21;
sensor::Sensor *sensor_sensor_id_22;
sensor::Sensor *sensor_sensor_id_15;
sensor::Sensor *sensor_sensor_id_16;
sensor::Sensor *sensor_sensor_id_17;
sensor::Sensor *sensor_sensor_id_18;
sensor::Sensor *sensor_sensor_id_19;
sensor::Sensor *sensor_sensor_id_20;
sensor::Sensor *sensor_sensor_id;
sensor::Sensor *sensor_sensor_id_2;
sensor::Sensor *sensor_sensor_id_3;
sensor::Sensor *sensor_sensor_id_4;
sensor::Sensor *sensor_sensor_id_5;
sensor::Sensor *sensor_sensor_id_23;
sensor::Sensor *sensor_sensor_id_6;
sensor::Sensor *sensor_sensor_id_7;
sensor::Sensor *sensor_sensor_id_8;
sensor::Sensor *sensor_sensor_id_9;
sensor::Sensor *sensor_sensor_id_10;
sensor::Sensor *sensor_sensor_id_11;
sensor::Sensor *sensor_sensor_id_12;
sensor::Sensor *sensor_sensor_id_14;
sensor::Sensor *sensor_sensor_id_13;
text_sensor::TextSensor *text_sensor_textsensor_id;
text_sensor::TextSensor *text_sensor_textsensor_id_3;
text_sensor::TextSensor *text_sensor_textsensor_id_2;
jk_bms_ble::JkSwitch *jk_bms_ble_jkswitch_id;
jk_bms_ble::JkSwitch *jk_bms_ble_jkswitch_id_2;
jk_bms_ble::JkSwitch *jk_bms_ble_jkswitch_id_3;
jk_bms_ble::JkSwitch *jk_bms_ble_jkswitch_id_4;
jk_bms_ble::JkSwitch *jk_bms_ble_jkswitch_id_5;
jk_bms_ble::JkSwitch *jk_bms_ble_jkswitch_id_6;
jk_bms_ble::JkSwitch *jk_bms_ble_jkswitch_id_7;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_4;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_5;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_2;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_3;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_21;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_7;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_6;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_22;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_8;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_9;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_10;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_11;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_12;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_13;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_14;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_15;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_16;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_17;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_18;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_19;
jk_bms_ble::JkNumber *jk_bms_ble_jknumber_id_20;
jk_bms_ble::JkButton *jk_bms_ble_jkbutton_id;
jk_bms_ble::JkButton *jk_bms_ble_jkbutton_id_2;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
esp32_ble::ESP32BLE *esp32_ble_esp32ble_id;
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // esphome:
  //   name: jk-bms
  //   friendly_name: JK BMS Powerbank
  //   min_version: 2025.10.5
  //   build_path: build/jk-bms
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   debug_scheduler: false
  //   areas: []
  //   devices: []
  App.pre_setup("jk-bms", "JK BMS Powerbank", "", __DATE__ ", " __TIME__, false);
  // binary_sensor:
  // sensor:
  // text_sensor:
  // switch:
  // number:
  // button:
  // logger:
  //   level: INFO
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   task_log_buffer_size: 768
  //   hardware_uart: UART0
  //   logs: {}
  //   runtime_tag_levels: false
  logger_logger_id = new logger::Logger(115200, 512);
  logger_logger_id->create_pthread_key();
  logger_logger_id->init_log_buffer(768);
  logger_logger_id->set_log_level(ESPHOME_LOG_LEVEL_INFO);
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger_id->pre_setup();
  logger_logger_id->set_component_source(LOG_STR("logger"));
  App.register_component(logger_logger_id);
  // web_server_base:
  //   id: web_server_base_webserverbase_id
  web_server_base_webserverbase_id = new web_server_base::WebServerBase();
  web_server_base_webserverbase_id->set_component_source(LOG_STR("web_server_base"));
  App.register_component(web_server_base_webserverbase_id);
  web_server_base::global_web_server_base = web_server_base_webserverbase_id;
  // captive_portal:
  //   id: captive_portal_captiveportal_id
  //   web_server_base_id: web_server_base_webserverbase_id
  captive_portal_captiveportal_id = new captive_portal::CaptivePortal(web_server_base_webserverbase_id);
  captive_portal_captiveportal_id->set_component_source(LOG_STR("captive_portal"));
  App.register_component(captive_portal_captiveportal_id);
  // wifi:
  //   ap:
  //     ssid: JK-BMS Fallback
  //     password: fallback123
  //     id: wifi_wifiap_id
  //     ap_timeout: 1min
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   fast_connect: false
  //   enable_btm: false
  //   enable_rrm: false
  //   passive_scan: false
  //   enable_on_boot: true
  //   networks:
  //     - ssid: !secret 'wifi_ssid'
  //       password: !secret 'wifi_password'
  //       id: wifi_wifiap_id_2
  //       priority: 0.0
  //   use_address: jk-bms.local
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("jk-bms.local");
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("Rudzki Parapet_2.4GHz");
  wifi_wifiap_id_2.set_password("ciaobella");
  wifi_wifiap_id_2.set_priority(0.0f);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id_2);
  }
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("JK-BMS Fallback");
  wifi_wifiap_id.set_password("fallback123");
  wifi_wificomponent_id->set_ap(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_ap_timeout(60000);
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent_id->set_fast_connect(false);
  wifi_wificomponent_id->set_passive_scan(false);
  wifi_wificomponent_id->set_enable_on_boot(true);
  wifi_wificomponent_id->set_component_source(LOG_STR("wifi"));
  App.register_component(wifi_wificomponent_id);
  // mdns:
  //   id: mdns_mdnscomponent_id
  //   disabled: false
  //   services: []
  mdns_mdnscomponent_id = new mdns::MDNSComponent();
  mdns_mdnscomponent_id->set_component_source(LOG_STR("mdns"));
  App.register_component(mdns_mdnscomponent_id);
  // ota:
  // ota.esphome:
  //   platform: esphome
  //   password: !secret 'ota_password'
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  esphome_esphomeotacomponent_id->set_auth_password("pick-anything");
  esphome_esphomeotacomponent_id->set_component_source(LOG_STR("esphome.ota"));
  App.register_component(esphome_esphomeotacomponent_id);
  // ota.web_server:
  //   platform: web_server
  //   id: web_server_webserverotacomponent_id
  web_server_webserverotacomponent_id = new web_server::WebServerOTAComponent();
  // safe_mode:
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  //   num_attempts: 10
  //   reboot_timeout: 5min
  safe_mode_safemodecomponent_id = new safe_mode::SafeModeComponent();
  safe_mode_safemodecomponent_id->set_component_source(LOG_STR("safe_mode"));
  App.register_component(safe_mode_safemodecomponent_id);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000)) return;
  web_server_webserverotacomponent_id->set_component_source(LOG_STR("web_server.ota"));
  App.register_component(web_server_webserverotacomponent_id);
  // api:
  //   encryption:
  //     key: !secret 'api_encryption_key'
  //   id: api_apiserver_id
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  //   batch_delay: 100ms
  //   custom_services: false
  //   homeassistant_services: false
  //   homeassistant_states: false
  //   listen_backlog: 4
  //   max_connections: 8
  //   max_send_queue: 8
  api_apiserver_id = new api::APIServer();
  api_apiserver_id->set_component_source(LOG_STR("api"));
  App.register_component(api_apiserver_id);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_reboot_timeout(900000);
  api_apiserver_id->set_batch_delay(100);
  api_apiserver_id->set_listen_backlog(4);
  api_apiserver_id->set_max_connections(8);
  api_apiserver_id->set_noise_psk({111, 170, 35, 9, 242, 245, 132, 8, 203, 31, 107, 123, 154, 207, 29, 158, 101, 141, 209, 134, 63, 247, 221, 183, 55, 161, 2, 111, 10, 187, 194, 24});
  // substitutions:
  //   name: jk-bms
  //   friendly_name: JK BMS Powerbank
  //   bms_mac: C8:47:80:50:0F:8C
  // esp32:
  //   board: esp32dev
  //   framework:
  //     type: arduino
  //     version: 3.2.1
  //     sdkconfig_options: {}
  //     log_level: ERROR
  //     advanced:
  //       compiler_optimization: SIZE
  //       enable_lwip_assert: true
  //       ignore_efuse_custom_mac: false
  //       enable_lwip_mdns_queries: true
  //       enable_lwip_bridge_interface: false
  //       enable_lwip_tcpip_core_locking: true
  //       enable_lwip_check_thread_safety: true
  //     components: []
  //     platform_version: https:github.com/pioarduino/platform-espressif32/releases/download/54.03.21-2/platform-espressif32.zip
  //     source: pioarduino/framework-arduinoespressif32@https:github.com/espressif/arduino-esp32/releases/download/3.2.1/esp32-3.2.1.zip
  //   flash_size: 4MB
  //   variant: ESP32
  //   cpu_frequency: 160MHZ
  // external_components:
  //   - source:
  //       url: https:github.com/syssi/esphome-jk-bms.git
  //       ref: main
  //       type: git
  //     refresh: 0s
  //     components: all
  // esp32_ble_tracker:
  //   scan_parameters:
  //     active: true
  //     duration: 5min
  //     interval: 320ms
  //     window: 30ms
  //     continuous: true
  //   id: esp32_ble_tracker_esp32bletracker_id
  //   ble_id: esp32_ble_esp32ble_id
  //   software_coexistence: true
  esp32_ble_tracker_esp32bletracker_id = new esp32_ble_tracker::ESP32BLETracker();
  esp32_ble_tracker_esp32bletracker_id->set_component_source(LOG_STR("esp32_ble_tracker"));
  App.register_component(esp32_ble_tracker_esp32bletracker_id);
  // ble_client:
  //   mac_address: C8:47:80:50:0F:8C
  //   id: client_jk_bms
  //   auto_connect: true
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker_id
  client_jk_bms = new ble_client::BLEClient();
  client_jk_bms->set_component_source(LOG_STR("ble_client"));
  App.register_component(client_jk_bms);
  esp32_ble_tracker_esp32bletracker_id->register_client(client_jk_bms);
  client_jk_bms->set_address(0xC84780500F8CULL);
  client_jk_bms->set_auto_connect(true);
  // jk_bms_ble:
  //   ble_client_id: client_jk_bms
  //   protocol_version: JK02_32S
  //   throttle: 5s
  //   id: bms0
  //   update_interval: 5s
  bms0 = new jk_bms_ble::JkBmsBle();
  bms0->set_update_interval(5000);
  bms0->set_component_source(LOG_STR("jk_bms_ble"));
  App.register_component(bms0);
  client_jk_bms->register_ble_node(bms0);
  bms0->set_throttle(5000);
  bms0->set_protocol_version(jk_bms_ble::PROTOCOL_VERSION_JK02_32S);
  // binary_sensor.jk_bms_ble:
  //   platform: jk_bms_ble
  //   jk_bms_ble_id: bms0
  //   balancing:
  //     name: Balancing
  //     disabled_by_default: false
  //     id: binary_sensor_binarysensor_id
  //     icon: mdi:battery-heart-variant
  //   charging:
  //     name: Charging
  //     disabled_by_default: false
  //     id: binary_sensor_binarysensor_id_2
  //     icon: mdi:battery-charging
  //   discharging:
  //     name: Discharging
  //     disabled_by_default: false
  //     id: binary_sensor_binarysensor_id_3
  //     icon: mdi:power-plug
  //   online_status:
  //     name: Online
  //     disabled_by_default: false
  //     id: binary_sensor_binarysensor_id_4
  //     entity_category: diagnostic
  //     device_class: connectivity
  //   heating:
  //     name: Heating
  //     disabled_by_default: false
  //     id: binary_sensor_binarysensor_id_5
  //     icon: mdi:radiator
  binary_sensor_binarysensor_id_2 = new binary_sensor::BinarySensor();
  App.register_binary_sensor(binary_sensor_binarysensor_id_2);
  binary_sensor_binarysensor_id_2->set_name("Charging");
  binary_sensor_binarysensor_id_2->set_object_id("charging");
  binary_sensor_binarysensor_id_2->set_disabled_by_default(false);
  binary_sensor_binarysensor_id_2->set_icon("mdi:battery-charging");
  binary_sensor_binarysensor_id_2->set_trigger_on_initial_state(false);
  bms0->set_charging_binary_sensor(binary_sensor_binarysensor_id_2);
  binary_sensor_binarysensor_id_3 = new binary_sensor::BinarySensor();
  App.register_binary_sensor(binary_sensor_binarysensor_id_3);
  binary_sensor_binarysensor_id_3->set_name("Discharging");
  binary_sensor_binarysensor_id_3->set_object_id("discharging");
  binary_sensor_binarysensor_id_3->set_disabled_by_default(false);
  binary_sensor_binarysensor_id_3->set_icon("mdi:power-plug");
  binary_sensor_binarysensor_id_3->set_trigger_on_initial_state(false);
  bms0->set_discharging_binary_sensor(binary_sensor_binarysensor_id_3);
  binary_sensor_binarysensor_id = new binary_sensor::BinarySensor();
  App.register_binary_sensor(binary_sensor_binarysensor_id);
  binary_sensor_binarysensor_id->set_name("Balancing");
  binary_sensor_binarysensor_id->set_object_id("balancing");
  binary_sensor_binarysensor_id->set_disabled_by_default(false);
  binary_sensor_binarysensor_id->set_icon("mdi:battery-heart-variant");
  binary_sensor_binarysensor_id->set_trigger_on_initial_state(false);
  bms0->set_balancing_binary_sensor(binary_sensor_binarysensor_id);
  binary_sensor_binarysensor_id_5 = new binary_sensor::BinarySensor();
  App.register_binary_sensor(binary_sensor_binarysensor_id_5);
  binary_sensor_binarysensor_id_5->set_name("Heating");
  binary_sensor_binarysensor_id_5->set_object_id("heating");
  binary_sensor_binarysensor_id_5->set_disabled_by_default(false);
  binary_sensor_binarysensor_id_5->set_icon("mdi:radiator");
  binary_sensor_binarysensor_id_5->set_trigger_on_initial_state(false);
  bms0->set_heating_binary_sensor(binary_sensor_binarysensor_id_5);
  binary_sensor_binarysensor_id_4 = new binary_sensor::BinarySensor();
  App.register_binary_sensor(binary_sensor_binarysensor_id_4);
  binary_sensor_binarysensor_id_4->set_name("Online");
  binary_sensor_binarysensor_id_4->set_object_id("online");
  binary_sensor_binarysensor_id_4->set_disabled_by_default(false);
  binary_sensor_binarysensor_id_4->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  binary_sensor_binarysensor_id_4->set_device_class("connectivity");
  binary_sensor_binarysensor_id_4->set_trigger_on_initial_state(false);
  bms0->set_online_status_binary_sensor(binary_sensor_binarysensor_id_4);
  // sensor.jk_bms_ble:
  //   platform: jk_bms_ble
  //   jk_bms_ble_id: bms0
  //   total_voltage:
  //     name: Pack Voltage
  //     disabled_by_default: false
  //     id: sensor_sensor_id
  //     force_update: false
  //     unit_of_measurement: V
  //     icon: ''
  //     accuracy_decimals: 3
  //     device_class: voltage
  //     state_class: measurement
  //   current:
  //     name: Pack Current
  //     disabled_by_default: false
  //     id: sensor_sensor_id_2
  //     force_update: false
  //     unit_of_measurement: A
  //     icon: mdi:current-dc
  //     accuracy_decimals: 2
  //     device_class: current
  //     state_class: measurement
  //   power:
  //     name: Pack Power
  //     disabled_by_default: false
  //     id: sensor_sensor_id_3
  //     force_update: false
  //     unit_of_measurement: W
  //     icon: ''
  //     accuracy_decimals: 2
  //     device_class: power
  //     state_class: measurement
  //   charging_power:
  //     name: Charging Power
  //     disabled_by_default: false
  //     id: sensor_sensor_id_4
  //     force_update: false
  //     unit_of_measurement: W
  //     icon: ''
  //     accuracy_decimals: 2
  //     device_class: power
  //     state_class: measurement
  //   discharging_power:
  //     name: Discharging Power
  //     disabled_by_default: false
  //     id: sensor_sensor_id_5
  //     force_update: false
  //     unit_of_measurement: W
  //     icon: ''
  //     accuracy_decimals: 2
  //     device_class: power
  //     state_class: measurement
  //   state_of_charge:
  //     name: SoC
  //     disabled_by_default: false
  //     id: sensor_sensor_id_6
  //     force_update: false
  //     unit_of_measurement: '%'
  //     accuracy_decimals: 0
  //     device_class: battery
  //     state_class: measurement
  //   capacity_remaining:
  //     name: Capacity Remaining
  //     disabled_by_default: false
  //     id: sensor_sensor_id_7
  //     force_update: false
  //     unit_of_measurement: Ah
  //     icon: mdi:battery-50
  //     accuracy_decimals: 3
  //     device_class: ''
  //     state_class: measurement
  //   total_battery_capacity_setting:
  //     name: Total Capacity
  //     disabled_by_default: false
  //     id: sensor_sensor_id_8
  //     force_update: false
  //     unit_of_measurement: Ah
  //     icon: ''
  //     accuracy_decimals: 0
  //     device_class: ''
  //     state_class: measurement
  //   charging_cycles:
  //     name: Cycles
  //     disabled_by_default: false
  //     id: sensor_sensor_id_9
  //     force_update: false
  //     unit_of_measurement: ''
  //     icon: mdi:battery-sync
  //     accuracy_decimals: 0
  //     device_class: ''
  //     state_class: total_increasing
  //   total_charging_cycle_capacity:
  //     name: Cycle Capacity
  //     disabled_by_default: false
  //     id: sensor_sensor_id_10
  //     force_update: false
  //     unit_of_measurement: Ah
  //     icon: mdi:counter
  //     accuracy_decimals: 3
  //     device_class: ''
  //     state_class: total_increasing
  //   total_runtime:
  //     name: Total Runtime
  //     disabled_by_default: false
  //     id: sensor_sensor_id_11
  //     force_update: false
  //     unit_of_measurement: s
  //     icon: mdi:timelapse
  //     accuracy_decimals: 0
  //     device_class: ''
  //     state_class: total_increasing
  //   balancing_current:
  //     name: Balancing Current
  //     disabled_by_default: false
  //     id: sensor_sensor_id_12
  //     force_update: false
  //     unit_of_measurement: A
  //     icon: mdi:current-dc
  //     accuracy_decimals: 2
  //     device_class: current
  //     state_class: measurement
  //   heating_current:
  //     name: Heating Current
  //     disabled_by_default: false
  //     id: sensor_sensor_id_13
  //     force_update: false
  //     unit_of_measurement: A
  //     icon: mdi:current-dc
  //     accuracy_decimals: 2
  //     device_class: current
  //     state_class: measurement
  //   errors_bitmask:
  //     name: Errors Bitmask
  //     disabled_by_default: false
  //     id: sensor_sensor_id_14
  //     force_update: false
  //     unit_of_measurement: ''
  //     icon: mdi:alert-circle-outline
  //     accuracy_decimals: 0
  //     device_class: ''
  //     entity_category: diagnostic
  //   min_cell_voltage:
  //     name: Cell Min Voltage
  //     disabled_by_default: false
  //     id: sensor_sensor_id_15
  //     force_update: false
  //     unit_of_measurement: V
  //     icon: ''
  //     accuracy_decimals: 3
  //     device_class: voltage
  //     state_class: measurement
  //   max_cell_voltage:
  //     name: Cell Max Voltage
  //     disabled_by_default: false
  //     id: sensor_sensor_id_16
  //     force_update: false
  //     unit_of_measurement: V
  //     icon: ''
  //     accuracy_decimals: 3
  //     device_class: voltage
  //     state_class: measurement
  //   min_voltage_cell:
  //     name: Cell Min Index
  //     disabled_by_default: false
  //     id: sensor_sensor_id_17
  //     force_update: false
  //     unit_of_measurement: ''
  //     icon: mdi:battery-minus-outline
  //     accuracy_decimals: 0
  //     device_class: ''
  //     state_class: measurement
  //   max_voltage_cell:
  //     name: Cell Max Index
  //     disabled_by_default: false
  //     id: sensor_sensor_id_18
  //     force_update: false
  //     unit_of_measurement: ''
  //     icon: mdi:battery-plus-outline
  //     accuracy_decimals: 0
  //     device_class: ''
  //     state_class: measurement
  //   delta_cell_voltage:
  //     name: Cell Delta
  //     disabled_by_default: false
  //     id: sensor_sensor_id_19
  //     force_update: false
  //     unit_of_measurement: V
  //     icon: ''
  //     accuracy_decimals: 3
  //     device_class: voltage
  //     state_class: measurement
  //   average_cell_voltage:
  //     name: Cell Average
  //     disabled_by_default: false
  //     id: sensor_sensor_id_20
  //     force_update: false
  //     unit_of_measurement: V
  //     icon: ''
  //     accuracy_decimals: 3
  //     device_class: voltage
  //     state_class: measurement
  //   temperature_sensor_1:
  //     name: Temp Sensor 1
  //     disabled_by_default: false
  //     id: sensor_sensor_id_21
  //     force_update: false
  //     unit_of_measurement: °C
  //     icon: ''
  //     accuracy_decimals: 1
  //     device_class: temperature
  //     state_class: measurement
  //   temperature_sensor_2:
  //     name: Temp Sensor 2
  //     disabled_by_default: false
  //     id: sensor_sensor_id_22
  //     force_update: false
  //     unit_of_measurement: °C
  //     icon: ''
  //     accuracy_decimals: 1
  //     device_class: temperature
  //     state_class: measurement
  //   power_tube_temperature:
  //     name: MOSFET Temp
  //     disabled_by_default: false
  //     id: sensor_sensor_id_23
  //     force_update: false
  //     unit_of_measurement: °C
  //     icon: ''
  //     accuracy_decimals: 1
  //     device_class: temperature
  //     state_class: measurement
  //   cell_voltage_1:
  //     name: Cell 1 Voltage
  //     disabled_by_default: false
  //     id: sensor_sensor_id_24
  //     force_update: false
  //     unit_of_measurement: V
  //     icon: ''
  //     accuracy_decimals: 3
  //     device_class: voltage
  //     state_class: measurement
  //   cell_voltage_2:
  //     name: Cell 2 Voltage
  //     disabled_by_default: false
  //     id: sensor_sensor_id_25
  //     force_update: false
  //     unit_of_measurement: V
  //     icon: ''
  //     accuracy_decimals: 3
  //     device_class: voltage
  //     state_class: measurement
  //   cell_voltage_3:
  //     name: Cell 3 Voltage
  //     disabled_by_default: false
  //     id: sensor_sensor_id_26
  //     force_update: false
  //     unit_of_measurement: V
  //     icon: ''
  //     accuracy_decimals: 3
  //     device_class: voltage
  //     state_class: measurement
  //   cell_voltage_4:
  //     name: Cell 4 Voltage
  //     disabled_by_default: false
  //     id: sensor_sensor_id_27
  //     force_update: false
  //     unit_of_measurement: V
  //     icon: ''
  //     accuracy_decimals: 3
  //     device_class: voltage
  //     state_class: measurement
  //   cell_voltage_5:
  //     name: Cell 5 Voltage
  //     disabled_by_default: false
  //     id: sensor_sensor_id_28
  //     force_update: false
  //     unit_of_measurement: V
  //     icon: ''
  //     accuracy_decimals: 3
  //     device_class: voltage
  //     state_class: measurement
  //   cell_voltage_6:
  //     name: Cell 6 Voltage
  //     disabled_by_default: false
  //     id: sensor_sensor_id_29
  //     force_update: false
  //     unit_of_measurement: V
  //     icon: ''
  //     accuracy_decimals: 3
  //     device_class: voltage
  //     state_class: measurement
  //   cell_voltage_7:
  //     name: Cell 7 Voltage
  //     disabled_by_default: false
  //     id: sensor_sensor_id_30
  //     force_update: false
  //     unit_of_measurement: V
  //     icon: ''
  //     accuracy_decimals: 3
  //     device_class: voltage
  //     state_class: measurement
  //   cell_voltage_8:
  //     name: Cell 8 Voltage
  //     disabled_by_default: false
  //     id: sensor_sensor_id_31
  //     force_update: false
  //     unit_of_measurement: V
  //     icon: ''
  //     accuracy_decimals: 3
  //     device_class: voltage
  //     state_class: measurement
  //   cell_resistance_1:
  //     name: Cell 1 Resistance
  //     disabled_by_default: false
  //     id: sensor_sensor_id_32
  //     force_update: false
  //     unit_of_measurement: Ω
  //     icon: mdi:omega
  //     accuracy_decimals: 3
  //     device_class: ''
  //     state_class: measurement
  //   cell_resistance_2:
  //     name: Cell 2 Resistance
  //     disabled_by_default: false
  //     id: sensor_sensor_id_33
  //     force_update: false
  //     unit_of_measurement: Ω
  //     icon: mdi:omega
  //     accuracy_decimals: 3
  //     device_class: ''
  //     state_class: measurement
  //   cell_resistance_3:
  //     name: Cell 3 Resistance
  //     disabled_by_default: false
  //     id: sensor_sensor_id_34
  //     force_update: false
  //     unit_of_measurement: Ω
  //     icon: mdi:omega
  //     accuracy_decimals: 3
  //     device_class: ''
  //     state_class: measurement
  //   cell_resistance_4:
  //     name: Cell 4 Resistance
  //     disabled_by_default: false
  //     id: sensor_sensor_id_35
  //     force_update: false
  //     unit_of_measurement: Ω
  //     icon: mdi:omega
  //     accuracy_decimals: 3
  //     device_class: ''
  //     state_class: measurement
  //   cell_resistance_5:
  //     name: Cell 5 Resistance
  //     disabled_by_default: false
  //     id: sensor_sensor_id_36
  //     force_update: false
  //     unit_of_measurement: Ω
  //     icon: mdi:omega
  //     accuracy_decimals: 3
  //     device_class: ''
  //     state_class: measurement
  //   cell_resistance_6:
  //     name: Cell 6 Resistance
  //     disabled_by_default: false
  //     id: sensor_sensor_id_37
  //     force_update: false
  //     unit_of_measurement: Ω
  //     icon: mdi:omega
  //     accuracy_decimals: 3
  //     device_class: ''
  //     state_class: measurement
  //   cell_resistance_7:
  //     name: Cell 7 Resistance
  //     disabled_by_default: false
  //     id: sensor_sensor_id_38
  //     force_update: false
  //     unit_of_measurement: Ω
  //     icon: mdi:omega
  //     accuracy_decimals: 3
  //     device_class: ''
  //     state_class: measurement
  //   cell_resistance_8:
  //     name: Cell 8 Resistance
  //     disabled_by_default: false
  //     id: sensor_sensor_id_39
  //     force_update: false
  //     unit_of_measurement: Ω
  //     icon: mdi:omega
  //     accuracy_decimals: 3
  //     device_class: ''
  //     state_class: measurement
  sensor_sensor_id_24 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_24);
  sensor_sensor_id_24->set_name("Cell 1 Voltage");
  sensor_sensor_id_24->set_object_id("cell_1_voltage");
  sensor_sensor_id_24->set_disabled_by_default(false);
  sensor_sensor_id_24->set_icon("");
  sensor_sensor_id_24->set_device_class("voltage");
  sensor_sensor_id_24->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_24->set_unit_of_measurement("V");
  sensor_sensor_id_24->set_accuracy_decimals(3);
  sensor_sensor_id_24->set_force_update(false);
  bms0->set_cell_voltage_sensor(0, sensor_sensor_id_24);
  sensor_sensor_id_25 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_25);
  sensor_sensor_id_25->set_name("Cell 2 Voltage");
  sensor_sensor_id_25->set_object_id("cell_2_voltage");
  sensor_sensor_id_25->set_disabled_by_default(false);
  sensor_sensor_id_25->set_icon("");
  sensor_sensor_id_25->set_device_class("voltage");
  sensor_sensor_id_25->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_25->set_unit_of_measurement("V");
  sensor_sensor_id_25->set_accuracy_decimals(3);
  sensor_sensor_id_25->set_force_update(false);
  bms0->set_cell_voltage_sensor(1, sensor_sensor_id_25);
  sensor_sensor_id_26 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_26);
  sensor_sensor_id_26->set_name("Cell 3 Voltage");
  sensor_sensor_id_26->set_object_id("cell_3_voltage");
  sensor_sensor_id_26->set_disabled_by_default(false);
  sensor_sensor_id_26->set_icon("");
  sensor_sensor_id_26->set_device_class("voltage");
  sensor_sensor_id_26->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_26->set_unit_of_measurement("V");
  sensor_sensor_id_26->set_accuracy_decimals(3);
  sensor_sensor_id_26->set_force_update(false);
  bms0->set_cell_voltage_sensor(2, sensor_sensor_id_26);
  sensor_sensor_id_27 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_27);
  sensor_sensor_id_27->set_name("Cell 4 Voltage");
  sensor_sensor_id_27->set_object_id("cell_4_voltage");
  sensor_sensor_id_27->set_disabled_by_default(false);
  sensor_sensor_id_27->set_icon("");
  sensor_sensor_id_27->set_device_class("voltage");
  sensor_sensor_id_27->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_27->set_unit_of_measurement("V");
  sensor_sensor_id_27->set_accuracy_decimals(3);
  sensor_sensor_id_27->set_force_update(false);
  bms0->set_cell_voltage_sensor(3, sensor_sensor_id_27);
  sensor_sensor_id_28 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_28);
  sensor_sensor_id_28->set_name("Cell 5 Voltage");
  sensor_sensor_id_28->set_object_id("cell_5_voltage");
  sensor_sensor_id_28->set_disabled_by_default(false);
  sensor_sensor_id_28->set_icon("");
  sensor_sensor_id_28->set_device_class("voltage");
  sensor_sensor_id_28->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_28->set_unit_of_measurement("V");
  sensor_sensor_id_28->set_accuracy_decimals(3);
  sensor_sensor_id_28->set_force_update(false);
  bms0->set_cell_voltage_sensor(4, sensor_sensor_id_28);
  sensor_sensor_id_29 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_29);
  sensor_sensor_id_29->set_name("Cell 6 Voltage");
  sensor_sensor_id_29->set_object_id("cell_6_voltage");
  sensor_sensor_id_29->set_disabled_by_default(false);
  sensor_sensor_id_29->set_icon("");
  sensor_sensor_id_29->set_device_class("voltage");
  sensor_sensor_id_29->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_29->set_unit_of_measurement("V");
  sensor_sensor_id_29->set_accuracy_decimals(3);
  sensor_sensor_id_29->set_force_update(false);
  bms0->set_cell_voltage_sensor(5, sensor_sensor_id_29);
  sensor_sensor_id_30 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_30);
  sensor_sensor_id_30->set_name("Cell 7 Voltage");
  sensor_sensor_id_30->set_object_id("cell_7_voltage");
  sensor_sensor_id_30->set_disabled_by_default(false);
  sensor_sensor_id_30->set_icon("");
  sensor_sensor_id_30->set_device_class("voltage");
  sensor_sensor_id_30->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_30->set_unit_of_measurement("V");
  sensor_sensor_id_30->set_accuracy_decimals(3);
  sensor_sensor_id_30->set_force_update(false);
  bms0->set_cell_voltage_sensor(6, sensor_sensor_id_30);
  sensor_sensor_id_31 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_31);
  sensor_sensor_id_31->set_name("Cell 8 Voltage");
  sensor_sensor_id_31->set_object_id("cell_8_voltage");
  sensor_sensor_id_31->set_disabled_by_default(false);
  sensor_sensor_id_31->set_icon("");
  sensor_sensor_id_31->set_device_class("voltage");
  sensor_sensor_id_31->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_31->set_unit_of_measurement("V");
  sensor_sensor_id_31->set_accuracy_decimals(3);
  sensor_sensor_id_31->set_force_update(false);
  bms0->set_cell_voltage_sensor(7, sensor_sensor_id_31);
  sensor_sensor_id_32 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_32);
  sensor_sensor_id_32->set_name("Cell 1 Resistance");
  sensor_sensor_id_32->set_object_id("cell_1_resistance");
  sensor_sensor_id_32->set_disabled_by_default(false);
  sensor_sensor_id_32->set_icon("mdi:omega");
  sensor_sensor_id_32->set_device_class("");
  sensor_sensor_id_32->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_32->set_unit_of_measurement("\316\251");
  sensor_sensor_id_32->set_accuracy_decimals(3);
  sensor_sensor_id_32->set_force_update(false);
  bms0->set_cell_resistance_sensor(0, sensor_sensor_id_32);
  sensor_sensor_id_33 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_33);
  sensor_sensor_id_33->set_name("Cell 2 Resistance");
  sensor_sensor_id_33->set_object_id("cell_2_resistance");
  sensor_sensor_id_33->set_disabled_by_default(false);
  sensor_sensor_id_33->set_icon("mdi:omega");
  sensor_sensor_id_33->set_device_class("");
  sensor_sensor_id_33->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_33->set_unit_of_measurement("\316\251");
  sensor_sensor_id_33->set_accuracy_decimals(3);
  sensor_sensor_id_33->set_force_update(false);
  bms0->set_cell_resistance_sensor(1, sensor_sensor_id_33);
  sensor_sensor_id_34 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_34);
  sensor_sensor_id_34->set_name("Cell 3 Resistance");
  sensor_sensor_id_34->set_object_id("cell_3_resistance");
  sensor_sensor_id_34->set_disabled_by_default(false);
  sensor_sensor_id_34->set_icon("mdi:omega");
  sensor_sensor_id_34->set_device_class("");
  sensor_sensor_id_34->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_34->set_unit_of_measurement("\316\251");
  sensor_sensor_id_34->set_accuracy_decimals(3);
  sensor_sensor_id_34->set_force_update(false);
  bms0->set_cell_resistance_sensor(2, sensor_sensor_id_34);
  sensor_sensor_id_35 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_35);
  sensor_sensor_id_35->set_name("Cell 4 Resistance");
  sensor_sensor_id_35->set_object_id("cell_4_resistance");
  sensor_sensor_id_35->set_disabled_by_default(false);
  sensor_sensor_id_35->set_icon("mdi:omega");
  sensor_sensor_id_35->set_device_class("");
  sensor_sensor_id_35->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_35->set_unit_of_measurement("\316\251");
  sensor_sensor_id_35->set_accuracy_decimals(3);
  sensor_sensor_id_35->set_force_update(false);
  bms0->set_cell_resistance_sensor(3, sensor_sensor_id_35);
  sensor_sensor_id_36 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_36);
  sensor_sensor_id_36->set_name("Cell 5 Resistance");
  sensor_sensor_id_36->set_object_id("cell_5_resistance");
  sensor_sensor_id_36->set_disabled_by_default(false);
  sensor_sensor_id_36->set_icon("mdi:omega");
  sensor_sensor_id_36->set_device_class("");
  sensor_sensor_id_36->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_36->set_unit_of_measurement("\316\251");
  sensor_sensor_id_36->set_accuracy_decimals(3);
  sensor_sensor_id_36->set_force_update(false);
  bms0->set_cell_resistance_sensor(4, sensor_sensor_id_36);
  sensor_sensor_id_37 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_37);
  sensor_sensor_id_37->set_name("Cell 6 Resistance");
  sensor_sensor_id_37->set_object_id("cell_6_resistance");
  sensor_sensor_id_37->set_disabled_by_default(false);
  sensor_sensor_id_37->set_icon("mdi:omega");
  sensor_sensor_id_37->set_device_class("");
  sensor_sensor_id_37->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_37->set_unit_of_measurement("\316\251");
  sensor_sensor_id_37->set_accuracy_decimals(3);
  sensor_sensor_id_37->set_force_update(false);
  bms0->set_cell_resistance_sensor(5, sensor_sensor_id_37);
  sensor_sensor_id_38 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_38);
  sensor_sensor_id_38->set_name("Cell 7 Resistance");
  sensor_sensor_id_38->set_object_id("cell_7_resistance");
  sensor_sensor_id_38->set_disabled_by_default(false);
  sensor_sensor_id_38->set_icon("mdi:omega");
  sensor_sensor_id_38->set_device_class("");
  sensor_sensor_id_38->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_38->set_unit_of_measurement("\316\251");
  sensor_sensor_id_38->set_accuracy_decimals(3);
  sensor_sensor_id_38->set_force_update(false);
  bms0->set_cell_resistance_sensor(6, sensor_sensor_id_38);
  sensor_sensor_id_39 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_39);
  sensor_sensor_id_39->set_name("Cell 8 Resistance");
  sensor_sensor_id_39->set_object_id("cell_8_resistance");
  sensor_sensor_id_39->set_disabled_by_default(false);
  sensor_sensor_id_39->set_icon("mdi:omega");
  sensor_sensor_id_39->set_device_class("");
  sensor_sensor_id_39->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_39->set_unit_of_measurement("\316\251");
  sensor_sensor_id_39->set_accuracy_decimals(3);
  sensor_sensor_id_39->set_force_update(false);
  bms0->set_cell_resistance_sensor(7, sensor_sensor_id_39);
  sensor_sensor_id_21 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_21);
  sensor_sensor_id_21->set_name("Temp Sensor 1");
  sensor_sensor_id_21->set_object_id("temp_sensor_1");
  sensor_sensor_id_21->set_disabled_by_default(false);
  sensor_sensor_id_21->set_icon("");
  sensor_sensor_id_21->set_device_class("temperature");
  sensor_sensor_id_21->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_21->set_unit_of_measurement("\302\260C");
  sensor_sensor_id_21->set_accuracy_decimals(1);
  sensor_sensor_id_21->set_force_update(false);
  bms0->set_temperature_sensor(0, sensor_sensor_id_21);
  sensor_sensor_id_22 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_22);
  sensor_sensor_id_22->set_name("Temp Sensor 2");
  sensor_sensor_id_22->set_object_id("temp_sensor_2");
  sensor_sensor_id_22->set_disabled_by_default(false);
  sensor_sensor_id_22->set_icon("");
  sensor_sensor_id_22->set_device_class("temperature");
  sensor_sensor_id_22->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_22->set_unit_of_measurement("\302\260C");
  sensor_sensor_id_22->set_accuracy_decimals(1);
  sensor_sensor_id_22->set_force_update(false);
  bms0->set_temperature_sensor(1, sensor_sensor_id_22);
  sensor_sensor_id_15 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_15);
  sensor_sensor_id_15->set_name("Cell Min Voltage");
  sensor_sensor_id_15->set_object_id("cell_min_voltage");
  sensor_sensor_id_15->set_disabled_by_default(false);
  sensor_sensor_id_15->set_icon("");
  sensor_sensor_id_15->set_device_class("voltage");
  sensor_sensor_id_15->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_15->set_unit_of_measurement("V");
  sensor_sensor_id_15->set_accuracy_decimals(3);
  sensor_sensor_id_15->set_force_update(false);
  bms0->set_min_cell_voltage_sensor(sensor_sensor_id_15);
  sensor_sensor_id_16 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_16);
  sensor_sensor_id_16->set_name("Cell Max Voltage");
  sensor_sensor_id_16->set_object_id("cell_max_voltage");
  sensor_sensor_id_16->set_disabled_by_default(false);
  sensor_sensor_id_16->set_icon("");
  sensor_sensor_id_16->set_device_class("voltage");
  sensor_sensor_id_16->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_16->set_unit_of_measurement("V");
  sensor_sensor_id_16->set_accuracy_decimals(3);
  sensor_sensor_id_16->set_force_update(false);
  bms0->set_max_cell_voltage_sensor(sensor_sensor_id_16);
  sensor_sensor_id_17 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_17);
  sensor_sensor_id_17->set_name("Cell Min Index");
  sensor_sensor_id_17->set_object_id("cell_min_index");
  sensor_sensor_id_17->set_disabled_by_default(false);
  sensor_sensor_id_17->set_icon("mdi:battery-minus-outline");
  sensor_sensor_id_17->set_device_class("");
  sensor_sensor_id_17->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_17->set_unit_of_measurement("");
  sensor_sensor_id_17->set_accuracy_decimals(0);
  sensor_sensor_id_17->set_force_update(false);
  bms0->set_min_voltage_cell_sensor(sensor_sensor_id_17);
  sensor_sensor_id_18 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_18);
  sensor_sensor_id_18->set_name("Cell Max Index");
  sensor_sensor_id_18->set_object_id("cell_max_index");
  sensor_sensor_id_18->set_disabled_by_default(false);
  sensor_sensor_id_18->set_icon("mdi:battery-plus-outline");
  sensor_sensor_id_18->set_device_class("");
  sensor_sensor_id_18->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_18->set_unit_of_measurement("");
  sensor_sensor_id_18->set_accuracy_decimals(0);
  sensor_sensor_id_18->set_force_update(false);
  bms0->set_max_voltage_cell_sensor(sensor_sensor_id_18);
  sensor_sensor_id_19 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_19);
  sensor_sensor_id_19->set_name("Cell Delta");
  sensor_sensor_id_19->set_object_id("cell_delta");
  sensor_sensor_id_19->set_disabled_by_default(false);
  sensor_sensor_id_19->set_icon("");
  sensor_sensor_id_19->set_device_class("voltage");
  sensor_sensor_id_19->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_19->set_unit_of_measurement("V");
  sensor_sensor_id_19->set_accuracy_decimals(3);
  sensor_sensor_id_19->set_force_update(false);
  bms0->set_delta_cell_voltage_sensor(sensor_sensor_id_19);
  sensor_sensor_id_20 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_20);
  sensor_sensor_id_20->set_name("Cell Average");
  sensor_sensor_id_20->set_object_id("cell_average");
  sensor_sensor_id_20->set_disabled_by_default(false);
  sensor_sensor_id_20->set_icon("");
  sensor_sensor_id_20->set_device_class("voltage");
  sensor_sensor_id_20->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_20->set_unit_of_measurement("V");
  sensor_sensor_id_20->set_accuracy_decimals(3);
  sensor_sensor_id_20->set_force_update(false);
  bms0->set_average_cell_voltage_sensor(sensor_sensor_id_20);
  sensor_sensor_id = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id);
  sensor_sensor_id->set_name("Pack Voltage");
  sensor_sensor_id->set_object_id("pack_voltage");
  sensor_sensor_id->set_disabled_by_default(false);
  sensor_sensor_id->set_icon("");
  sensor_sensor_id->set_device_class("voltage");
  sensor_sensor_id->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id->set_unit_of_measurement("V");
  sensor_sensor_id->set_accuracy_decimals(3);
  sensor_sensor_id->set_force_update(false);
  bms0->set_total_voltage_sensor(sensor_sensor_id);
  sensor_sensor_id_2 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_2);
  sensor_sensor_id_2->set_name("Pack Current");
  sensor_sensor_id_2->set_object_id("pack_current");
  sensor_sensor_id_2->set_disabled_by_default(false);
  sensor_sensor_id_2->set_icon("mdi:current-dc");
  sensor_sensor_id_2->set_device_class("current");
  sensor_sensor_id_2->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_2->set_unit_of_measurement("A");
  sensor_sensor_id_2->set_accuracy_decimals(2);
  sensor_sensor_id_2->set_force_update(false);
  bms0->set_current_sensor(sensor_sensor_id_2);
  sensor_sensor_id_3 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_3);
  sensor_sensor_id_3->set_name("Pack Power");
  sensor_sensor_id_3->set_object_id("pack_power");
  sensor_sensor_id_3->set_disabled_by_default(false);
  sensor_sensor_id_3->set_icon("");
  sensor_sensor_id_3->set_device_class("power");
  sensor_sensor_id_3->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_3->set_unit_of_measurement("W");
  sensor_sensor_id_3->set_accuracy_decimals(2);
  sensor_sensor_id_3->set_force_update(false);
  bms0->set_power_sensor(sensor_sensor_id_3);
  sensor_sensor_id_4 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_4);
  sensor_sensor_id_4->set_name("Charging Power");
  sensor_sensor_id_4->set_object_id("charging_power");
  sensor_sensor_id_4->set_disabled_by_default(false);
  sensor_sensor_id_4->set_icon("");
  sensor_sensor_id_4->set_device_class("power");
  sensor_sensor_id_4->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_4->set_unit_of_measurement("W");
  sensor_sensor_id_4->set_accuracy_decimals(2);
  sensor_sensor_id_4->set_force_update(false);
  bms0->set_charging_power_sensor(sensor_sensor_id_4);
  sensor_sensor_id_5 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_5);
  sensor_sensor_id_5->set_name("Discharging Power");
  sensor_sensor_id_5->set_object_id("discharging_power");
  sensor_sensor_id_5->set_disabled_by_default(false);
  sensor_sensor_id_5->set_icon("");
  sensor_sensor_id_5->set_device_class("power");
  sensor_sensor_id_5->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_5->set_unit_of_measurement("W");
  sensor_sensor_id_5->set_accuracy_decimals(2);
  sensor_sensor_id_5->set_force_update(false);
  bms0->set_discharging_power_sensor(sensor_sensor_id_5);
  sensor_sensor_id_23 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_23);
  sensor_sensor_id_23->set_name("MOSFET Temp");
  sensor_sensor_id_23->set_object_id("mosfet_temp");
  sensor_sensor_id_23->set_disabled_by_default(false);
  sensor_sensor_id_23->set_icon("");
  sensor_sensor_id_23->set_device_class("temperature");
  sensor_sensor_id_23->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_23->set_unit_of_measurement("\302\260C");
  sensor_sensor_id_23->set_accuracy_decimals(1);
  sensor_sensor_id_23->set_force_update(false);
  bms0->set_power_tube_temperature_sensor(sensor_sensor_id_23);
  sensor_sensor_id_6 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_6);
  sensor_sensor_id_6->set_name("SoC");
  sensor_sensor_id_6->set_object_id("soc");
  sensor_sensor_id_6->set_disabled_by_default(false);
  sensor_sensor_id_6->set_device_class("battery");
  sensor_sensor_id_6->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_6->set_unit_of_measurement("%");
  sensor_sensor_id_6->set_accuracy_decimals(0);
  sensor_sensor_id_6->set_force_update(false);
  bms0->set_state_of_charge_sensor(sensor_sensor_id_6);
  sensor_sensor_id_7 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_7);
  sensor_sensor_id_7->set_name("Capacity Remaining");
  sensor_sensor_id_7->set_object_id("capacity_remaining");
  sensor_sensor_id_7->set_disabled_by_default(false);
  sensor_sensor_id_7->set_icon("mdi:battery-50");
  sensor_sensor_id_7->set_device_class("");
  sensor_sensor_id_7->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_7->set_unit_of_measurement("Ah");
  sensor_sensor_id_7->set_accuracy_decimals(3);
  sensor_sensor_id_7->set_force_update(false);
  bms0->set_capacity_remaining_sensor(sensor_sensor_id_7);
  sensor_sensor_id_8 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_8);
  sensor_sensor_id_8->set_name("Total Capacity");
  sensor_sensor_id_8->set_object_id("total_capacity");
  sensor_sensor_id_8->set_disabled_by_default(false);
  sensor_sensor_id_8->set_icon("");
  sensor_sensor_id_8->set_device_class("");
  sensor_sensor_id_8->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_8->set_unit_of_measurement("Ah");
  sensor_sensor_id_8->set_accuracy_decimals(0);
  sensor_sensor_id_8->set_force_update(false);
  bms0->set_total_battery_capacity_setting_sensor(sensor_sensor_id_8);
  sensor_sensor_id_9 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_9);
  sensor_sensor_id_9->set_name("Cycles");
  sensor_sensor_id_9->set_object_id("cycles");
  sensor_sensor_id_9->set_disabled_by_default(false);
  sensor_sensor_id_9->set_icon("mdi:battery-sync");
  sensor_sensor_id_9->set_device_class("");
  sensor_sensor_id_9->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  sensor_sensor_id_9->set_unit_of_measurement("");
  sensor_sensor_id_9->set_accuracy_decimals(0);
  sensor_sensor_id_9->set_force_update(false);
  bms0->set_charging_cycles_sensor(sensor_sensor_id_9);
  sensor_sensor_id_10 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_10);
  sensor_sensor_id_10->set_name("Cycle Capacity");
  sensor_sensor_id_10->set_object_id("cycle_capacity");
  sensor_sensor_id_10->set_disabled_by_default(false);
  sensor_sensor_id_10->set_icon("mdi:counter");
  sensor_sensor_id_10->set_device_class("");
  sensor_sensor_id_10->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  sensor_sensor_id_10->set_unit_of_measurement("Ah");
  sensor_sensor_id_10->set_accuracy_decimals(3);
  sensor_sensor_id_10->set_force_update(false);
  bms0->set_total_charging_cycle_capacity_sensor(sensor_sensor_id_10);
  sensor_sensor_id_11 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_11);
  sensor_sensor_id_11->set_name("Total Runtime");
  sensor_sensor_id_11->set_object_id("total_runtime");
  sensor_sensor_id_11->set_disabled_by_default(false);
  sensor_sensor_id_11->set_icon("mdi:timelapse");
  sensor_sensor_id_11->set_device_class("");
  sensor_sensor_id_11->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  sensor_sensor_id_11->set_unit_of_measurement("s");
  sensor_sensor_id_11->set_accuracy_decimals(0);
  sensor_sensor_id_11->set_force_update(false);
  bms0->set_total_runtime_sensor(sensor_sensor_id_11);
  sensor_sensor_id_12 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_12);
  sensor_sensor_id_12->set_name("Balancing Current");
  sensor_sensor_id_12->set_object_id("balancing_current");
  sensor_sensor_id_12->set_disabled_by_default(false);
  sensor_sensor_id_12->set_icon("mdi:current-dc");
  sensor_sensor_id_12->set_device_class("current");
  sensor_sensor_id_12->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_12->set_unit_of_measurement("A");
  sensor_sensor_id_12->set_accuracy_decimals(2);
  sensor_sensor_id_12->set_force_update(false);
  bms0->set_balancing_current_sensor(sensor_sensor_id_12);
  sensor_sensor_id_14 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_14);
  sensor_sensor_id_14->set_name("Errors Bitmask");
  sensor_sensor_id_14->set_object_id("errors_bitmask");
  sensor_sensor_id_14->set_disabled_by_default(false);
  sensor_sensor_id_14->set_icon("mdi:alert-circle-outline");
  sensor_sensor_id_14->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  sensor_sensor_id_14->set_device_class("");
  sensor_sensor_id_14->set_unit_of_measurement("");
  sensor_sensor_id_14->set_accuracy_decimals(0);
  sensor_sensor_id_14->set_force_update(false);
  bms0->set_errors_bitmask_sensor(sensor_sensor_id_14);
  sensor_sensor_id_13 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_13);
  sensor_sensor_id_13->set_name("Heating Current");
  sensor_sensor_id_13->set_object_id("heating_current");
  sensor_sensor_id_13->set_disabled_by_default(false);
  sensor_sensor_id_13->set_icon("mdi:current-dc");
  sensor_sensor_id_13->set_device_class("current");
  sensor_sensor_id_13->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_13->set_unit_of_measurement("A");
  sensor_sensor_id_13->set_accuracy_decimals(2);
  sensor_sensor_id_13->set_force_update(false);
  bms0->set_heating_current_sensor(sensor_sensor_id_13);
  // text_sensor.jk_bms_ble:
  //   platform: jk_bms_ble
  //   jk_bms_ble_id: bms0
  //   errors:
  //     name: Errors
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id
  //     icon: mdi:alert-circle-outline
  //     entity_category: diagnostic
  //   total_runtime_formatted:
  //     name: Total Runtime Formatted
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_2
  //     icon: mdi:timelapse
  //   operation_status:
  //     name: Operation Status
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_3
  //     icon: mdi:heart-pulse
  text_sensor_textsensor_id = new text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id);
  text_sensor_textsensor_id->set_name("Errors");
  text_sensor_textsensor_id->set_object_id("errors");
  text_sensor_textsensor_id->set_disabled_by_default(false);
  text_sensor_textsensor_id->set_icon("mdi:alert-circle-outline");
  text_sensor_textsensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  bms0->set_errors_text_sensor(text_sensor_textsensor_id);
  text_sensor_textsensor_id_3 = new text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_3);
  text_sensor_textsensor_id_3->set_name("Operation Status");
  text_sensor_textsensor_id_3->set_object_id("operation_status");
  text_sensor_textsensor_id_3->set_disabled_by_default(false);
  text_sensor_textsensor_id_3->set_icon("mdi:heart-pulse");
  bms0->set_operation_status_text_sensor(text_sensor_textsensor_id_3);
  text_sensor_textsensor_id_2 = new text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_2);
  text_sensor_textsensor_id_2->set_name("Total Runtime Formatted");
  text_sensor_textsensor_id_2->set_object_id("total_runtime_formatted");
  text_sensor_textsensor_id_2->set_disabled_by_default(false);
  text_sensor_textsensor_id_2->set_icon("mdi:timelapse");
  bms0->set_total_runtime_formatted_text_sensor(text_sensor_textsensor_id_2);
  // switch.jk_bms_ble:
  //   platform: jk_bms_ble
  //   jk_bms_ble_id: bms0
  //   charging:
  //     name: Charging Switch
  //     disabled_by_default: false
  //     restore_mode: ALWAYS_OFF
  //     id: jk_bms_ble_jkswitch_id
  //     icon: mdi:battery-charging-50
  //   discharging:
  //     name: Discharging Switch
  //     disabled_by_default: false
  //     restore_mode: ALWAYS_OFF
  //     id: jk_bms_ble_jkswitch_id_2
  //     icon: mdi:battery-charging-50
  //   balancer:
  //     name: Balancer Switch
  //     disabled_by_default: false
  //     restore_mode: ALWAYS_OFF
  //     id: jk_bms_ble_jkswitch_id_3
  //     icon: mdi:seesaw
  //   emergency:
  //     name: Emergency Switch
  //     disabled_by_default: false
  //     restore_mode: ALWAYS_OFF
  //     id: jk_bms_ble_jkswitch_id_4
  //     entity_category: config
  //     icon: mdi:exit-run
  //   heating:
  //     name: Heating Switch
  //     disabled_by_default: false
  //     restore_mode: ALWAYS_OFF
  //     id: jk_bms_ble_jkswitch_id_5
  //     entity_category: config
  //     icon: mdi:radiator
  //   disable_temperature_sensors:
  //     name: Disable Temperature Sensors
  //     disabled_by_default: false
  //     restore_mode: ALWAYS_OFF
  //     id: jk_bms_ble_jkswitch_id_6
  //     entity_category: config
  //     icon: mdi:thermometer-off
  //   display_always_on:
  //     name: Display Always On
  //     disabled_by_default: false
  //     restore_mode: ALWAYS_OFF
  //     id: jk_bms_ble_jkswitch_id_7
  //     entity_category: config
  //     icon: mdi:television
  jk_bms_ble_jkswitch_id = new jk_bms_ble::JkSwitch();
  App.register_switch(jk_bms_ble_jkswitch_id);
  jk_bms_ble_jkswitch_id->set_name("Charging Switch");
  jk_bms_ble_jkswitch_id->set_object_id("charging_switch");
  jk_bms_ble_jkswitch_id->set_disabled_by_default(false);
  jk_bms_ble_jkswitch_id->set_icon("mdi:battery-charging-50");
  jk_bms_ble_jkswitch_id->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  jk_bms_ble_jkswitch_id->set_component_source(LOG_STR("jk_bms_ble.switch"));
  App.register_component(jk_bms_ble_jkswitch_id);
  bms0->set_charging_switch(jk_bms_ble_jkswitch_id);
  jk_bms_ble_jkswitch_id->set_parent(bms0);
  jk_bms_ble_jkswitch_id->set_jk04_holding_register(0);
  jk_bms_ble_jkswitch_id->set_jk02_holding_register(29);
  jk_bms_ble_jkswitch_id->set_jk02_32s_holding_register(29);
  jk_bms_ble_jkswitch_id_2 = new jk_bms_ble::JkSwitch();
  App.register_switch(jk_bms_ble_jkswitch_id_2);
  jk_bms_ble_jkswitch_id_2->set_name("Discharging Switch");
  jk_bms_ble_jkswitch_id_2->set_object_id("discharging_switch");
  jk_bms_ble_jkswitch_id_2->set_disabled_by_default(false);
  jk_bms_ble_jkswitch_id_2->set_icon("mdi:battery-charging-50");
  jk_bms_ble_jkswitch_id_2->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  jk_bms_ble_jkswitch_id_2->set_component_source(LOG_STR("jk_bms_ble.switch"));
  App.register_component(jk_bms_ble_jkswitch_id_2);
  bms0->set_discharging_switch(jk_bms_ble_jkswitch_id_2);
  jk_bms_ble_jkswitch_id_2->set_parent(bms0);
  jk_bms_ble_jkswitch_id_2->set_jk04_holding_register(0);
  jk_bms_ble_jkswitch_id_2->set_jk02_holding_register(30);
  jk_bms_ble_jkswitch_id_2->set_jk02_32s_holding_register(30);
  jk_bms_ble_jkswitch_id_3 = new jk_bms_ble::JkSwitch();
  App.register_switch(jk_bms_ble_jkswitch_id_3);
  jk_bms_ble_jkswitch_id_3->set_name("Balancer Switch");
  jk_bms_ble_jkswitch_id_3->set_object_id("balancer_switch");
  jk_bms_ble_jkswitch_id_3->set_disabled_by_default(false);
  jk_bms_ble_jkswitch_id_3->set_icon("mdi:seesaw");
  jk_bms_ble_jkswitch_id_3->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  jk_bms_ble_jkswitch_id_3->set_component_source(LOG_STR("jk_bms_ble.switch"));
  App.register_component(jk_bms_ble_jkswitch_id_3);
  bms0->set_balancer_switch(jk_bms_ble_jkswitch_id_3);
  jk_bms_ble_jkswitch_id_3->set_parent(bms0);
  jk_bms_ble_jkswitch_id_3->set_jk04_holding_register(108);
  jk_bms_ble_jkswitch_id_3->set_jk02_holding_register(31);
  jk_bms_ble_jkswitch_id_3->set_jk02_32s_holding_register(31);
  jk_bms_ble_jkswitch_id_4 = new jk_bms_ble::JkSwitch();
  App.register_switch(jk_bms_ble_jkswitch_id_4);
  jk_bms_ble_jkswitch_id_4->set_name("Emergency Switch");
  jk_bms_ble_jkswitch_id_4->set_object_id("emergency_switch");
  jk_bms_ble_jkswitch_id_4->set_disabled_by_default(false);
  jk_bms_ble_jkswitch_id_4->set_icon("mdi:exit-run");
  jk_bms_ble_jkswitch_id_4->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jkswitch_id_4->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  jk_bms_ble_jkswitch_id_4->set_component_source(LOG_STR("jk_bms_ble.switch"));
  App.register_component(jk_bms_ble_jkswitch_id_4);
  bms0->set_emergency_switch(jk_bms_ble_jkswitch_id_4);
  jk_bms_ble_jkswitch_id_4->set_parent(bms0);
  jk_bms_ble_jkswitch_id_4->set_jk04_holding_register(0);
  jk_bms_ble_jkswitch_id_4->set_jk02_holding_register(0);
  jk_bms_ble_jkswitch_id_4->set_jk02_32s_holding_register(107);
  jk_bms_ble_jkswitch_id_5 = new jk_bms_ble::JkSwitch();
  App.register_switch(jk_bms_ble_jkswitch_id_5);
  jk_bms_ble_jkswitch_id_5->set_name("Heating Switch");
  jk_bms_ble_jkswitch_id_5->set_object_id("heating_switch");
  jk_bms_ble_jkswitch_id_5->set_disabled_by_default(false);
  jk_bms_ble_jkswitch_id_5->set_icon("mdi:radiator");
  jk_bms_ble_jkswitch_id_5->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jkswitch_id_5->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  jk_bms_ble_jkswitch_id_5->set_component_source(LOG_STR("jk_bms_ble.switch"));
  App.register_component(jk_bms_ble_jkswitch_id_5);
  bms0->set_heating_switch(jk_bms_ble_jkswitch_id_5);
  jk_bms_ble_jkswitch_id_5->set_parent(bms0);
  jk_bms_ble_jkswitch_id_5->set_jk04_holding_register(0);
  jk_bms_ble_jkswitch_id_5->set_jk02_holding_register(0);
  jk_bms_ble_jkswitch_id_5->set_jk02_32s_holding_register(39);
  jk_bms_ble_jkswitch_id_6 = new jk_bms_ble::JkSwitch();
  App.register_switch(jk_bms_ble_jkswitch_id_6);
  jk_bms_ble_jkswitch_id_6->set_name("Disable Temperature Sensors");
  jk_bms_ble_jkswitch_id_6->set_object_id("disable_temperature_sensors");
  jk_bms_ble_jkswitch_id_6->set_disabled_by_default(false);
  jk_bms_ble_jkswitch_id_6->set_icon("mdi:thermometer-off");
  jk_bms_ble_jkswitch_id_6->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jkswitch_id_6->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  jk_bms_ble_jkswitch_id_6->set_component_source(LOG_STR("jk_bms_ble.switch"));
  App.register_component(jk_bms_ble_jkswitch_id_6);
  bms0->set_disable_temperature_sensors_switch(jk_bms_ble_jkswitch_id_6);
  jk_bms_ble_jkswitch_id_6->set_parent(bms0);
  jk_bms_ble_jkswitch_id_6->set_jk04_holding_register(0);
  jk_bms_ble_jkswitch_id_6->set_jk02_holding_register(0);
  jk_bms_ble_jkswitch_id_6->set_jk02_32s_holding_register(40);
  jk_bms_ble_jkswitch_id_7 = new jk_bms_ble::JkSwitch();
  App.register_switch(jk_bms_ble_jkswitch_id_7);
  jk_bms_ble_jkswitch_id_7->set_name("Display Always On");
  jk_bms_ble_jkswitch_id_7->set_object_id("display_always_on");
  jk_bms_ble_jkswitch_id_7->set_disabled_by_default(false);
  jk_bms_ble_jkswitch_id_7->set_icon("mdi:television");
  jk_bms_ble_jkswitch_id_7->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jkswitch_id_7->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  jk_bms_ble_jkswitch_id_7->set_component_source(LOG_STR("jk_bms_ble.switch"));
  App.register_component(jk_bms_ble_jkswitch_id_7);
  bms0->set_display_always_on_switch(jk_bms_ble_jkswitch_id_7);
  jk_bms_ble_jkswitch_id_7->set_parent(bms0);
  jk_bms_ble_jkswitch_id_7->set_jk04_holding_register(0);
  jk_bms_ble_jkswitch_id_7->set_jk02_holding_register(0);
  jk_bms_ble_jkswitch_id_7->set_jk02_32s_holding_register(43);
  // number.jk_bms_ble:
  //   platform: jk_bms_ble
  //   jk_bms_ble_id: bms0
  //   balance_trigger_voltage:
  //     name: Balance Trigger Voltage
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id
  //     icon: ''
  //     entity_category: config
  //     unit_of_measurement: V
  //     mode: BOX
  //     min_value: 0.003
  //     max_value: 1.0
  //     step: 0.001
  //   cell_voltage_overvoltage_protection:
  //     name: Cell OVP
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_2
  //     icon: ''
  //     entity_category: config
  //     unit_of_measurement: V
  //     mode: BOX
  //     min_value: 1.2
  //     max_value: 4.35
  //     step: 0.001
  //   cell_voltage_overvoltage_recovery:
  //     name: Cell OVP Recovery
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_3
  //     icon: ''
  //     entity_category: config
  //     unit_of_measurement: V
  //     mode: BOX
  //     min_value: 1.2
  //     max_value: 4.35
  //     step: 0.001
  //   cell_voltage_undervoltage_protection:
  //     name: Cell UVP
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_4
  //     icon: ''
  //     entity_category: config
  //     unit_of_measurement: V
  //     mode: BOX
  //     min_value: 1.2
  //     max_value: 4.35
  //     step: 0.001
  //   cell_voltage_undervoltage_recovery:
  //     name: Cell UVP Recovery
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_5
  //     icon: ''
  //     entity_category: config
  //     unit_of_measurement: V
  //     mode: BOX
  //     min_value: 1.2
  //     max_value: 4.35
  //     step: 0.001
  //   balance_starting_voltage:
  //     name: Balance Starting Voltage
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_6
  //     icon: ''
  //     entity_category: config
  //     unit_of_measurement: V
  //     mode: BOX
  //     min_value: 1.2
  //     max_value: 4.25
  //     step: 0.01
  //   total_battery_capacity:
  //     name: Total Battery Capacity
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_7
  //     icon: ''
  //     entity_category: config
  //     mode: BOX
  //     min_value: 5.0
  //     max_value: 2000.0
  //     step: 1.0
  //     unit_of_measurement: Ah
  //   max_balance_current:
  //     name: Max Balance Current
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_8
  //     icon: ''
  //     entity_category: config
  //     mode: BOX
  //     min_value: 0.3
  //     max_value: 10.0
  //     step: 0.1
  //     unit_of_measurement: A
  //   charge_overcurrent_protection_delay:
  //     name: Charge OCP Delay
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_9
  //     icon: ''
  //     entity_category: config
  //     mode: BOX
  //     min_value: 2.0
  //     max_value: 600.0
  //     step: 1.0
  //     unit_of_measurement: s
  //   discharge_overcurrent_protection_delay:
  //     name: Discharge OCP Delay
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_10
  //     icon: ''
  //     entity_category: config
  //     mode: BOX
  //     min_value: 2.0
  //     max_value: 600.0
  //     step: 1.0
  //     unit_of_measurement: s
  //   short_circuit_protection_delay:
  //     name: Short Circuit Protection Delay
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_11
  //     icon: ''
  //     entity_category: config
  //     mode: BOX
  //     min_value: 0.0
  //     max_value: 10000000.0
  //     step: 1.0
  //     unit_of_measurement: μs
  //   short_circuit_protection_recovery_time:
  //     name: Short Circuit Protection Recovery
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_12
  //     icon: ''
  //     entity_category: config
  //     mode: BOX
  //     min_value: 2.0
  //     max_value: 600.0
  //     step: 1.0
  //     unit_of_measurement: s
  //   charge_overtemperature_protection:
  //     name: Charge OTP
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_13
  //     icon: ''
  //     entity_category: config
  //     mode: BOX
  //     min_value: 30.0
  //     max_value: 80.0
  //     step: 0.1
  //     unit_of_measurement: °C
  //   charge_overtemperature_protection_recovery:
  //     name: Charge OTP Recovery
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_14
  //     icon: ''
  //     entity_category: config
  //     mode: BOX
  //     min_value: 30.0
  //     max_value: 80.0
  //     step: 0.1
  //     unit_of_measurement: °C
  //   discharge_overtemperature_protection:
  //     name: Discharge OTP
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_15
  //     icon: ''
  //     entity_category: config
  //     mode: BOX
  //     min_value: 30.0
  //     max_value: 80.0
  //     step: 0.1
  //     unit_of_measurement: °C
  //   discharge_overtemperature_protection_recovery:
  //     name: Discharge OTP Recovery
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_16
  //     icon: ''
  //     entity_category: config
  //     mode: BOX
  //     min_value: 30.0
  //     max_value: 80.0
  //     step: 0.1
  //     unit_of_measurement: °C
  //   charge_undertemperature_protection:
  //     name: Charge UTP
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_17
  //     icon: ''
  //     entity_category: config
  //     mode: BOX
  //     min_value: -30.0
  //     max_value: 20.0
  //     step: 0.1
  //     unit_of_measurement: °C
  //   charge_undertemperature_protection_recovery:
  //     name: Charge UTP Recovery
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_18
  //     icon: ''
  //     entity_category: config
  //     mode: BOX
  //     min_value: -30.0
  //     max_value: 20.0
  //     step: 0.1
  //     unit_of_measurement: °C
  //   power_tube_overtemperature_protection:
  //     name: MOSFET OTP
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_19
  //     icon: ''
  //     entity_category: config
  //     mode: BOX
  //     min_value: 30.0
  //     max_value: 100.0
  //     step: 0.1
  //     unit_of_measurement: °C
  //   power_tube_overtemperature_protection_recovery:
  //     name: MOSFET OTP Recovery
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_20
  //     icon: ''
  //     entity_category: config
  //     mode: BOX
  //     min_value: 30.0
  //     max_value: 100.0
  //     step: 0.1
  //     unit_of_measurement: °C
  //   cell_count:
  //     name: Cell Count
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_21
  //     icon: ''
  //     entity_category: config
  //     mode: BOX
  //     min_value: 2.0
  //     max_value: 24.0
  //     step: 1.0
  //     unit_of_measurement: ''
  //   power_off_voltage:
  //     name: Power Off Voltage
  //     disabled_by_default: false
  //     id: jk_bms_ble_jknumber_id_22
  //     icon: ''
  //     entity_category: config
  //     unit_of_measurement: V
  //     mode: BOX
  //     min_value: 1.2
  //     max_value: 4.35
  //     step: 0.01
  jk_bms_ble_jknumber_id_4 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_4);
  jk_bms_ble_jknumber_id_4->set_name("Cell UVP");
  jk_bms_ble_jknumber_id_4->set_object_id("cell_uvp");
  jk_bms_ble_jknumber_id_4->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_4->set_icon("");
  jk_bms_ble_jknumber_id_4->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_4->traits.set_min_value(1.2f);
  jk_bms_ble_jknumber_id_4->traits.set_max_value(4.35f);
  jk_bms_ble_jknumber_id_4->traits.set_step(0.001f);
  jk_bms_ble_jknumber_id_4->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_4->traits.set_unit_of_measurement("V");
  jk_bms_ble_jknumber_id_4->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_4);
  bms0->set_cell_voltage_undervoltage_protection_number(jk_bms_ble_jknumber_id_4);
  jk_bms_ble_jknumber_id_4->set_parent(bms0);
  jk_bms_ble_jknumber_id_4->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_4->set_jk02_holding_register(2);
  jk_bms_ble_jknumber_id_4->set_jk02_32s_holding_register(2);
  jk_bms_ble_jknumber_id_4->set_factor(1000.0f);
  jk_bms_ble_jknumber_id_4->set_length(4);
  jk_bms_ble_jknumber_id_5 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_5);
  jk_bms_ble_jknumber_id_5->set_name("Cell UVP Recovery");
  jk_bms_ble_jknumber_id_5->set_object_id("cell_uvp_recovery");
  jk_bms_ble_jknumber_id_5->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_5->set_icon("");
  jk_bms_ble_jknumber_id_5->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_5->traits.set_min_value(1.2f);
  jk_bms_ble_jknumber_id_5->traits.set_max_value(4.35f);
  jk_bms_ble_jknumber_id_5->traits.set_step(0.001f);
  jk_bms_ble_jknumber_id_5->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_5->traits.set_unit_of_measurement("V");
  jk_bms_ble_jknumber_id_5->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_5);
  bms0->set_cell_voltage_undervoltage_recovery_number(jk_bms_ble_jknumber_id_5);
  jk_bms_ble_jknumber_id_5->set_parent(bms0);
  jk_bms_ble_jknumber_id_5->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_5->set_jk02_holding_register(3);
  jk_bms_ble_jknumber_id_5->set_jk02_32s_holding_register(3);
  jk_bms_ble_jknumber_id_5->set_factor(1000.0f);
  jk_bms_ble_jknumber_id_5->set_length(4);
  jk_bms_ble_jknumber_id_2 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_2);
  jk_bms_ble_jknumber_id_2->set_name("Cell OVP");
  jk_bms_ble_jknumber_id_2->set_object_id("cell_ovp");
  jk_bms_ble_jknumber_id_2->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_2->set_icon("");
  jk_bms_ble_jknumber_id_2->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_2->traits.set_min_value(1.2f);
  jk_bms_ble_jknumber_id_2->traits.set_max_value(4.35f);
  jk_bms_ble_jknumber_id_2->traits.set_step(0.001f);
  jk_bms_ble_jknumber_id_2->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_2->traits.set_unit_of_measurement("V");
  jk_bms_ble_jknumber_id_2->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_2);
  bms0->set_cell_voltage_overvoltage_protection_number(jk_bms_ble_jknumber_id_2);
  jk_bms_ble_jknumber_id_2->set_parent(bms0);
  jk_bms_ble_jknumber_id_2->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_2->set_jk02_holding_register(4);
  jk_bms_ble_jknumber_id_2->set_jk02_32s_holding_register(4);
  jk_bms_ble_jknumber_id_2->set_factor(1000.0f);
  jk_bms_ble_jknumber_id_2->set_length(4);
  jk_bms_ble_jknumber_id_3 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_3);
  jk_bms_ble_jknumber_id_3->set_name("Cell OVP Recovery");
  jk_bms_ble_jknumber_id_3->set_object_id("cell_ovp_recovery");
  jk_bms_ble_jknumber_id_3->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_3->set_icon("");
  jk_bms_ble_jknumber_id_3->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_3->traits.set_min_value(1.2f);
  jk_bms_ble_jknumber_id_3->traits.set_max_value(4.35f);
  jk_bms_ble_jknumber_id_3->traits.set_step(0.001f);
  jk_bms_ble_jknumber_id_3->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_3->traits.set_unit_of_measurement("V");
  jk_bms_ble_jknumber_id_3->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_3);
  bms0->set_cell_voltage_overvoltage_recovery_number(jk_bms_ble_jknumber_id_3);
  jk_bms_ble_jknumber_id_3->set_parent(bms0);
  jk_bms_ble_jknumber_id_3->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_3->set_jk02_holding_register(5);
  jk_bms_ble_jknumber_id_3->set_jk02_32s_holding_register(5);
  jk_bms_ble_jknumber_id_3->set_factor(1000.0f);
  jk_bms_ble_jknumber_id_3->set_length(4);
  jk_bms_ble_jknumber_id = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id);
  jk_bms_ble_jknumber_id->set_name("Balance Trigger Voltage");
  jk_bms_ble_jknumber_id->set_object_id("balance_trigger_voltage");
  jk_bms_ble_jknumber_id->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id->set_icon("");
  jk_bms_ble_jknumber_id->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id->traits.set_min_value(0.003f);
  jk_bms_ble_jknumber_id->traits.set_max_value(1.0f);
  jk_bms_ble_jknumber_id->traits.set_step(0.001f);
  jk_bms_ble_jknumber_id->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id->traits.set_unit_of_measurement("V");
  jk_bms_ble_jknumber_id->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id);
  bms0->set_balance_trigger_voltage_number(jk_bms_ble_jknumber_id);
  jk_bms_ble_jknumber_id->set_parent(bms0);
  jk_bms_ble_jknumber_id->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id->set_jk02_holding_register(6);
  jk_bms_ble_jknumber_id->set_jk02_32s_holding_register(6);
  jk_bms_ble_jknumber_id->set_factor(1000.0f);
  jk_bms_ble_jknumber_id->set_length(4);
  jk_bms_ble_jknumber_id_21 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_21);
  jk_bms_ble_jknumber_id_21->set_name("Cell Count");
  jk_bms_ble_jknumber_id_21->set_object_id("cell_count");
  jk_bms_ble_jknumber_id_21->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_21->set_icon("");
  jk_bms_ble_jknumber_id_21->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_21->traits.set_min_value(2.0f);
  jk_bms_ble_jknumber_id_21->traits.set_max_value(24.0f);
  jk_bms_ble_jknumber_id_21->traits.set_step(1.0f);
  jk_bms_ble_jknumber_id_21->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_21->traits.set_unit_of_measurement("");
  jk_bms_ble_jknumber_id_21->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_21);
  bms0->set_cell_count_number(jk_bms_ble_jknumber_id_21);
  jk_bms_ble_jknumber_id_21->set_parent(bms0);
  jk_bms_ble_jknumber_id_21->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_21->set_jk02_holding_register(28);
  jk_bms_ble_jknumber_id_21->set_jk02_32s_holding_register(28);
  jk_bms_ble_jknumber_id_21->set_factor(1.0f);
  jk_bms_ble_jknumber_id_21->set_length(4);
  jk_bms_ble_jknumber_id_7 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_7);
  jk_bms_ble_jknumber_id_7->set_name("Total Battery Capacity");
  jk_bms_ble_jknumber_id_7->set_object_id("total_battery_capacity");
  jk_bms_ble_jknumber_id_7->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_7->set_icon("");
  jk_bms_ble_jknumber_id_7->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_7->traits.set_min_value(5.0f);
  jk_bms_ble_jknumber_id_7->traits.set_max_value(2000.0f);
  jk_bms_ble_jknumber_id_7->traits.set_step(1.0f);
  jk_bms_ble_jknumber_id_7->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_7->traits.set_unit_of_measurement("Ah");
  jk_bms_ble_jknumber_id_7->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_7);
  bms0->set_total_battery_capacity_number(jk_bms_ble_jknumber_id_7);
  jk_bms_ble_jknumber_id_7->set_parent(bms0);
  jk_bms_ble_jknumber_id_7->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_7->set_jk02_holding_register(32);
  jk_bms_ble_jknumber_id_7->set_jk02_32s_holding_register(32);
  jk_bms_ble_jknumber_id_7->set_factor(1000.0f);
  jk_bms_ble_jknumber_id_7->set_length(4);
  jk_bms_ble_jknumber_id_6 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_6);
  jk_bms_ble_jknumber_id_6->set_name("Balance Starting Voltage");
  jk_bms_ble_jknumber_id_6->set_object_id("balance_starting_voltage");
  jk_bms_ble_jknumber_id_6->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_6->set_icon("");
  jk_bms_ble_jknumber_id_6->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_6->traits.set_min_value(1.2f);
  jk_bms_ble_jknumber_id_6->traits.set_max_value(4.25f);
  jk_bms_ble_jknumber_id_6->traits.set_step(0.01f);
  jk_bms_ble_jknumber_id_6->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_6->traits.set_unit_of_measurement("V");
  jk_bms_ble_jknumber_id_6->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_6);
  bms0->set_balance_starting_voltage_number(jk_bms_ble_jknumber_id_6);
  jk_bms_ble_jknumber_id_6->set_parent(bms0);
  jk_bms_ble_jknumber_id_6->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_6->set_jk02_holding_register(38);
  jk_bms_ble_jknumber_id_6->set_jk02_32s_holding_register(34);
  jk_bms_ble_jknumber_id_6->set_factor(1000.0f);
  jk_bms_ble_jknumber_id_6->set_length(4);
  jk_bms_ble_jknumber_id_22 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_22);
  jk_bms_ble_jknumber_id_22->set_name("Power Off Voltage");
  jk_bms_ble_jknumber_id_22->set_object_id("power_off_voltage");
  jk_bms_ble_jknumber_id_22->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_22->set_icon("");
  jk_bms_ble_jknumber_id_22->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_22->traits.set_min_value(1.2f);
  jk_bms_ble_jknumber_id_22->traits.set_max_value(4.35f);
  jk_bms_ble_jknumber_id_22->traits.set_step(0.01f);
  jk_bms_ble_jknumber_id_22->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_22->traits.set_unit_of_measurement("V");
  jk_bms_ble_jknumber_id_22->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_22);
  bms0->set_power_off_voltage_number(jk_bms_ble_jknumber_id_22);
  jk_bms_ble_jknumber_id_22->set_parent(bms0);
  jk_bms_ble_jknumber_id_22->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_22->set_jk02_holding_register(11);
  jk_bms_ble_jknumber_id_22->set_jk02_32s_holding_register(11);
  jk_bms_ble_jknumber_id_22->set_factor(1000.0f);
  jk_bms_ble_jknumber_id_22->set_length(4);
  jk_bms_ble_jknumber_id_8 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_8);
  jk_bms_ble_jknumber_id_8->set_name("Max Balance Current");
  jk_bms_ble_jknumber_id_8->set_object_id("max_balance_current");
  jk_bms_ble_jknumber_id_8->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_8->set_icon("");
  jk_bms_ble_jknumber_id_8->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_8->traits.set_min_value(0.3f);
  jk_bms_ble_jknumber_id_8->traits.set_max_value(10.0f);
  jk_bms_ble_jknumber_id_8->traits.set_step(0.1f);
  jk_bms_ble_jknumber_id_8->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_8->traits.set_unit_of_measurement("A");
  jk_bms_ble_jknumber_id_8->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_8);
  bms0->set_max_balance_current_number(jk_bms_ble_jknumber_id_8);
  jk_bms_ble_jknumber_id_8->set_parent(bms0);
  jk_bms_ble_jknumber_id_8->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_8->set_jk02_holding_register(19);
  jk_bms_ble_jknumber_id_8->set_jk02_32s_holding_register(19);
  jk_bms_ble_jknumber_id_8->set_factor(1000.0f);
  jk_bms_ble_jknumber_id_8->set_length(4);
  jk_bms_ble_jknumber_id_9 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_9);
  jk_bms_ble_jknumber_id_9->set_name("Charge OCP Delay");
  jk_bms_ble_jknumber_id_9->set_object_id("charge_ocp_delay");
  jk_bms_ble_jknumber_id_9->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_9->set_icon("");
  jk_bms_ble_jknumber_id_9->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_9->traits.set_min_value(2.0f);
  jk_bms_ble_jknumber_id_9->traits.set_max_value(600.0f);
  jk_bms_ble_jknumber_id_9->traits.set_step(1.0f);
  jk_bms_ble_jknumber_id_9->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_9->traits.set_unit_of_measurement("s");
  jk_bms_ble_jknumber_id_9->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_9);
  bms0->set_charge_overcurrent_protection_delay_number(jk_bms_ble_jknumber_id_9);
  jk_bms_ble_jknumber_id_9->set_parent(bms0);
  jk_bms_ble_jknumber_id_9->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_9->set_jk02_holding_register(13);
  jk_bms_ble_jknumber_id_9->set_jk02_32s_holding_register(13);
  jk_bms_ble_jknumber_id_9->set_factor(1.0f);
  jk_bms_ble_jknumber_id_9->set_length(4);
  jk_bms_ble_jknumber_id_10 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_10);
  jk_bms_ble_jknumber_id_10->set_name("Discharge OCP Delay");
  jk_bms_ble_jknumber_id_10->set_object_id("discharge_ocp_delay");
  jk_bms_ble_jknumber_id_10->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_10->set_icon("");
  jk_bms_ble_jknumber_id_10->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_10->traits.set_min_value(2.0f);
  jk_bms_ble_jknumber_id_10->traits.set_max_value(600.0f);
  jk_bms_ble_jknumber_id_10->traits.set_step(1.0f);
  jk_bms_ble_jknumber_id_10->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_10->traits.set_unit_of_measurement("s");
  jk_bms_ble_jknumber_id_10->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_10);
  bms0->set_discharge_overcurrent_protection_delay_number(jk_bms_ble_jknumber_id_10);
  jk_bms_ble_jknumber_id_10->set_parent(bms0);
  jk_bms_ble_jknumber_id_10->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_10->set_jk02_holding_register(16);
  jk_bms_ble_jknumber_id_10->set_jk02_32s_holding_register(16);
  jk_bms_ble_jknumber_id_10->set_factor(1.0f);
  jk_bms_ble_jknumber_id_10->set_length(4);
  jk_bms_ble_jknumber_id_11 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_11);
  jk_bms_ble_jknumber_id_11->set_name("Short Circuit Protection Delay");
  jk_bms_ble_jknumber_id_11->set_object_id("short_circuit_protection_delay");
  jk_bms_ble_jknumber_id_11->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_11->set_icon("");
  jk_bms_ble_jknumber_id_11->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_11->traits.set_min_value(0.0f);
  jk_bms_ble_jknumber_id_11->traits.set_max_value(10000000.0f);
  jk_bms_ble_jknumber_id_11->traits.set_step(1.0f);
  jk_bms_ble_jknumber_id_11->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_11->traits.set_unit_of_measurement("\316\274s");
  jk_bms_ble_jknumber_id_11->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_11);
  bms0->set_short_circuit_protection_delay_number(jk_bms_ble_jknumber_id_11);
  jk_bms_ble_jknumber_id_11->set_parent(bms0);
  jk_bms_ble_jknumber_id_11->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_11->set_jk02_holding_register(37);
  jk_bms_ble_jknumber_id_11->set_jk02_32s_holding_register(33);
  jk_bms_ble_jknumber_id_11->set_factor(1.0f);
  jk_bms_ble_jknumber_id_11->set_length(4);
  jk_bms_ble_jknumber_id_12 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_12);
  jk_bms_ble_jknumber_id_12->set_name("Short Circuit Protection Recovery");
  jk_bms_ble_jknumber_id_12->set_object_id("short_circuit_protection_recovery");
  jk_bms_ble_jknumber_id_12->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_12->set_icon("");
  jk_bms_ble_jknumber_id_12->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_12->traits.set_min_value(2.0f);
  jk_bms_ble_jknumber_id_12->traits.set_max_value(600.0f);
  jk_bms_ble_jknumber_id_12->traits.set_step(1.0f);
  jk_bms_ble_jknumber_id_12->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_12->traits.set_unit_of_measurement("s");
  jk_bms_ble_jknumber_id_12->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_12);
  bms0->set_short_circuit_protection_recovery_time_number(jk_bms_ble_jknumber_id_12);
  jk_bms_ble_jknumber_id_12->set_parent(bms0);
  jk_bms_ble_jknumber_id_12->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_12->set_jk02_holding_register(18);
  jk_bms_ble_jknumber_id_12->set_jk02_32s_holding_register(18);
  jk_bms_ble_jknumber_id_12->set_factor(1.0f);
  jk_bms_ble_jknumber_id_12->set_length(4);
  jk_bms_ble_jknumber_id_13 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_13);
  jk_bms_ble_jknumber_id_13->set_name("Charge OTP");
  jk_bms_ble_jknumber_id_13->set_object_id("charge_otp");
  jk_bms_ble_jknumber_id_13->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_13->set_icon("");
  jk_bms_ble_jknumber_id_13->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_13->traits.set_min_value(30.0f);
  jk_bms_ble_jknumber_id_13->traits.set_max_value(80.0f);
  jk_bms_ble_jknumber_id_13->traits.set_step(0.1f);
  jk_bms_ble_jknumber_id_13->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_13->traits.set_unit_of_measurement("\302\260C");
  jk_bms_ble_jknumber_id_13->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_13);
  bms0->set_charge_overtemperature_protection_number(jk_bms_ble_jknumber_id_13);
  jk_bms_ble_jknumber_id_13->set_parent(bms0);
  jk_bms_ble_jknumber_id_13->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_13->set_jk02_holding_register(20);
  jk_bms_ble_jknumber_id_13->set_jk02_32s_holding_register(20);
  jk_bms_ble_jknumber_id_13->set_factor(10.0f);
  jk_bms_ble_jknumber_id_13->set_length(4);
  jk_bms_ble_jknumber_id_14 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_14);
  jk_bms_ble_jknumber_id_14->set_name("Charge OTP Recovery");
  jk_bms_ble_jknumber_id_14->set_object_id("charge_otp_recovery");
  jk_bms_ble_jknumber_id_14->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_14->set_icon("");
  jk_bms_ble_jknumber_id_14->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_14->traits.set_min_value(30.0f);
  jk_bms_ble_jknumber_id_14->traits.set_max_value(80.0f);
  jk_bms_ble_jknumber_id_14->traits.set_step(0.1f);
  jk_bms_ble_jknumber_id_14->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_14->traits.set_unit_of_measurement("\302\260C");
  jk_bms_ble_jknumber_id_14->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_14);
  bms0->set_charge_overtemperature_protection_recovery_number(jk_bms_ble_jknumber_id_14);
  jk_bms_ble_jknumber_id_14->set_parent(bms0);
  jk_bms_ble_jknumber_id_14->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_14->set_jk02_holding_register(21);
  jk_bms_ble_jknumber_id_14->set_jk02_32s_holding_register(21);
  jk_bms_ble_jknumber_id_14->set_factor(10.0f);
  jk_bms_ble_jknumber_id_14->set_length(4);
  jk_bms_ble_jknumber_id_15 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_15);
  jk_bms_ble_jknumber_id_15->set_name("Discharge OTP");
  jk_bms_ble_jknumber_id_15->set_object_id("discharge_otp");
  jk_bms_ble_jknumber_id_15->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_15->set_icon("");
  jk_bms_ble_jknumber_id_15->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_15->traits.set_min_value(30.0f);
  jk_bms_ble_jknumber_id_15->traits.set_max_value(80.0f);
  jk_bms_ble_jknumber_id_15->traits.set_step(0.1f);
  jk_bms_ble_jknumber_id_15->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_15->traits.set_unit_of_measurement("\302\260C");
  jk_bms_ble_jknumber_id_15->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_15);
  bms0->set_discharge_overtemperature_protection_number(jk_bms_ble_jknumber_id_15);
  jk_bms_ble_jknumber_id_15->set_parent(bms0);
  jk_bms_ble_jknumber_id_15->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_15->set_jk02_holding_register(22);
  jk_bms_ble_jknumber_id_15->set_jk02_32s_holding_register(22);
  jk_bms_ble_jknumber_id_15->set_factor(10.0f);
  jk_bms_ble_jknumber_id_15->set_length(4);
  jk_bms_ble_jknumber_id_16 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_16);
  jk_bms_ble_jknumber_id_16->set_name("Discharge OTP Recovery");
  jk_bms_ble_jknumber_id_16->set_object_id("discharge_otp_recovery");
  jk_bms_ble_jknumber_id_16->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_16->set_icon("");
  jk_bms_ble_jknumber_id_16->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_16->traits.set_min_value(30.0f);
  jk_bms_ble_jknumber_id_16->traits.set_max_value(80.0f);
  jk_bms_ble_jknumber_id_16->traits.set_step(0.1f);
  jk_bms_ble_jknumber_id_16->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_16->traits.set_unit_of_measurement("\302\260C");
  jk_bms_ble_jknumber_id_16->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_16);
  bms0->set_discharge_overtemperature_protection_recovery_number(jk_bms_ble_jknumber_id_16);
  jk_bms_ble_jknumber_id_16->set_parent(bms0);
  jk_bms_ble_jknumber_id_16->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_16->set_jk02_holding_register(23);
  jk_bms_ble_jknumber_id_16->set_jk02_32s_holding_register(23);
  jk_bms_ble_jknumber_id_16->set_factor(10.0f);
  jk_bms_ble_jknumber_id_16->set_length(4);
  jk_bms_ble_jknumber_id_17 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_17);
  jk_bms_ble_jknumber_id_17->set_name("Charge UTP");
  jk_bms_ble_jknumber_id_17->set_object_id("charge_utp");
  jk_bms_ble_jknumber_id_17->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_17->set_icon("");
  jk_bms_ble_jknumber_id_17->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_17->traits.set_min_value(-30.0f);
  jk_bms_ble_jknumber_id_17->traits.set_max_value(20.0f);
  jk_bms_ble_jknumber_id_17->traits.set_step(0.1f);
  jk_bms_ble_jknumber_id_17->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_17->traits.set_unit_of_measurement("\302\260C");
  jk_bms_ble_jknumber_id_17->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_17);
  bms0->set_charge_undertemperature_protection_number(jk_bms_ble_jknumber_id_17);
  jk_bms_ble_jknumber_id_17->set_parent(bms0);
  jk_bms_ble_jknumber_id_17->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_17->set_jk02_holding_register(24);
  jk_bms_ble_jknumber_id_17->set_jk02_32s_holding_register(24);
  jk_bms_ble_jknumber_id_17->set_factor(10.0f);
  jk_bms_ble_jknumber_id_17->set_length(4);
  jk_bms_ble_jknumber_id_18 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_18);
  jk_bms_ble_jknumber_id_18->set_name("Charge UTP Recovery");
  jk_bms_ble_jknumber_id_18->set_object_id("charge_utp_recovery");
  jk_bms_ble_jknumber_id_18->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_18->set_icon("");
  jk_bms_ble_jknumber_id_18->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_18->traits.set_min_value(-30.0f);
  jk_bms_ble_jknumber_id_18->traits.set_max_value(20.0f);
  jk_bms_ble_jknumber_id_18->traits.set_step(0.1f);
  jk_bms_ble_jknumber_id_18->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_18->traits.set_unit_of_measurement("\302\260C");
  jk_bms_ble_jknumber_id_18->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_18);
  bms0->set_charge_undertemperature_protection_recovery_number(jk_bms_ble_jknumber_id_18);
  jk_bms_ble_jknumber_id_18->set_parent(bms0);
  jk_bms_ble_jknumber_id_18->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_18->set_jk02_holding_register(25);
  jk_bms_ble_jknumber_id_18->set_jk02_32s_holding_register(25);
  jk_bms_ble_jknumber_id_18->set_factor(10.0f);
  jk_bms_ble_jknumber_id_18->set_length(4);
  jk_bms_ble_jknumber_id_19 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_19);
  jk_bms_ble_jknumber_id_19->set_name("MOSFET OTP");
  jk_bms_ble_jknumber_id_19->set_object_id("mosfet_otp");
  jk_bms_ble_jknumber_id_19->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_19->set_icon("");
  jk_bms_ble_jknumber_id_19->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_19->traits.set_min_value(30.0f);
  jk_bms_ble_jknumber_id_19->traits.set_max_value(100.0f);
  jk_bms_ble_jknumber_id_19->traits.set_step(0.1f);
  jk_bms_ble_jknumber_id_19->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_19->traits.set_unit_of_measurement("\302\260C");
  jk_bms_ble_jknumber_id_19->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_19);
  bms0->set_power_tube_overtemperature_protection_number(jk_bms_ble_jknumber_id_19);
  jk_bms_ble_jknumber_id_19->set_parent(bms0);
  jk_bms_ble_jknumber_id_19->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_19->set_jk02_holding_register(26);
  jk_bms_ble_jknumber_id_19->set_jk02_32s_holding_register(26);
  jk_bms_ble_jknumber_id_19->set_factor(10.0f);
  jk_bms_ble_jknumber_id_19->set_length(4);
  jk_bms_ble_jknumber_id_20 = new jk_bms_ble::JkNumber();
  App.register_number(jk_bms_ble_jknumber_id_20);
  jk_bms_ble_jknumber_id_20->set_name("MOSFET OTP Recovery");
  jk_bms_ble_jknumber_id_20->set_object_id("mosfet_otp_recovery");
  jk_bms_ble_jknumber_id_20->set_disabled_by_default(false);
  jk_bms_ble_jknumber_id_20->set_icon("");
  jk_bms_ble_jknumber_id_20->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  jk_bms_ble_jknumber_id_20->traits.set_min_value(30.0f);
  jk_bms_ble_jknumber_id_20->traits.set_max_value(100.0f);
  jk_bms_ble_jknumber_id_20->traits.set_step(0.1f);
  jk_bms_ble_jknumber_id_20->traits.set_mode(number::NUMBER_MODE_BOX);
  jk_bms_ble_jknumber_id_20->traits.set_unit_of_measurement("\302\260C");
  jk_bms_ble_jknumber_id_20->set_component_source(LOG_STR("jk_bms_ble.number"));
  App.register_component(jk_bms_ble_jknumber_id_20);
  bms0->set_power_tube_overtemperature_protection_recovery_number(jk_bms_ble_jknumber_id_20);
  jk_bms_ble_jknumber_id_20->set_parent(bms0);
  jk_bms_ble_jknumber_id_20->set_jk04_holding_register(0);
  jk_bms_ble_jknumber_id_20->set_jk02_holding_register(27);
  jk_bms_ble_jknumber_id_20->set_jk02_32s_holding_register(27);
  jk_bms_ble_jknumber_id_20->set_factor(10.0f);
  jk_bms_ble_jknumber_id_20->set_length(4);
  // button.jk_bms_ble:
  //   platform: jk_bms_ble
  //   jk_bms_ble_id: bms0
  //   retrieve_settings:
  //     name: Retrieve Settings
  //     disabled_by_default: false
  //     id: jk_bms_ble_jkbutton_id
  //     icon: mdi:cog
  //   retrieve_device_info:
  //     name: Retrieve Device Info
  //     disabled_by_default: false
  //     id: jk_bms_ble_jkbutton_id_2
  //     icon: mdi:information-variant
  jk_bms_ble_jkbutton_id = new jk_bms_ble::JkButton();
  App.register_button(jk_bms_ble_jkbutton_id);
  jk_bms_ble_jkbutton_id->set_name("Retrieve Settings");
  jk_bms_ble_jkbutton_id->set_object_id("retrieve_settings");
  jk_bms_ble_jkbutton_id->set_disabled_by_default(false);
  jk_bms_ble_jkbutton_id->set_icon("mdi:cog");
  jk_bms_ble_jkbutton_id->set_component_source(LOG_STR("jk_bms_ble.button"));
  App.register_component(jk_bms_ble_jkbutton_id);
  jk_bms_ble_jkbutton_id->set_parent(bms0);
  jk_bms_ble_jkbutton_id->set_holding_register(150);
  jk_bms_ble_jkbutton_id_2 = new jk_bms_ble::JkButton();
  App.register_button(jk_bms_ble_jkbutton_id_2);
  jk_bms_ble_jkbutton_id_2->set_name("Retrieve Device Info");
  jk_bms_ble_jkbutton_id_2->set_object_id("retrieve_device_info");
  jk_bms_ble_jkbutton_id_2->set_disabled_by_default(false);
  jk_bms_ble_jkbutton_id_2->set_icon("mdi:information-variant");
  jk_bms_ble_jkbutton_id_2->set_component_source(LOG_STR("jk_bms_ble.button"));
  App.register_component(jk_bms_ble_jkbutton_id_2);
  jk_bms_ble_jkbutton_id_2->set_parent(bms0);
  jk_bms_ble_jkbutton_id_2->set_holding_register(151);
  // preferences:
  //   id: preferences_intervalsyncer_id
  //   flash_write_interval: 60s
  preferences_intervalsyncer_id = new preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  preferences_intervalsyncer_id->set_component_source(LOG_STR("preferences"));
  App.register_component(preferences_intervalsyncer_id);
  // md5:
  // socket:
  //   implementation: bsd_sockets
  // sha256:
  //   {}
  // esp32_ble:
  //   id: esp32_ble_esp32ble_id
  //   io_capability: none
  //   enable_on_boot: true
  //   advertising: false
  //   advertising_cycle_time: 10s
  //   disable_bt_logs: true
  //   connection_timeout: 20s
  //   max_notifications: 12
  //   max_connections: 3
  esp32_ble_esp32ble_id = new esp32_ble::ESP32BLE();
  esp32_ble_esp32ble_id->set_enable_on_boot(true);
  esp32_ble_esp32ble_id->set_io_capability(esp32_ble::IO_CAP_NONE);
  esp32_ble_esp32ble_id->set_advertising_cycle_time(10000);
  esp32_ble_esp32ble_id->set_component_source(LOG_STR("esp32_ble"));
  App.register_component(esp32_ble_esp32ble_id);
  // web_server_idf:
  //   {}
  esp32_ble_esp32ble_id->register_gap_event_handler(esp32_ble_tracker_esp32bletracker_id);
  esp32_ble_esp32ble_id->register_gap_scan_event_handler(esp32_ble_tracker_esp32bletracker_id);
  esp32_ble_esp32ble_id->register_gattc_event_handler(esp32_ble_tracker_esp32bletracker_id);
  esp32_ble_esp32ble_id->register_ble_status_event_handler(esp32_ble_tracker_esp32bletracker_id);
  esp32_ble_tracker_esp32bletracker_id->set_parent(esp32_ble_esp32ble_id);
  esp32_ble_tracker_esp32bletracker_id->set_scan_duration(300);
  esp32_ble_tracker_esp32bletracker_id->set_scan_interval(512);
  esp32_ble_tracker_esp32bletracker_id->set_scan_window(48);
  esp32_ble_tracker_esp32bletracker_id->set_scan_active(true);
  esp32_ble_tracker_esp32bletracker_id->set_scan_continuous(true);
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
