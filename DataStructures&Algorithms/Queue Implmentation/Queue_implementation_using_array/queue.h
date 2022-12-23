#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include<bits/stdc++.h>

using namespace std;

template<class t>
class Queue{
private:
    t *arr;
    int first;
    int last;
    int size;
    void duplicateSize();

public:
    Queue();
    Queue(int);
    ~Queue();
    void enqueue(t);
    void dequeue();
    void print();
    bool isFull();
    bool isEmpty();
    t getFirst();
    t getLast();
};

template<class t>
Queue<t>::Queue() :first{-1}, last{-1}, size{10} {
    arr = new t [size];
}

template<class t>
Queue<t>::Queue(int size) :first{-1}, last{-1}, size{size} {
    arr = new t [size];
}

template<class t>
Queue<t>::~Queue() { delete [] arr; }

template<class t>
void Queue<t>::duplicateSize(){
    int s = size;
    size *= 2;
    int k=0;
    t *temp = new t [size];
    if(first < last){
        for (size_t i = first; i <= last; i++){
            temp[k] = arr[i];
            k++;
        }
    }else{
        for (int i = first; i < s; i++){
            temp[k] = arr[i];
            k++;
        }
        for (int i = 0; i <= last; i++){
            temp[k] = arr[i];
            k++;
        }
    }
    delete [] arr;
    arr = temp;
}

template<class t>
void Queue<t>::enqueue(t value) {
    if(isEmpty()){
        first = last = 0;
        arr[first] = value;
    }else if(isFull()){
        int tempValue = size;
        duplicateSize();
        arr[tempValue] = value;
        first = 0;
        last = tempValue;
    }else if(last == size - 1){
        last = 0;
        arr[last] = value;
    }else
        arr[++last] = value;
};

template<class t>
void Queue<t>::dequeue() {
    if(isEmpty())
        cout << "Empty Queue!\n";
    else if(first == last) // dequeue the only existing element
        first = last = -1;
    else if(first == size-1) // we have dequeued all the elements in the queue except the last one
        first = 0;
    else
        first++;
};

template<class t>
bool Queue<t>::isEmpty() { return first == -1; }

template<class t>
bool Queue<t>::isFull() { return (last+1)%size == first; }  // Ex: first=0 && last=size-1

template<class t>
t Queue<t>::getFirst() {
    if(isEmpty())
        cout << "Empty Queue!\n";
    else
        return arr[first];
};

template<class t>
t Queue<t>::getLast() {
    if(isEmpty())
        cout << "Empty Queue!\n";
    else
        return arr[last];
};

template<class t>
void Queue<t>::print() {
    if(isEmpty())
        cout << "Empty Queue!\n";
    else if(first < last){
        for (size_t i = first; i <= last; i++)
            cout << arr[i] << ' ';
    }else{
        for (int i = first; i < size; i++)
            cout << arr[i] << ' ';
        for (int i = 0; i <= last; i++)
            cout << arr[i] << ' ';
    }
    cout << endl;
};

#endif // QUEUE_H_INCLUDED
