#include "owner.h"
#include <string>
#include <iostream>

using namespace std;
owner::owner()
{
	std::string name;
	std::string addres;
	bool allowedToDrive;
}

void owner::print() {
	cout << "name: " << name << "\naddres" << addres << "\nallowed To Drive" << allowedToDrive << endl;
}
owner::~owner()
{
}
