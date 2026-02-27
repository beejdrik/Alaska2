//
// Created by Owner on 2/26/2026.
//
#pragma once
#include "Deck.h"
#include "Stack.h"



class GameState {
private:
  Stack tableau[7];
  Stack suitPiles[4];
  public:
    GameState();
    ~GameState();

    void deal(Deck& deck);
    void display();
    bool victory();
    bool defeat();
    void getInput();
    void displayResult();


};




