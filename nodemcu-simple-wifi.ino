#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "4ohHdNHHqTTjSjNUO8p2lYLhSlEiIdkS";
char ssid[] = "VIVOFIBRA-9B6D";
char pass[] = "EAEA8F9B6D";

void setup(){
  
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop(){
  
  Blynk.run();
}
