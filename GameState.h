//
// Created by Owner on 2/26/2026.
//
#pragma once
#include "Deck.h"
#include <iostream>
#include "Stack.h"



class GameState {
private:
  Stack tableau[7];
  Stack suitPiles[4];
    void printSuitPiles();
    void printTableau();
    void printMoves();

  public:
    GameState();
    ~GameState();

    void deal(Deck& deck);
    void GameState::display() {
        std::cout << "MOUSAAB AND BRENT'S MAGNIFICENT ALASKAN SOLITAIRE" << std::endl;
        printSuitPiles();
        printTableau();
        printMoves();
    }
    bool victory();
    bool defeat();
    void getInput();
    void displayResult();


};




