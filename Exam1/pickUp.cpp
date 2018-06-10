#include "pickUp.h"

std::string pickUp::description()
{
	std::string temp = "I am a " + getColor() + " pick up that can haul " + std::to_string(getCapacity()) + " sq. feet at " + std::to_string(getTopSpeed()) + "mph.";
	return temp;
}
