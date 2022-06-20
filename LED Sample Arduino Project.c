// Make an LED light On/Off
#include <arduino.h>

int led = 3;
int button = 4;

void setup(){
//Set the LED pin to Output mode.
pinMode(3, OUTPUT);
//Set the Button pin to Input mode.
pinMode(7, INPUT);
 }

void loop(){
//Write pin 3 to HIGH mode, giving the pin 5 volts If button is pressed the led should light.
if(button==1)
 {
  digitalWrite(3, HIGH);
  Serial.Println("LED is switched On")
//Pause for a second
  delay(1000);
}
//Write pin 3 to LOW mode, giving the pin 0 volts when the button is released.
if(button==0)
  {
digitalWrite(3, LOW);
Serial.Println("LED is switched Off")
  }
//Pause for another second
  delay(1000);
}
int main(){
 setup();

while(1) {
 loop();
  }
return 0;
}