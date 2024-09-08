#include <TinyGPS++.h>
static const uint32_t GPSBaud=9600;
TinyGPSPlus gps;
void setup() {
Serial3.begin(9600); //GPS
Serial.begin(9600); //Serial PC
Serial2.begin(57600); //GPS dari korban
}

void loop(){

//while(Serial.available()>0){
//  char inc = char(Serial2.read());
//  
//    Serial2.print(char(Serial.read()));
//}




  
  if(Serial2.available()>0){    
   //Serial.print(char(Serial2.read()));
   

while(Serial3.available()>0){
  if(gps.encode(Serial3.read()));
  Serial.print("hello ada data");
  displayInfo();
  }
   
   }   
   if(millis()>5000 && gps.charsProcessed()<10){
  while(true);
  } 
}

void displayInfo(){
  
  }
  
