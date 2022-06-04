/*

*/
#ifndef Breath_h
#define Breath_h

#include <Arduino.h>

#define ON true
#define OFF false

class Breath
{
public:
	Breath(int pin);
	void breath(bool value);
private:
	uint8_t pinNumber;
};

#endif
