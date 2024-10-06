#include "card.h"


Suit suit_;
Value value_;

Value Card::getValue()
{
	return value_;
}

Suit Card::getSuit()
{
	return suit_;
}

bool Card::operator == (Card& other)
{
	return (this->suit_ == other.suit_ && this -> value_ == other.value_);
}

bool Card::operator < (Card& other)
{
	return (this->value_ < other.value_);
}

bool Card::operator > (Card& other)
{
	return (this->value_ > other.value_);
}

std::string Card::ToString()
{
	return ValueToString(value_) + " of " + SuitToString(suit_);
}