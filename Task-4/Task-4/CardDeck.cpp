#include "CardDeck.h"
#include<iostream>


CardDeck::CardDeck()
{
	int amountOfCards=0;
	for (auto e:suit)
	{
		for (auto f:rank)
		{
			Card d(f, e);
			deck[amountOfCards] = d;
			amountOfCards++;
		}
	}
	while (amountOfCards<55)
	{
		std::cout << "joker: ";
		Card d("joker", "joker");
		deck[amountOfCards] = d;
		amountOfCards++;
	}
}
void CardDeck::print() {
	for (Card e:deck){e.print();}
}


CardDeck::~CardDeck()
{
}
