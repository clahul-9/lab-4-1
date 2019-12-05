#include "engine.h"
#include <iostream>

using namespace std;
engine::engine(float sizeInLitersIn, int numberOfCylindersIn)
{
	float sizeInLiters = sizeInLiters;
	int numberOfCylinders=numberOfCylinders;
}
void engine::print() {
	cout << "size In Liters" << sizeInLiters << "\nnumber Of Cylinders" << numberOfCylinders << endl;
}
engine::~engine()
{
}
