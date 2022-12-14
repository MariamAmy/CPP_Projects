#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include<bits/stdc++.h>

#include"node.h"

template <class t>
class Stack{
public:
    Node<t> *top;
    int size{0};

    Stack();
    ~Stack();

    int getSize();
    void push(t);
    void pop();
    void pop(t&);
    void print();
    t getTop();
    bool isEmpty();
};

template <class t>
Stack<t>::Stack() :top{nullptr} {}

template <class t>
Stack<t>::~Stack() { delete top; }


template <class t>
int Stack<t>::getSize() { return size; }

template <class t>
void Stack<t>::push(t value) {
    size++;
    Node<t> *newNodePtr = new Node<t>;

    if(newNodePtr == nullptr)
        cout << "Can't allocate memory in the heap!" << endl;
    else{
        newNodePtr->data = value;
        newNodePtr->nextPtr = top;
        top = newNodePtr;
    }
}

template <class t>
bool Stack<t>::isEmpty() { return (top == nullptr); }

template <class t>
void Stack<t>::pop() {
    if(isEmpty())
        cout << "Can't pop from an empty stack!" << endl;
    else{
        size--;
        Node<t> *temp = top;
        top = top->nextPtr;

        temp = temp->nextPtr = nullptr;
        delete temp;
    }
}

template <class t>
void Stack<t>::pop(t &topElement) {
    if(isEmpty())
        cout << "Can't pop from an empty stack!" << endl;
    else{
        size--;
        topElement = top->data;
        Node<t> *temp = top;
        top = top->nextPtr;

        delete temp;
        temp = temp->nextPtr = nullptr;
    }
}

template <class t>
t Stack<t>::getTop() {
    if(isEmpty())
        cout << "The stack is empty!" << endl;
    else
        return top->data;
}

template <class t>
void Stack<t>::print() {
    if(isEmpty())
        cout << "The stack is empty!" << endl;
    else{
        Node<t> *cur = top;
        cout << "Size: " << getSize() << endl;
        cout << "Stack Elements: ";
        while(cur != nullptr){
            cout << cur->data << " ";
            cur = cur->nextPtr;
        }
        cout << endl;
    }
}
#endif // STACK_H_INCLUDED
