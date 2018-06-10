#include "raceCar.h"

std::string raceCar::description()
{
	std::string temp = "I am a " + getColor() + " race car that can race at " + std::to_string(getTopSpeed()) + "mph.";;
	return temp;
}
