#ifndef CARD_H
#define CARD_H
#include "enum.h"

class Card
{
public:
	Card() = default;
	Card(Value v, Suit s) : value_(v), suit_(s) {}
	Value GetValue();
	Suit GetSuit();
	bool operator == (Card & other);
	bool operator < (Card & other);
	bool operator > (Card & other);
	std::string ToString() const;
	
private:
	Value value_;
	Suit suit_;
};
#endif