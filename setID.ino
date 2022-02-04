#include <DynamixelSerial.h>

#define MAP(x) (int)map(x,0,300,0,1023)
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Dynamixel.begin(1000000,PB6); //USAPT 1Mbps dan pin 2 data
Dynamixel.setID(254,3);
}

void loop() {
  Dynamixel.moveSpeed(3,MAP(150),600);
  delay(100);
  Dynamixel.moveSpeed(3,MAP(243),600);
  delay(1000);
} 
