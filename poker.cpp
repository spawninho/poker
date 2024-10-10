#include <iostream>

#include "player.h"
#include "deck.h"


int main()
{
	Deck deck;

	deck.Shuffle();

	Player player1("Karl\n", deck.draw_a_card(), deck.draw_a_card());
	Player player2("Jean\n", deck.draw_a_card(), deck.draw_a_card());

	deck.draw_a_card();

	deck.DisplayAllDeck();// ne pas garder

	std::cout << '\n';// ne pas garder

	player1.Display();

	std::cout << '\n';

	player2.Display();

	std::cout << '\n';

	deck.GiveCardToRiver();

	std::cout << "River has: \n";

	deck.DisplayRiver();

	std::cout << '\n';

	deck.GiveCardToRiver();

	std::cout << "River has: \n";

	deck.DisplayRiver();

}