#include "owner.h"
#include <string>
#include <iostream>

using namespace std;
owner::owner(string namnIn, string addresIn, bool allowedToDriveIn)
{
	string name=namnIn;
	string addres=addresIn;
	bool allowedToDrive=allowedToDriveIn;
}

void owner::print() {
	cout << "name: " << name << "\naddres" << addres << "\nallowed To Drive" << allowedToDrive << endl;
}
owner::~owner()
{
}
