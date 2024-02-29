#include <iostream>
#include "Stack.h"

template <typename T>
void Stack<T>::Init() {
    top = nullptr;
};

template <typename T>
void Stack<T>::push(const T& value) {
    Node* newNode = new Node(value);
    newNode->next = top;
    top = newNode;
}


template <typename T>
T Stack<T>::get_last_element() const {
    if (isEmpty()) {
        std::cout << "Stack is empty. No last element.\n";
        return -1; 
    }

    return top->data;
}

template <typename T>
void Stack<T>::set_last_element(T value) {
    if (isEmpty()) {
        std::cout << "Stack is empty. Cannot set last element.\n";
        return;
    }

    top->data = value;
}

template <typename T>
void Stack<T>::pop() {
    if (isEmpty()) {
        std::cout << "Stack is empty. No elements to pop." << std::endl;
        return;
    }

    Node* temp = top;
    top = top->next;
    delete temp;
}

template <typename T>
int Stack<T>::count() const {
    int count = 0;
    Node* current = top;

    while (current != nullptr) {
        count++;
        current = current->next;
    }

    return count;
}

template <typename T>
bool Stack<T>::isEmpty() const {
    return top == nullptr;
}

template <typename T>
void Stack<T>::Read() {
    T value;
    std::cout << "Enter a value to push onto the stack: ";
    std::cin >> value;
    push(value);
}

template <typename T>
void Stack<T>::Display() const {
    Node* current = top;
    std::cout << "Stack elements: ";
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

template <typename T>
Stack<T>::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

