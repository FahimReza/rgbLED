/*
  RGB.cpp - Library for RGB LED control code.
  Created by Fahim Reza, September 12, 2020.
  Released into the public domain.
*/

#include "Arduino.h" 
#include "RGB.h" 

RGB :: RGB (boolean mode_in, byte led1, byte led2, byte led3) {
    _RED = led1; 
    _GREEN = led2; 
    _BLUE = led3;

    mode = mode_in; 
    if(mode == CA) 
    {
      LEDOn = HIGH;
      LEDOff = LOW;
    }

    else
    {
      LEDOn = LOW;
      LEDOff = HIGH;
    }
}

    void RGB :: begin() {
      pinMode(_RED, OUTPUT); 
      pinMode(_GREEN, OUTPUT); 
      pinMode(_BLUE, OUTPUT); 
    }

    void RGB :: BLACK (void) {
      digitalWrite(_RED, LEDOn);
      digitalWrite(_GREEN, LEDOn);
      digitalWrite(_BLUE, LEDOn);
    }

    void RGB :: WHITE (void) {
      digitalWrite(_RED, LEDOff);
      digitalWrite(_GREEN, LEDOff);
      digitalWrite(_BLUE, LEDOff);
    }

    void RGB :: YELLOW (void) {
      digitalWrite(_RED, LEDOff);
      digitalWrite(_GREEN, LEDOn);
      digitalWrite(_BLUE, LEDOff);
    }

    void RGB :: CYAN (void) {
      digitalWrite(_RED, LEDOn);
      digitalWrite(_GREEN, LEDOff);
      digitalWrite(_BLUE, LEDOff);
    }

    void RGB :: MEGENTA (void) {
      digitalWrite(_RED, LEDOff);
      digitalWrite(_GREEN, LEDOff);
      digitalWrite(_BLUE, LEDOn);
    }

    void RGB :: RED (void) {
      digitalWrite(_RED, LEDOff);
      digitalWrite(_GREEN, LEDOn);
      digitalWrite(_BLUE, LEDOn);
    }

    void RGB :: GREEN (void) {
      digitalWrite(_RED, LEDOn);
      digitalWrite(_GREEN, LEDOff);
      digitalWrite(_BLUE, LEDOn);
    }


    void RGB :: BLUE (void) {
      digitalWrite(_RED, LEDOn);
      digitalWrite(_GREEN, LEDOn);
      digitalWrite(_BLUE, LEDOff);
    }
