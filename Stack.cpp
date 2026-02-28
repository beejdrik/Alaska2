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

Card Stack::getDataAtDepth(int index) {     //takes index and returns data at that depth in a stack
    Node* current = top;
    if (current == nullptr) {
        return {};
    }
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    return current->data;
}

int Stack::getSize() {                      //Counts the number of entries into a stack and returns it as size
    int size = 0;
    Node* current = top;
    while (current != nullptr) {
        size++;
        current = current->next;
    }
    return size;

}

void Stack::push(const Card &c) {
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

Card Stack::peek() {
    if (isEmpty()) {
        std::cout << "Stack is empty." << std::endl;
        return {};
    }
    return top->data;       //returns top Card
}

void Stack::displayAll() {
    if (isEmpty()) {std::cout << "O" << std::endl;}
    Node* current = top;
    while (current != nullptr) {
        current->data.display();
        current = current->next;
    }
}

bool Stack::isEmpty() {
    if (top == nullptr) {
        return true;
    }
    return false;
}
