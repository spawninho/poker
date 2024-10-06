#ifndef SUIT_H
#define SUIT_H

#include <iostream>


enum class Suit
{
	kClub,
	kHeart,
	kSquare,
	kSpade,
};
std::string SuitToString(Suit suit);


enum class Value
{
	kTwo = 2,
	kThree,
	kFour,
	kFive,
	kSix,
	kSeven,
	kEight,
	kNine,
	kTen,
	kJack,
	kQueen,
	kKing,
	kAce,
};
std::string ValueToString(Value value);

#endif