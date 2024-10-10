#include <iostream>

#include "player.h"
#include "deck.h"

int main()
{
	Deck deck;
	Player player1("Karl\n",deck.draw_a_card(), deck.draw_a_card());
	Player player2("Jean\n",deck.draw_a_card(),deck.draw_a_card());

	player1.display();
	player2.display();
	
	deck.shuffle();
	deck.DisplayAllDeck();
	deck.draw_a_card();
}