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
    suitPiles[0].getDataAtDepth(0).display();
  }

  std::cout << "Clubs" << std::endl;
  if (suitPiles[1].isEmpty()) {
    std::cout << "O" << std::endl;
  } else {
    suitPiles[1].getDataAtDepth(0).display();
  }

  std::cout << "Diamonds" << std::endl;
  if (suitPiles[2].isEmpty()) {
    std::cout << "O" << std::endl;
  } else {
    suitPiles[2].getDataAtDepth(0).display();
  }

  std::cout << "Hearts" << std::endl;
  if (suitPiles[3].isEmpty()) {
    std::cout << "O" << std::endl;
  } else {
    suitPiles[3].getDataAtDepth(0).display();
  }
}

void GameState::printTableau() {
  for (int i = 0; i < 17; i++) {
    for (int j = 0; j < 7; j++) {
      if (i < tableau[j].getSize()) {
        std::cout << std::setw(6);
        tableau[j].getDataAtDepth(i).display();
      } else {
        std::cout << std::setw(7) << " ";
      }
    }
    std::cout << std::endl;
  }
}

void GameState::printMoves() {
  std::cout << "Options:" << std::endl;
  std::cout << "1) Move card to suit pile   2) Move card(s) in tableau   0) Give up" << std::endl;
}

void GameState::display() {
  std::cout << "MOUSAAB AND BRENT'S MAGNIFICENT ALASKAN SOLITAIRE" << std::endl;
  printSuitPiles();
  printTableau();
  printMoves();
}

void GameState::moveToSuitPile() {
  int pile;
  std::cout << "Pile number: ";
  std::cin >> pile;
  --pile;

  if (tableau[pile].isEmpty()) {
    std::cout << "Empty Pile" << std::endl;
    return;
  }

  Card top = tableau[pile].peek();
  int suitIndex = static_cast<int>(top.getSuit()) - 1;

  if (suitPiles[suitIndex].isEmpty()) {
    if (top.getRank() == Rank::Ace) {
      suitPiles[suitIndex].push(top);
      tableau[pile].pop();
    } else {
      std::cout << "Illegal Move! Must play ace" << std::endl;
    }
  } else {
    Card suitTop = suitPiles[suitIndex].peek();
    if (static_cast<int>(top.getRank()) == static_cast<int>(suitTop.getRank()) + 1) {
      suitPiles[suitIndex].push(top);
      tableau[pile].pop();
    } else {
      std::cout << "Illegal Move! May play one rank above current top card" << std::endl;
    }
  }

}

/*void GameState::getInput() {
  int choice;
  std::cin >> choice;

  if (choice == 1) {
    moveToSuitPile();
  } else if (choice == 2) {
    moveInTableau();
  } else if (choice == 0) {
    defeat();
  }
}
*/