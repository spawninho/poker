#include "suit.h"


std::string SuitToString(Suit suit)
{
	switch (suit)
	{
	case Suit::kClub: return "Club";
	case Suit::kHeart: return "Heart";
	case Suit::kSquare: return "Square";
	case Suit::kSpade: return "Spade";
	}
}

std::string ValueToString(Value value)
{
	switch (value)
	{
	case Value::kTwo: return "2";
	case Value::kThree: return "3";
	case Value::kFour: return "4";
	case Value::kFive: return "5";
	case Value::kSix: return "6";
	case Value::kSeven: return "7";
	case Value::kEight: return "8";
	case Value::kNine: return "9";
	case Value::kTen: return "10";
	case Value::kJack: return "Jack";
	case Value::kQueen: return "Queen";
	case Value::kKing: return "King";
	case Value::kAce: return "Ace";
	}
}