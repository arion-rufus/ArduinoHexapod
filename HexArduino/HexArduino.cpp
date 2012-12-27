// Do not remove the include below
#include "HexArduino.h"
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
	frontLeft = new Leg(0, 0, 0);
	frontRight = new Leg(0, 0, 0);
	centerLeft = new Leg(0, 0, 0);
	centerRight = new Leg(0, 0, 0);
	backLeft = new Leg(0, 0, 0);
	backRight = new Leg(0, 0, 0);

}

void loop()
{


}
