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
   for (int i = 0; i < 5; i++) {
     tableau[i].push(deck.deal());
   }
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
   for (int i = 0; i < 12; i++) {
     tableau[7].push(deck.deal());
   }
}

void GameState::display() {

}
