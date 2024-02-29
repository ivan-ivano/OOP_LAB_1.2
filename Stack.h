#pragma once
#include <iostream>

template <typename T>
class Stack {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& value) : data(value), next(nullptr) {}
    };

    Node* top;

public:
    void Init();
    T get_last_element() const;
    void set_last_element(T value);
    void push(const T& value);
    void pop();
    int count() const;
    bool isEmpty() const;
    void Read();
    void Display() const;
    ~Stack();
};


