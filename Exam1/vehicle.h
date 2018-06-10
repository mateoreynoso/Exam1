#ifndef VEHICLE_H_
#define VEHICLE_H_
#include <string>
#include <vector>
#include "wheel.h"

class vehicle
{
protected:
	
	std::string _color;
	int _topspeed;
	std::vector<wheel> wheels;

public:

	// Constructor
	// vehicle(std::string color) { this->color = color; }
	vehicle(std::string in_color) { _color = in_color; }

	// Accessor
	std::string getColor() { return _color; }
	int getTopSpeed() { return _topspeed; }

	// Car description
	// Input none
	// Returns the description of the car, depends on the subclass
	// Returns string - on vehicle is virtual
	virtual std::string description() = 0;
};


#endif