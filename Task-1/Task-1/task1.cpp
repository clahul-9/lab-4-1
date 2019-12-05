#include<iostream>
#include<stdio.h>
#include"Body.h"
#include"engine.h"
#include"owner.h"
#include"MotorVehicle.h"

using namespace std;

int main() {
//varianla
	//owner
	string nameIn;
	string addreIn;
	bool allowedToDrive;
	//engine
	float sizeInLitersIn;
	int numberOfCylindersIn;
	//body
	string colorIn;
	float widthIn, heightIn;
	//motorVehicle
	engine motorIn;
	Body bodyIn;
	owner personIn;
	int numbersOfTiersIn;
	string modelIn;

//asking for information
	//owner
	printf( "some question redarding the owner: \n name, addres, Abel yo drive(true/false): ");
	scanf_s("%s, %s, %b", nameIn, addreIn, allowedToDrive);
	owner personIn(nameIn, addreIn, allowedToDrive);
	
}