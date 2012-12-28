// Do not remove the include below
#include "Hexapod.h"
#include "Leg.h"

Leg *frontLeft;
Leg *frontRight;
Leg *centerLeft;
Leg *centerRight;
Leg *backLeft;
Leg *backRight;

void setup()
{
	//TODO: add proper servo pin numbers.
	frontLeft = new Leg(0, 0, 0, true);
	frontRight = new Leg(0, 0, 0, false);
	centerLeft = new Leg(0, 0, 0, true);
	centerRight = new Leg(0, 0, 0, false);
	backLeft = new Leg(0, 0, 0, true);
	backRight = new Leg(0, 0, 0, false);

	pinMode(13, OUTPUT);

}

void loop()
{
	digitalWrite(13, LOW);
	delay(2000);
	digitalWrite(13, HIGH);
	delay(2000);

}

void neutral(){
	frontLeft->neutral();
	frontRight->neutral();
	centerLeft->neutral();
	centerRight->neutral();
	backLeft->neutral();
	backRight->neutral();
}
