#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"
#include<iostream>

class Player
{
public:

	Player() = default;

	Player(std::string name,Card card1_,Card card2_);

	Card getCard1();
	Card getCard2();
	std::string getName();
	std::string getPlayerDisplay();

	std::string display();

	int getScore();

	

private:
	std::string player_name_;
	Hand hand_;
	Card card_1_;
	Card card_2_;
	std::string player_display_;
};
#endif