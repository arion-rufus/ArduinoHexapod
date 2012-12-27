/*
 * Leg.cpp
 *
 *  Created on: Dec 27, 2012
 *      Author: matthijs
 */

#include "Leg.h"

Leg::Leg(int servo1pin, int servo2pin, int servo3pin) {
	servo1.attach(servo1pin);
	servo2.attach(servo2pin);
	servo3.attach(servo3pin);

	neutral();
}

void Leg::setpos(int pos1, int pos2, int pos3) {
	servo1.write(pos1);
	servo2.write(pos2);
	servo3.write(pos3);
}

void Leg::neutral() {
	setpos(90, 90, 90);
}

