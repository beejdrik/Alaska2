//
// Created by Owner on 2/10/2026.
//
#include <iostream>
#include "Deck.h"
#include "stack.h"
#include "GameState.h"

int main(){

Stack stack;
    Deck deck;
    stack.push(deck.deal());
    stack.push(deck.deal());
    stack.push(deck.deal());
    stack.getAt(0).display();
    stack.getAt(1).display();
    stack.getAt(2).display();


return 0;
}