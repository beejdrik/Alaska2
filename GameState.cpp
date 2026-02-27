//
// Created by Owner on 2/26/2026.
//
#include "GameState.h"

GameState::GameState() {
  Deck deck;
  deck.shuffle();
  deal(deck);
};
GameState::~GameState() = default;

void GameState::deal(Deck& deck) {
   tableau[0].push(deck.deal());
   for (int i = 0; i < 6; i++) {
     tableau[1].push(deck.deal());
   }
   for (int i = 0; i < 7; i++) {
     tableau[2].push(deck.deal());
   }
   for (int i = 0; i < 8; i++) {
     tableau[3].push(deck.deal());
   }
   for (int i = 0; i < 9; i++) {
     tableau[4].push(deck.deal());
   }
   for (int i = 0; i < 10; i++) {
     tableau[5].push(deck.deal());
   }
   for (int i = 0; i < 11; i++) {
     tableau[6].push(deck.deal());
   }
}

void GameState::printSuitPiles() {

  std::cout << "Spades" << std::endl;
  if (suitPiles[0].isEmpty()) {
    std::cout << "O" << std::endl;
  } else {
    suitPiles[0].getAt(0).display();
  }

  std::cout << "Clubs" << std::endl;
  if (suitPiles[1].isEmpty()) {
    std::cout << "O" << std::endl;
  } else {
    suitPiles[1].getAt(0).display();
  }

  std::cout << "Diamonds" << std::endl;
  if (suitPiles[2].isEmpty()) {
    std::cout << "O" << std::endl;
  } else {
    suitPiles[2].getAt(0).display();
  }

  std::cout << "Hearts" << std::endl;
  if (suitPiles[3].isEmpty()) {
    std::cout << "O" << std::endl;
  } else {
    suitPiles[3].getAt(0).display();
  }
}

void GameState::printTableau() {
  for (int row = 0; row < 20; row++) {
    for (int col = 0; col < 7; col++) {
      if (row < tableau[col].getSize()) {
        std::cout << std::setw(6);
        tableau[col].getAt(row).display();
      } else {
        std::cout << std::setw(6) << " ";
      }
    }
    std::cout << std::endl;
  }
}

void GameState::printMoves() {

}

void GameState::display() {
  std::cout << "MOUSAAB AND BRENT'S MAGNIFICENT ALASKAN SOLITAIRE" << std::endl;
  //printSuitPiles();
  printTableau();
  printMoves();
}
