// I affirm that all code given below was written solely by me, Mateo Reynoso,
// and that any help I received adhered to the rules stated for this exam.

#include "sedan.h"

std::string sedan::description()
{
	std::string temp = "I am a " + getColor() +" sedan that can carry " + std::to_string(getSeats()) + " people at " + std::to_string(getTopSpeed()) + "mph.";
	return temp;
}
