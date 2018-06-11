// I affirm that all code given below was written solely by me, Mateo Reynoso,
// and that any help I received adhered to the rules stated for this exam.

#include "raceCar.h"

std::string raceCar::description()
{
	std::string temp = "I am a " + getColor() + " race car that can race at " + std::to_string(getTopSpeed()) + "mph.";;
	return temp;
}
