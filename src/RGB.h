
#ifndef RGB_h
#define RGB_h 
#include "Arduino.h" 

#define CC 0
#define CA 1

class RGB {
  private: 
    byte _RED; 
    byte _GREEN; 
    byte _BLUE; 

  public:
    RGB (boolean mode, byte led1, byte led2, byte led3);
    void begin();
    void BLACK (void);
    void WHITE (void);
    void YELLOW (void);
    void CYAN (void);
    void MEGENTA (void);
    void RED (void);
    void GREEN (void);
    void BLUE (void);

    boolean mode, LEDOn, LEDOff;
  
};

#endif 


