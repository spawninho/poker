#include <iostream>
#include "player.h"

int main()
{
	Card card1(Value::kAce, Suit::kHeart);
	Card card2(Value::kFive, Suit::kClub);
	Card card3(Value::kFour, Suit::kHeart);
	Card card4(Value::kSix, Suit::kSpade);

	Player player_one(card1, card2, "Jean");
	Player player_two(card3, card4, "Karl");

	player_one.display();
	std::cout << '\n';
	player_two.display();
	std::cout << '\n';

	/*if (score1_ > score2_)
	{
		std::cout << "Jean wins ! " << '\n';
	}
	else if (score1_ < score2_)
	{
		std::cout << "Karl wins ! " << '\n';
	}
	else (score1_ == score2_);
	{
		std::cout << "Draw ! " << '\n';
	}*/
} 