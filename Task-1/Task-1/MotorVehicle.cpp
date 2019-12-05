#include "MotorVehicle.h"
#include "Body.h"
#include "engine.h"
#include "owner.h"
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

MotorVehicle::MotorVehicle(engine motorIn, Body bodyIn, owner personIn, int numbersOfTiersIn, string modelIn)
{
	engine motor=motorIn;
	Body body=bodyIn;
	owner person=personIn;
	int numbersOfTiers=numbersOfTiersIn;
	std::string model=modelIn;
	float *tierDiameters = new float[numbersOfTiers];
	for (int i = 0; i < numbersOfTiers; i++)
	{
		tierDiameters[i] = rand() % 100;
	}
	
}

void MotorVehicle::print() {
	cout << "Motor:";
	motor.print();
	cout << "Body:";
	body.print();
	cout << "Owner:";
	person.print();
	cout << "model:" << model << endl;
	for (int i = 0; i < numbersOfTiers; i++)
	{
		cout << "tier " << i + 1 << ":" << tierDiameters[i];
	}
}


MotorVehicle::~MotorVehicle()
{
}
