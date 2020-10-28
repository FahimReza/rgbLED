/*
Controlling a RGB-LEDs with different solid color
by Fahim Reza <www.techshopbd.com>

Modified on 12 Sep 2020 
by Fahim Reza 
*/

#include "RGB.h"

RGB led(CA, 3, 5, 7);//Create object of "RGB" with (LED_Type, RED_Pin, GREEN_Pin, BLUE_Pin)
//Use CA = Common Anode Type RGB LEDs 
//Use CC = Common Cathode Type RGB LEDs 

void setup() 
{
  led.begin();
}

void loop() 
{
  led.BLACK();
  delay(1000); 

  led.WHITE();
  delay(1000); 

  led.YELLOW();
  delay(1000); 

  led.CYAN();
  delay(1000); 

  led.MEGENTA();
  delay(1000); 

  led.RED();
  delay(1000); 

  led.GREEN();
  delay(1000); 

  led.BLUE();
  delay(1000); 
}
