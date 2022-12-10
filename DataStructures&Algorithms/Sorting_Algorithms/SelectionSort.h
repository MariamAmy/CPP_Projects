#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED

#include<bits/stdc++.h>

using namespace std;

void selectionSort(int [], int);

void selectionSort(int arr[], int size){
    for (size_t i = 0; i < size-1; i++){
        for (size_t j = i+1; j < size; j++)
            if (arr[j] < arr[i])
                swap (arr[i], arr[j]);
    }
}

#endif // SELECTIONSORT_H_INCLUDED
