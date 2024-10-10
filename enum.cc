#include "enum.h"


std::string SuitToString(Suit suit)
{
	switch (suit)
	{
	case Suit::kHeart: return "Club";
	case Suit::kClub: return "Heart";
	case Suit::kSpade: return "Square";
	case Suit::kSquare: return "Spade";
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

std::string HandToString(Hand hand)
{

	switch (hand)
	{
	case Hand::kHighCard: return "High Card";
	case Hand::kPair: return "Pair";
	case Hand::kTwoPair: return "Two Pair";
	case Hand::kThreeOfAKind: return "Three of a Kind";
	case Hand::kStraight: return "Straight";
	case Hand::kFlush: return "Flush";
	case Hand::kFullHouse: return "Full House";
	case Hand::kFourOfAKind: return "Four of a Kind";
	case Hand::kStraightFlush: return "Straight Flush";
	}
}
