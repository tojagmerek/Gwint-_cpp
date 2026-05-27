#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card {
private:
    int value;
    string name;
    int owner;

    Card(const Card& c);
    Card& operator=(const Card& c);
public:
    Card(int value, string name, int owner);

    int getValue() const{
        return value;
    };

    string getName() const{
        return name;
    };

    int getOwner() const{
        return owner;
    };
};

#endif
