/*Controlling a RGB-LEDs with different Solid-Color by Fahim Reza.*/

#include <rgbLED.h>

rgbLED led; //Create Object 

//Use CA = Common Anode Type RGB-LEDs 
//Use CC = Common Cathode Type RGB-LEDs 

void setup() 
{
  led.begin(CC, 11, 12, 13); //Begin with  (LED_Type, redLED_Pin, greenLED_Pin, blueLED_Pin) 
}

void loop() 
{
  led.black();
  delay(1000); 

  led.white();
  delay(1000); 
  
  led.red();
  delay(1000); 

  led.green();
  delay(1000); 

  led.blue();
  delay(1000); 

  led.yellow();
  delay(1000); 

  led.cyan();
  delay(1000); 

  led.megenta();
  delay(1000); 
}
