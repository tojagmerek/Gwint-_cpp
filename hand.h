#ifndef HAND_H
#define HAND_H

#include <string>
#include <vector>
#include "card.h"

using namespace std;

class Hand {
private:
    vector<Card> cards;
    int owner;
public:
    Hand(int owner);

    void addCard(const Card& c) {
        cards.push_back(c);
    }

    Card playCard(int i) {
        Card c = cards[i];
        cards.erase(cards.begin() + i);
        return c;
    }

    int getSize() const {
        return cards.size();
    }

    Card getCard(int i) const {
        Card c = cards[i];
        return c;
    }
};

#endif

