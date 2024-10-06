#ifndef CARD_H
#define CARD_H

#include "Suit.h"

class Card
{
public:
	Card(Value v, Suit s) : value_(v), suit_(s)
	{
		
	}
	Value getValue();
	Suit getSuit();
	Card operator + (Card& card);
	bool operator == (Card & other);
	bool operator < (Card & other);
	bool operator > (Card & other);
	std::string ToString();

private:
	Suit suit_;
	Value value_;
};
#endif