//
// Created by Owner on 2/11/2026.
//
#include "Card.h"
#include <iostream>
using namespace std;


Card::Card(Suit s, Rank r) {
    suit = s;
    rank = r;
}

Card::~Card() {}

Suit Card::getSuit() {
    return suit;
}

Rank Card::getRank() {
    return rank;
}

void Card::display() {
    if (rank == Rank::Ace) cout << "A";
    else if (rank == Rank::Two) cout << "2";
    else if (rank == Rank::Three) cout << "3";
    else if (rank == Rank::Four) cout << "4";
    else if (rank == Rank::Five) cout << "5";
    else if (rank == Rank::Six) cout << "6";
    else if (rank == Rank::Seven) cout << "7";
    else if (rank == Rank::Eight) cout << "8";
    else if (rank == Rank::Nine) cout << "9";
    else if (rank == Rank::Ten) cout << "10";
    else if (rank == Rank::Jack) cout << "J";
    else if (rank == Rank::Queen) cout << "Q";
    else if (rank == Rank::King) cout << "K";

    if (suit == Suit::Spades) cout << "S ";
    else if (suit == Suit::Clubs) cout << "C ";
    else if (suit == Suit::Diamonds) cout << "D ";
    else if (suit == Suit::Hearts) cout << "H ";
}




