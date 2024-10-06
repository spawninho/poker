#include <iostream>
#include "player.h"

Player::Player(Card card_a, Card card_b, std::string name) :
	card_a_(card_a), card_b_(card_b), player_name_(name) {}

void Player::display()
{
	std::cout << player_name_ << " has cards: \n";
	std::cout << card_a_.ToString() << '\n';
	std::cout << "and" << '\n';
	std::cout << card_b_.ToString() << '\n';
	std::cout << "with a score of " << getScore() << '\n';
}
int Player::getScore()
{
	int score = 0;
	switch (card_a_.getValue())
	{
	case Value::kTwo: score += 2;
		break;
	case Value::kThree: score += 3;
		break;
	case Value::kFour: score += 4;
		break;
	case Value::kFive: score += 5;
		break;
	case Value::kSix: score += 6;
		break;
	case Value::kSeven: score += 7;
		break;
	case Value::kEight: score += 8;
		break;
	case Value::kNine: score += 9;
		break;
	case Value::kTen: score += 10;
		break;
	case Value::kJack: score += 11;
		break;
	case Value::kQueen: score += 12;
		break;
	case Value::kKing: score += 13;
		break;
	case Value::kAce: score += 14;
		break;
	}
	switch (card_b_.getValue())
	{
	case Value::kTwo: score += 2;
		break;
	case Value::kThree: score += 3;
		break;
	case Value::kFour: score += 4;
		break;
	case Value::kFive: score += 5;
		break;
	case Value::kSix: score += 6;
		break;
	case Value::kSeven: score += 7;
		break;
	case Value::kEight: score += 8;
		break;
	case Value::kNine: score += 9;
		break;
	case Value::kTen: score += 10;
		break;
	case Value::kJack: score += 11;
		break;
	case Value::kQueen: score += 12;
		break;
	case Value::kKing: score += 13;
		break;
	case Value::kAce: score += 14;
		break;
	}
	return score;
}