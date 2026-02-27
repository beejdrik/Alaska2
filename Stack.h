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

    Card getAt(int index);
    int getSize();


    void push(const Card &c);
    void pop();
    void peek();
    void displayAll();
    bool isEmpty();
};
