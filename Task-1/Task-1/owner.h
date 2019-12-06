#pragma once
#include<string>
class owner
{
	std::string name;
	std::string addres;
	bool allowedToDrive;
public:
	owner(std::string nameIn,std::string addresIn,bool allowedToDriveIn);
	void print();
	~owner();
};

