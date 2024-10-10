#include <iostream>
#include "player.h"


Hand hand_;
Card card_1_;
Card card_2_;

Player::Player(std::string name,Card card_1_,Card card_2_) :
	player_name_(name), card_1_(card_1_), card_2_(card_2_)
{
	
}

Card Player::getCard1()
{
	return card_1_;
}
Card Player::getCard2()
{
	return card_2_;
}
std::string Player::getName()
{
	return player_name_;
}
std::string Player::getPlayerDisplay()
{
	return player_display_;
}

std::string Player::display()
{
	std::cout << player_name_ << "\n";
	std::cout << card_1_.ToString() << ", ";
	std::cout << card_2_.ToString() << '\n';

	return player_display_;
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
