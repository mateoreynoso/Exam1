// I affirm that all code given below was written solely by me, Mateo Reynoso,
// and that any help I received adhered to the rules stated for this exam.

#include "vehicle.h"
#ifndef PICKUP_H_
#define PICKUP_H_

class pickUp : public vehicle
{
private:
	
	int hauling_capacity;

public:

	// Constructor
	pickUp(std::string color, int hauling_capacity) : vehicle(color)
	{
		this->hauling_capacity = hauling_capacity;
		_topspeed = 85;
		for (int i = 0; i < 4; i++)
		{
			wheels.push_back(wheel(432));
		}
	}

	// Accessor
	int getCapacity() { return hauling_capacity; }

	// Description
	// Input: none
	// Returns a string with the description of the car
	// Output the string

	std::string description();

};
#endif // !PICKUP_H_
