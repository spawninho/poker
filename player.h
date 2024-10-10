#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"
#include<iostream>


class Player
{
public:

	Player() = default;
	Player(std::string name, Card card1, Card card2);

	Card getCard1();

	Card getCard2();

	std::string display();

	int getScore();
	
	std::string getName();

private:
	std::string player_name_;
	Hand hand_;
	Card card1_;
	Card card2_;
};
#endif