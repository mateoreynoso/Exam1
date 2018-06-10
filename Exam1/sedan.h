#ifndef SEDAN_H_
#define SEDAN_H_
#include "vehicle.h"

class sedan : public vehicle
{
private:

	int number_of_seats;

public:

	// Constructor
	sedan(std::string color, int number_of_seats) : vehicle(color) 
	{ this->number_of_seats = number_of_seats;
	_topspeed = 95; 
	for (int i = 0; i < 4; i++) 
		{ wheels.push_back (wheel(381)); } }
	
	// Accessor
	int getSeats() { return number_of_seats; }

	// Description
	// Input: none
	// Returns a string with the description of the car
	// Output the string

	std::string description();
};

#endif // !SEDAN_H_