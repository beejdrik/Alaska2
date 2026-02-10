#ifndef STACK_H
#define STACK_H

#include "Card.h"

class Stack {
private:
    struct Node {
        Card data;
        Node* next;
    };
    Node* top = nullptr;

public:
    Stack();
    ~Stack();

    void push(Card c);
    Card pop();
    Card peek();
    bool isEmpty();
};

#endif
