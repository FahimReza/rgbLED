# rgbLED
Allows Arduino boards to control of both the CA and CC type RGB-LEDs with different Solid-Color. 

# Releases 
* V.1.0 (latest, 05-Jan-23)
* V.0.0 (Initial Release, 12-Sept-20) 

# Usage 
To use this library <br/> 
``` c++
#include <rgbLED.h> 
```

# Circuit 
RGB-LEDs have three pins: Red, Common, Green, and Blue. This <u>Common</u> pin may either <u>Common Anode (CA)</u> or <u>Common Cathode (CC)</u>. 

If the RGB-LEDs is typed CA, the <u>Common</u> pin should be connected to the 5V pin on the Arduino board. 

If the RGB-LEDs is typed CC, the <u>Common</u> pin should be connected to the ground pin on the Arduino board. 

Note that if the RGB-LEDs draw more than 40mA, you'll probably need to power them from a separate supply (i.e. not the 5V pin on your Arduino). Don't forget to connect the grounds of the Arduino and external power supply together.

# Example 
* rgbLEDTest: Controlling a RGB-LEDs with different Solid-Color  

# Methods
* begin() 
* black() 
* white() 
* red() 
* green() 
* blue() 
* yellow() 
* cyan() 
* megenta() 
