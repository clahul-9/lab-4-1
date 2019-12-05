#pragma once
class MotorVehicle
{
	engine motor;
	Body body;
	owner person;
	int numbersOfTiers;
	std::string model;
	float *tierDiameters = new float[numbersOfTiers];
public:
	MotorVehicle(engine motor,Body body,owner person,int numbersOfTiers,string model);
	void print();
	virtual ~MotorVehicle();
};

