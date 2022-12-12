#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

template <class t>
class Node{
public:

    Node<t> *nextPtr;
    t data;

    Node();
    Node(t);
    ~Node();
    t getData() const;

};

template <class t>
Node<t>::Node() :nextPtr(nullptr), data{0} {}

template <class t>
Node<t>::Node(t value) :nextPtr(nullptr), data{value} {}

template <class t>
Node<t>::~Node() {
    delete nextPtr;
}

template <class t>
t Node<t>::getData() const {
    return data;
}

#endif // NODE_H_INCLUDED
