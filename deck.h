#ifndef DECK_H
#define DECK_H

#include <vector>
#include "card.h"


class Deck
{
public:

	Deck();

	void Shuffle();

	Card draw_a_card();
	void GiveCardToRiver();
	void DisplayRiver();
	void DisplayAllDeck();

private:

	std::vector<Card> deck_;
	std::vector<Card> river_;
};
#endif // DECK_H