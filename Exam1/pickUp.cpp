// I affirm that all code given below was written solely by me, Mateo Reynoso,
// and that any help I received adhered to the rules stated for this exam.

#include "pickUp.h"

std::string pickUp::description()
{
	std::string temp = "I am a " + getColor() + " pick up that can haul " + std::to_string(getCapacity()) + " sq. feet at " + std::to_string(getTopSpeed()) + "mph.";
	return temp;
}
