// I affirm that all code given below was written solely by me, Mateo Reynoso,
// and that any help I received adhered to the rules stated for this exam.

#include "vehicle.h"

#ifndef RACECAR_H_
#define RACECAR_H_

class raceCar : public vehicle
{
public:

	// Constructor
	raceCar(std::string color) : vehicle(color)
	{
		_topspeed = 250;
		for (int i = 0; i < 4; i++)
		{
			wheels.push_back(wheel(305));
		}
	}

	// Description
	// Input: none
	// Returns a string with the description of the car
	// Output the string

	std::string description();

};

#endif // !RACECAR_H_