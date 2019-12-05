#pragma once
class owner
{
public:
	std::string name;
	std::string addres;
	bool allowedToDrive;
	owner(std::string nameIn,std::string addresIn,bool allowedToDriveIn);
	void print();
	~owner();
};

