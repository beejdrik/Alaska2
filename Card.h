//
// Created by Owner on 2/10/2026.
//
#pragma once

enum class Suit {
    Spades,         //"Spades" represents the number 0...
    Clubs,          //1
    Diamonds,       //2
    Hearts,         //3
};

enum class Rank {  // Same system functioning here^
    Ace = 1, Two = 2, Three = 3, Four = 4, Five = 5,
    Six = 6, Seven = 7, Eight = 8, Nine = 9,
    Ten = 10, Jack = 11, Queen = 12, King = 13
};

class Card {
private:
Suit suit;
Rank rank;

public:
    Card();
    Card(Suit s, Rank r);
    ~Card();

    Suit getSuit();
    Rank getRank();
    void Display();

};
