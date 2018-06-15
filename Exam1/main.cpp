//////////////////////////
// Mateo Reynoso		//
// Data Structures		//
// 2018-06-10			//
//////////////////////////

// I affirm that all code given below was written solely by me, Mateo Reynoso,
// and that any help I received adhered to the rules stated for this exam.

//PT -- Excellent work!
//  100/100

#include <iostream>
#include "vehicle.h"
#include "raceCar.h"
#include "sedan.h"
#include "pickUp.h"
using namespace std;

int main()
{
	vehicle * Garage[3];

	Garage[0] = new raceCar("black");
	Garage[1] = new sedan("blue", 5);
	Garage[2] = new pickUp("red", 500);

	for (int i = 0; i < 3; ++i)
	{
		cout << Garage[i]->description() << endl;
	}
	system("pause");
	return 0;
}
