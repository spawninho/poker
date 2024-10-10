#include "card.h"


Value value;
Suit suit;

Value Card::GetValue()
{
	return value_;
}

Suit Card::GetSuit()
{
	return suit_;
}

bool Card::operator == (Card& other)
{
	return (this->value_ == other.value_ && this ->suit_ == other.suit_);
}

bool Card::operator < (Card& other)
{
	return (this->value_ < other.value_);
}

bool Card::operator > (Card& other)
{
	return (this->value_ > other.value_);
}

std::string Card::ToString() const
{
	return ValueToString(value_) + " of " + SuitToString(suit_);
}