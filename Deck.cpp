//
// Created by Owner on 2/11/2026.
//

#include "Deck.h"
#include <iostream>
#include <ostream>

Deck::Deck() {
    int i = 0;
    for (int s = 1; s <= 4; s++) {
        for (int r = 1; r <= 13; r++) {
            deckOfCards[i] = Card(static_cast<Suit>(s), static_cast<Rank>(r));  //Tells program to treat
            i++;                                                                    //s and r as types of suit and rank
        }
    }
    top = 51;
}

Deck::~Deck() = default;


void Deck::print() const {
    std::cout << "Deck contents (top to bottom):" << std::endl;
    for (int i = top; i >= 0; i--) {
        deckOfCards[i].display();
    }

}


Card Deck::deal() {
    return deckOfCards[top--];
}

void Deck::shuffle() {

}



