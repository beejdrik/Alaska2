#pragma once
#include "Card.h"

class Stack { //
private:
    struct Node {
        Card data; // data is just the card in the node
        Node* next; // *next points to the next node (card)
    };
    Node* top = nullptr;

public:
    Stack();
    ~Stack();

    void push(Card card);
    Card pop();
    Card peek();
    bool isEmpty();
};
