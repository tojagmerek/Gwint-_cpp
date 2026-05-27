#ifndef ENGINE_H
#define ENGINE_H

#include "hand.h"
#include "board.h"

using namespace std;

class Engine {
private:
    Hand hand0;
    Hand hand1;
    Board board;
    int currentPlayer;
    bool passed[2];

    Engine(const Engine& e);
    Engine& operator=(const Engine& e);
public:
    Engine() : hand0(0), hand1(1), currentPlayer(0) {
    passed[0] = false;
    passed[1] = false;

    hand0.addCard(Card(10, "Geralt", 0, 0));
    hand0.addCard(Card(5, "Biedna Piechota", 0, 1));
    hand1.addCard(Card(8, "Genera³ Nacharis", 1, 0));
    hand1.addCard(Card(3, "Piechur Nilfgardu", 1, 2));
    }
};

#endif
