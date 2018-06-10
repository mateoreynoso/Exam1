#include "sedan.h"

std::string sedan::description()
{
	std::string temp = "I am a " + getColor() +" sedan that can carry " + std::to_string(getSeats()) + " people at " + std::to_string(getTopSpeed()) + "mph.";
	return temp;
}
