#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"
#include<iostream>

class Player
{
public:

	Player() = default;
	Player(std::string name);
	std::string display();
	int getScore();
	std::string getName();

private:
	std::string player_name_;
	Hand hand_;
};
#endif