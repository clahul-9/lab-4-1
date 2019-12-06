#pragma once
#include <string>
class Card
{
	std::string rank;
	std::string suit;
public:
	Card();
	Card(std::string rank,std::string suit);
	void print();
	~Card();
};

