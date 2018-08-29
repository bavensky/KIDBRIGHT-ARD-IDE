#include <Arduino.h> 

/* BOARD INFO */
String DEVICE_NAME      = "KIDBRIGHT-001"; 

/* WIFI INFO */ 
String WIFI_SSID        = "ampere";
String WIFI_PASSWORD    = "espertap";

/* MQTT INFO */ 
String MQTT_HOST        = "gb.netpie.io";
String MQTT_USERNAME    = "debTPFgDaKEaein";
String MQTT_PASSWORD    = "pkNFMPfu6qPd4hhJlgUqed3s4yw=";
String MQTT_CLIENT_ID   = "SVUDuzo6a7QhlnxR";
String MQTT_PREFIX      = "/nstda/gearname/";
int    MQTT_PORT        = 1883;
int PUBLISH_EVERY       = 500; //1L * 1000;
int MQTT_CONNECT_TIMEOUT= 120; 
