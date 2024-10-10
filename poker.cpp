#include <iostream>

#include "player.h"
#include "deck.h"

int main()
{
	Deck deck;
	Player player1("Karl\n");
	Player player2("Jean\n");

	player1.display();
	player2.display();
	
	deck.shuffle();
	deck.DisplayAllDeck();
	deck.draw_a_card();
}