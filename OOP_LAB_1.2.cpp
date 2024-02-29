#include <iostream>
#include "Stack.cpp"

Stack<int> makeStack() {
    int size;
    std::cout << "Enter the size of the stack: ";
    std::cin >> size;

    Stack<int> newStack;
    newStack.Init();

    for (int i = 0; i < size; ++i) {
        int value;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> value;
        newStack.push(value);
    }

    return newStack;
}

int main() {

    Stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    std::cout << "Number of elements in the stack: " << s.count() << std::endl;

    s.pop();

    std::cout << "Number of elements in the stack after pop: " << s.count() << std::endl;

    s.Display();
    s.Read();
    s.Display();
    std::cout << "Last element in the stack: " << s.get_last_element() << std::endl;
    s.pop();
    s.pop();
    s.Display();

    std::cout << "Set last element:";
    int a;
    std::cin >> a;
    s.set_last_element(a);

    s.Display();
    std::cout << "Stack size:" << s.count() << std::endl;

    std::cout << "Last element in the stack: " << s.get_last_element() << std::endl;

    Stack<int> s2 = makeStack();
    s2.Display();
    std::cout << "Stack size:" << s2.count() << std::endl;

    return 0;
}