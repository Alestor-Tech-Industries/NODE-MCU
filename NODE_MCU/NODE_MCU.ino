//Coded by Alestor Aldous/Alestor-tech-Industries
//You have the freedom to edit this code
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "AUTH CODE";
char ssid[] = "SSID";
char pass[] = "PASSWORD";
void setup() {
  pinMode(4,OUTPUT);
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);
}
void loop()
{
Blynk.run();
}
