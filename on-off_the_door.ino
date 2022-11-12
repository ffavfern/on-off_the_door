
#define BLYNK_TEMPLATE_ID           "TMPLFPa7t21P"
#define BLYNK_DEVICE_NAME           "Door"
#define BLYNK_AUTH_TOKEN            "RHCuEHAtx17ux5hzOGPC5BwYBPTp78BT"


// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "ffavfern";
char pass[] = "87654321";

void setup()
{
  // Debug console
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
  
}

void loop()
{
  Blynk.run();
}
