#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
#include "card.h"

class Player
{
public:
	Player(Card card_a, Card card_b, std::string name);
	void display();
	int getScore();

private:
	Card card_a_;
	Card card_b_;
	std::string player_name_;
};
#endif