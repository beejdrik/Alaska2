//
// Created by Owner on 2/26/2026.
//
#pragma once
#include "Deck.h"
#include <iomanip>
#include <iostream>
#include "Stack.h"



class GameState {
private:
  Stack tableau[7];
  Stack suitPiles[4];
  void printSuitPiles();
  void printTableau();
  void printMoves();
  void moveToSuitPile();
  //void moveInTableau();

  public:
    GameState();
    ~GameState();

    void deal(Deck& deck);
    void display();
    //void getInput();
    //bool victory();
    //bool defeat();
    //void displayResult();


};




