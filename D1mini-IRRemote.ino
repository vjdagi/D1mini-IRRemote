#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include "ProximusRemote.h"
#include "Web.h"
#define IR_LED D1

char ssid[] = ""; 
char pass[] = ""; 
int val, vall = -1;

IRsend irsend(IR_LED);
WiFiServer server(80);

void setup() {
  irsend.begin();
  WiFi.hostname("TVremote");
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  server.begin();
}

void loop() {
  WiFiClient client = server.available();
  String req = client.readStringUntil('\r');
  
  client.flush(); 
  val = GetVal(req);
  
  String s = Head();
  s += Start();
  //s += "<h1>";
  
  if (val == 100){
    irsend.sendRaw(Remote[9].value, 35, 32);
    delay(500);
    irsend.sendRaw(Remote[4].value, 35, 32);
    //s += "Discovery";
    }
  else if(vall != val){
    irsend.sendRaw(Remote[val].value, 35, 32);
    //s += remoteTV[val].name;
    }
  
  //s += "</h1>";
  s += Ending();
  delay(500);
  client.flush();
  client.print(s);
  val = vall;
  } 

