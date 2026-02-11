//
// Created by Owner on 2/10/2026.
//

#include "Stack.h"

#include <iostream>
#include <ostream>

Stack::Stack() {
    top = nullptr;
}

Stack::~Stack() {
    Node* current = top;
    while (top != nullptr) {
        Node* next = top->next;
        top -> next = nullptr;
        delete top;
    }
}

void Stack::push(Card card) {
    Node* newNode = new Node;
    newNode->data = card;
    newNode->next = top;
    top = newNode;
}

Card Stack::pop() {
    if (isEmpty()) {
        std::cout << "Stack is empty." << std::endl;
    }
    Node* current = top;
    Card data = current->data;
    delete current;
    return data;
}

Card Stack::peek() {
    if (isEmpty()) {
        std::cout << "Stack is empty." << std::endl;
    }
    return top->data;
}

bool Stack::isEmpty() {
    if (top == nullptr) {
        return true;
    }
    return false;
}
