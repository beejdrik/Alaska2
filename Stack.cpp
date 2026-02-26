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
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    top = nullptr;
}

void Stack::push(Card c) {
    Node* newNode = new Node;
    newNode->data = c;
    newNode->next = top;
    top = newNode;
}

void Stack::pop() {
    if (isEmpty()) {
        std::cout << "Stack is empty." << std::endl;
        return;
    }
    Node* current = top;
    top = top->next;
    delete current;
}

void Stack::peek() {
    if (isEmpty()) {
        std::cout << "Stack is empty." << std::endl;
        return;
    }
    return top->data.display();
}

bool Stack::isEmpty() {
    if (top == nullptr) {
        return true;
    }
    return false;
}
