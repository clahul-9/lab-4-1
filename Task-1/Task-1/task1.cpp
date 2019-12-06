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
	string nameIn="";
	string addreIn="";
	bool allowedToDrive=false;
	//engine
	float sizeInLitersIn=0;
	int numberOfCylindersIn=0;
	//body
	string colorIn="";
	float widthIn=0, heightIn=0;
	//motorVehicle
	//engine motorIn();
	//Body bodyIn;
	//owner personIn;
	int numbersOfTiersIn=0;
	string modelIn="";

//asking for information
	//owner
	printf("some question redarding the owner: \n name, addres, Abel yo drive(true/false): ");
	scanf_s("%s, %s, %b", nameIn, addreIn, allowedToDrive);
	owner personIn(nameIn, addreIn, allowedToDrive);
	//body
	printf("some question regarding the body of the vehicale: \n color, width, height:");
	scanf_s("%s, %f, %f", colorIn, widthIn, heightIn);
	Body bodyIn(colorIn, widthIn, heightIn);
	//engine
	printf("some questions regarding the engine: \n size in liters, numbers of cylinders:");
	scanf_s("%f, %i", sizeInLitersIn, numberOfCylindersIn);
	engine motorIn(sizeInLitersIn, numberOfCylindersIn);
	//motorVehicle
	printf("And the last of the questions: \n numbers of tiers, model:");
	scanf_s("%i, %s");
	MotorVehicle vehicle(motorIn, bodyIn, personIn, numbersOfTiersIn, modelIn);

	vehicle.print();
	
	cout << endl << endl;
	system("pause");
}