#ifndef SUIT_H
#define SUIT_H

#include <iostream>

enum class Suit
{
	kHeart,
	kClub,
	kSpade,
	kSquare,

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

enum class Hand
{
	kHighCard = 1,
	kPair,
	kTwoPair,
	kThreeOfAKind,
	kStraight,
	kFlush,
	kFullHouse,
	kFourOfAKind,
	kStraightFlush,
};
std::string HandToString(Hand hand);
#endif