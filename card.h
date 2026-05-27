#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card {
private:
    int value;
    string name;
    int owner;
    int row;
public:
    Card(int value, string name, int owner, int row);

    int getValue() const{
        return value;
    };

    string getName() const{
        return name;
    };

    int getOwner() const{
        return owner;
    };

    int getRow() const {
        return row;
    };
};

#endif
