#include "Body.h"
#include <string>
#include <iostream>
using namespace std;

Body::Body()
{
	std::string color;
	float width, height;
}

void Body::print() {
	cout << "collor:" << color << "\nwhidth:" << width << "\nheight" << height << endl;
}
Body::~Body()
{
}
