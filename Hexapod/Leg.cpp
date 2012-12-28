/*
 * Leg.cpp
 *
 *  Created on: Dec 27, 2012
 *      Author: matthijs
 */

#include "Leg.h"


static const int SERVO1_NEUTRAL = 90;
static const int SERVO2_NEUTRAL = 90;
static const int SERVO3_NEUTRAL = 90;

Leg::Leg(int servo1pin, int servo2pin, int servo3pin, bool isLeft) {
	servo1.attach(servo1pin);
	servo2.attach(servo2pin);
	servo3.attach(servo3pin);

	this->isLeft = isLeft;

	neutral();
}

void Leg::setpos(int pos1, int pos2, int pos3) {
	servo1.write(pos1);
	servo2.write(pos2);
	servo3.write(pos3);

}

void Leg::neutral() {
	setpos(SERVO1_NEUTRAL, SERVO2_NEUTRAL, SERVO3_NEUTRAL);
}

