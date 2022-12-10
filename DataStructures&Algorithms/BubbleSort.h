#ifndef BUBBLESORT_H_INCLUDED
#define BUBBLESORT_H_INCLUDED

#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int [], int);

void bubbleSort(int arr[], int size){
    bool becomeSorted = false
    for (size_t i = 0; i < size-1; i++){
        for(size_t j = 0; j < size-1-i; j++){
            if (arr[j+1] < arr[j]){
                swap(arr[j+1], arr[j]);
                becomSorted = true;
            }
        }
        if(!becomeSorted)
            break;
    }
}

#endif // BUBBLESORT_H_INCLUDED
