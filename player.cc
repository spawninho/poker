#include <iostream>
#include "player.h"


Hand hand_;


Player::Player(std::string name) :
	player_name_(name)
{
	
}

std::string Player::display()
{
	std::cout << player_name_ << "\n";
	return player_name_;
}

int Player::getScore()
{
	int score = 0;
	switch (Hand(hand_))
	{
	case Hand::kHighCard: score += 1;
		break;
	case Hand::kPair: score += 2;
		break;
	case Hand::kTwoPair: score += 3;
		break;
	case Hand::kThreeOfAKind: score += 4;
		break;
	case Hand::kStraight: score += 5;
		break;
	case Hand::kFlush: score += 6;
		break;
	case Hand::kFullHouse: score += 6;
		break;
	case Hand::kFourOfAKind: score += 7;
		break;
	case Hand::kStraightFlush: score += 8;
		break;
	}
	return score;
}

std::string Player::getName()
{
	return player_name_;
}
