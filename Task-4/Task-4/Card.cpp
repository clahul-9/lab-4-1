#include "Card.h"
#include<string>
#include<iostream>

using namespace std;

Card::Card() {
	rank = "joker";
	suit = "joker";
}
Card::Card(string rankIn, string suitIn)
{
	rank = rankIn;
	suit = suitIn;
}
void Card::print() {
	cout << rank << " of " << suit << endl;
}

Card::~Card()
{
}
