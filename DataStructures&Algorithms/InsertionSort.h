#ifndef INSERTIONSORT_H_INCLUDED
#define INSERTIONSORT_H_INCLUDED

#include<bits/stdc++.h>

using namespace std;

void insertionSort(int [], int);

void insertionSort(int arr[], int size){
    int key{0}, ndx{0};
    for (size_t i = 1; i < size; i++){
        ndx = i;
        key = arr[i];
        while (ndx > 0 && key < arr[ndx-1]){
            arr[ndx] = arr[ndx-1];
            ndx--;
        }
        arr[ndx] = key;
    }
}

#endif // INSERTIONSORT_H_INCLUDED
