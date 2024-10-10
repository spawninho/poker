#ifndef DECK_H
#define DECK_H

#include <vector>
#include "card.h"

class Deck
{
public:

	std::vector<Card> deck_;

	Deck();

	void shuffle();

	Card draw_a_card();

	void DisplayAllDeck();
};
#endif // DECK_H