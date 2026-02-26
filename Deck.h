//
// Created by Owner on 2/11/2026.
//

#pragma once
#include "Card.h"
//CREATE DECK NEXT


class Deck {
  private:
  Card deckOfCards[52];   //Deck array
  int top;          //For tracking the card to be dealt next

  public:
    Deck();
    ~Deck();

  static void shuffle();
    Card deal();
    void print() const;


};



