#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include<bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

template <class t>
class Stack{

private:
    int size;
    t top;
    t *arr;
    void duplicateArray();

public:
    Stack();
    Stack(int);
    ~Stack();
    void push(t);
    void pop();
    t getTop();
    int getSize();
    bool isFull();
    bool isEmpty();
    void print();

};

template <class t>
Stack<t>::Stack() :size(0), top(-1), arr(nullptr) {
    size = 10;
    arr = new t[size];
}

template <class t>
Stack<t>::Stack(int capacity) :size{0}, top{-1}, arr{nullptr} {
    size = capacity;
    arr = new t[size];
}

template <class t>
Stack<t>::~Stack() {
    delete [] arr;
}

template <class t>
void Stack<t>::duplicateArray() {
    size *= 2;
    t *temp = new t[size];
    for (size_t i = 0; i < size; i++)
        temp[i] = arr[i];
    delete [] arr;
    arr = temp;
}

template <class t>
void Stack<t>::push(t value) {
    if(top != size - 1)
        arr[++top] = value;
    else{
        duplicateArray();
        arr[++top] = value;
    }
}

template <class t>
void Stack<t>::pop() {
    if(isEmpty()) cout << "Stack is empty!" << endl;
    else top--;
}

template <class t>
bool Stack<t>::isEmpty() {
    return (top == -1);
}

template <class t>
bool Stack<t>::isFull() {
    return (top == size-1);
}

template <class t>
t Stack<t>::getTop() {
    if(isEmpty()) return -1;
    else return arr[top];
}

template <class t>
void Stack<t>::print() {
    if(isEmpty()) cout << "Stack is empty!" << endl;
    else{
        cout << "Stack Elements: ";
        t temp = top;
        while(temp != -1) cout << arr[temp--] << " ";
        cout<<endl;
    }
}

template <class t>
int Stack<t>::getSize() {
    cout << "Stack Size: ";
    return top + 1;
}

#endif // STACK_H_INCLUDED
