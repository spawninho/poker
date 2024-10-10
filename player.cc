#include <iostream>
#include "player.h"


Hand hand;
Card card_1;
Card card_2;

Player::Player(std::string name,Card card_1,Card card_2) :
	player_name_(name), card_1_(card_1), card_2_(card_2)
{
	
}

Card Player::GetCard1()
{
	return card_1_;
}

Card Player::GetCard2()
{
	return card_2_;
}

std::string Player::GetName()
{
	return player_name_;
}

std::string Player::GetPlayerDisplay()
{
	return player_display_;
}

std::string Player::Display()
{
	std::cout << player_name_ << "\n";
	std::cout << card_1_.ToString() << ", ";
	std::cout << card_2_.ToString() << '\n';

	return player_display_;
}

int Player::GetScore()
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
