#pragma once
#include"Card.h"
#include<string>

class CardDeck
{
	Card deck[55];
	std::string suit[4] = { "clubs", "dimonds", "hearts", "spades"};
	std::string rank[13] = {"2","3","4","5","6","7","8","9","10","Jack","Queen","King","Ace"};
public:
	CardDeck();
	void print();
	~CardDeck();
};

