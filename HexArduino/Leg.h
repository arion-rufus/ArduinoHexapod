/*
 * Leg.h
 *
 *  Created on: Dec 26, 2012
 *      Author: matthijs
 */

#ifndef LEG_H_
#define LEG_H_
#include "Arduino.h"
#include "Servo.h"

class Leg {

private:
	Servo servo1;
	Servo servo2;
	Servo servo3;

public:
	//constructor
	Leg(int servo1pin, int servo2pin, int servo3pin);

	void setpos(int pos1, int pos2, int pos3);

	void neutral();
};




#endif /* LEG_H_ */
