
#ifndef rgbLED_h
#define rgbLED_h 
#include "Arduino.h" 

#define CC 0
#define CA 1

class rgbLED 
{
  public:
	rgbLED(void);
	~rgbLED(void);
	
	void begin(boolean, uint8_t, uint8_t, uint8_t);
	
    void black (void);
	void white (void);
	
	void red (void);
    void green (void);
    void blue (void);
	
    void yellow (void);
    void cyan (void);
    void megenta (void);
	
	
  private:
	uint8_t _redLED; 
    uint8_t _greenLED; 
    uint8_t _blueLED; 
	
	boolean mode, LEDOn, LEDOff;
	
	boolean ioState;
	
	
  protected:
	
};

#endif //rgbLED_h


