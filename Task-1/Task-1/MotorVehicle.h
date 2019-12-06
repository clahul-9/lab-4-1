#pragma once
#include "Body.h"
#include "engine.h"
#include "owner.h"
#include <string>
class MotorVehicle
{
	engine motor;
	Body body;
	owner person;
	int numbersOfTiers;
	std::string model;
	float *tierDiameters = new float[numbersOfTiers];
public:
	MotorVehicle(engine motorIn, Body bodyIn, owner personIn, int numbersOfTiersIn, std::string modelIn);
	void print();
	virtual ~MotorVehicle();
};

