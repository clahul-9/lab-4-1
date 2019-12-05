#include "MotorVehicle.h"
#include "Body.h"
#include "engine.h"
#include "owner.h"
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

MotorVehicle::MotorVehicle()
{
	engine motor;
	Body body;
	owner person;
	int numbersOfTiers;
	std::string model;
	float *tierDiameters = new float[numbersOfTiers];
	for (int i = 0; i < numbersOfTiers; i++)
	{
		tierDiameters[i] = rand() % 100;
	}
	
}

void MotorVehicle::print() {
	cout << "Motor:" << motor.print()<<endl;
	cout
}


MotorVehicle::~MotorVehicle()
{
}
