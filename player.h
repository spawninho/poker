#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"
#include<iostream>

class Player
{
public:

	Player() = default;
	Player(std::string name,Card card1_,Card card2_);

	Card GetCard1();
	Card GetCard2();

	std::string GetName();
	std::string GetPlayerDisplay();
	std::string Display();

	int GetScore();

private:

	Hand hand_;
	Card card_1_;
	Card card_2_;
	std::string player_name_;
	std::string player_display_;
};
#endif