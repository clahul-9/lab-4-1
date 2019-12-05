#include "Body.h"
#include <string>
#include <iostream>
using namespace std;

Body::Body(string colorIn,float whidthIn,float heightIn)
{
	string color=colorIn;
	float width=whidthIn, height=heightIn;
}

void Body::print() {
	cout << "color:" << color << "\nwhidth:" << width << "\nheight" << height << endl;
}
Body::~Body()
{
}
