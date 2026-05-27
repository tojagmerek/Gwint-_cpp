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

    Hand(const Hand& h);
    Hand& operator=(const Hand& h);
public:
    Hand(int owner);

    void addCard(Card c) {
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

#endiftak

