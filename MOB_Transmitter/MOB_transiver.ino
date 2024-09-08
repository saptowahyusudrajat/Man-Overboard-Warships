#include <TinyGPS++.h>
static const uint32_t GPSBaud = 9600;

TinyGPSPlus gps;
void setup()
{
  Serial3.begin(9600);
  Serial.begin(9600);
  Serial2.begin(57600);
}
String datakorban;

void loop()
{
  
  
   while(Serial2.available()){    
     
    datakorban = Serial2.read();  
    Serial.print(datakorban); 
    }
    
    
  
  if(Serial3.available() > 0){
    if (gps.encode(Serial3.read())){
    Serial.print(gps.location.lat(), 6);
    Serial.print(",");
    Serial.println(gps.location.lng(), 6);
     
   
    }
//  }
//  }

//  if (millis() > 5000 && gps.charsProcessed() < 10)
//  {
//    while(true);
//  }
}
}

 
  
