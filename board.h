#ifndef BOARD_H
#define BOARD_H

#include <string>
#include <vector>
#include "card.h"

using namespace std;

class Board {
private:
    vector<Card> rows[2][3];
public:
    Board();

    void placeCard(Card c, int player) {
        rows[player][c.getRow()].push_back(c);
    }

    int getScore(int player) const {
        int sum=0;
        for(int i=0; i<3; i++) {
            for(int j=0; j<rows[player][i].size();j++) {
                sum += rows[player][i][j].getValue();
            }
        }
        return sum;
    }

    int getRowSize(int player, int row) const {
        return rows[player][row].size();
    }

    void Clear() {
        for(int i=0; i<2; i++) {
            for(int j=0; j<3;j++) {
                rows[i][j].clear();
            }
        }
    }
};

#endif
