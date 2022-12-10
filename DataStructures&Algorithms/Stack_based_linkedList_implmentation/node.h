#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

template <class T>
class Node{
public:

    Node<T> *nextPtr;
    T data;

    Node(T);
    ~Node();
    T getData() const;

};

template <class T>
Node<T>::Node(T value) :nextPtr(nullptr), data{value} {}

template <class T>
Node<T>::~Node() {
    delete nextPtr;
}

template <class T>
T Node<T>::getData() const {
    return data;
}

#endif // NODE_H_INCLUDED
