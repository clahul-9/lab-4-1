#pragma once
#include <string>
class Body
{
	std::string color;
	float width, height;
public:
	Body(std::string color,float whidth,float height);
	void print();
	~Body();
};

