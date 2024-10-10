#include <iostream>
#include "player.h"

Hand hand_;
Card card1_;
Card card2_;

Player::Player(std::string name,Card card1,Card card2) :
	player_name_(name)
{
	
}

Card Player::getCard1()
{
	return card1_;
}

Card Player::getCard2()
{
	return card2_;
}

std::string Player::display()
{
	std::cout << player_name_ << "\n";
	std::cout << " " << card1_.ToString();
	std::cout << " " << card2_.ToString();
	return display();
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
