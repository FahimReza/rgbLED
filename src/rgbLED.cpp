
#include "rgbLED.h" 

rgbLED::rgbLED(void)
{
	ioState = false;
}

rgbLED::~rgbLED(void)
{
	if(ioState)
	{
		digitalWrite(_redLED, LOW);
		digitalWrite(_greenLED, LOW);
		digitalWrite(_blueLED, LOW);
	}
}

void rgbLED::begin(boolean mode_in, byte redLED, byte greenLED, byte blueLED) 
{
	_redLED = redLED; 
	_greenLED = greenLED; 
	_blueLED = blueLED;

	mode = mode_in; 
	
	if(mode == CC) 
	{
		LEDOn = HIGH;
		LEDOff = LOW;
	}
	
	else
	{
		LEDOn = LOW;
		LEDOff = HIGH;
	}
	
	pinMode(_redLED, OUTPUT); 
	pinMode(_greenLED, OUTPUT); 
	pinMode(_blueLED, OUTPUT);

	ioState = true;
}

void rgbLED::black (void) 
{
	digitalWrite(_redLED, LEDOff);
	digitalWrite(_greenLED, LEDOff);
	digitalWrite(_blueLED, LEDOff);
}

void rgbLED::white (void) 
{
	digitalWrite(_redLED, LEDOn);
	digitalWrite(_greenLED, LEDOn);
	digitalWrite(_blueLED, LEDOn);
}

void rgbLED::red (void) 
{
	digitalWrite(_redLED, LEDOn);
	digitalWrite(_greenLED, LEDOff);
	digitalWrite(_blueLED, LEDOff);
}

void rgbLED::green (void) 
{
	digitalWrite(_redLED, LEDOff);
	digitalWrite(_greenLED, LEDOn);
	digitalWrite(_blueLED, LEDOff);
}


void rgbLED::blue (void) 
{
	digitalWrite(_redLED, LEDOff);
	digitalWrite(_greenLED, LEDOff);
	digitalWrite(_blueLED, LEDOn);
}

void rgbLED::yellow (void) 
{
	digitalWrite(_redLED, LEDOn);
	digitalWrite(_greenLED, LEDOff);
	digitalWrite(_blueLED, LEDOn);
}

void rgbLED::cyan (void) 
{
	digitalWrite(_redLED, LEDOff);
	digitalWrite(_greenLED, LEDOn);
	digitalWrite(_blueLED, LEDOn);
}

void rgbLED::megenta (void) 
{
	digitalWrite(_redLED, LEDOn);
	digitalWrite(_greenLED, LEDOn);
	digitalWrite(_blueLED, LEDOff);
}


