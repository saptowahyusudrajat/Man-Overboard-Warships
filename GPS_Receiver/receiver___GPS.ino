#include <TinyGPS++.h>
static const uint32_t GPSBaud = 9600;

TinyGPSPlus gps;
void setup()
{
  Serial2.begin(9600);
  Serial3.begin(57600);
}

void loop()
{
  while (Serial2.available() > 0)
    if (gps.encode(Serial2.read()))
      displayInfo();

  if (millis() > 5000 && gps.charsProcessed() < 10)
  {
    while(true);
  }
}

void displayInfo()
{
  if (gps.location.isValid())
  {
    Serial3.print(gps.location.lat(), 6);
    Serial3.print(",");
    Serial3.println(gps.location.lng(), 6);
    delay(1000);
    
  }
 
  }
