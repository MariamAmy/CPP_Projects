#include <iostream>

#include"BubbleSort.h"          //    O(n^2)
#include"InsertionSort.h"       //    O(n^2)
#include"SelectionSort.h"       //    O(n^2)
#include"MergeSort.h"           //    O(nlog(n))

using namespace std;

void print(const int *, string, int);

int main()
{
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int b[] = {9, 6, 7, 6, 5, 0, 3, 2, 9};

    selectionSort(b, 9);
    print(b, "selection sort", 9);
    cout << endl;

    bubbleSort(b, 9);
    print(b, "bubble sort", 9);
    cout << endl;

    insertionSort(b, 9);
    print(b, "insertion sort", 9);
    cout << endl;

    mergeSort(b, 9);
    print(b, "merge sort", 9);
    cout << endl;

    return 0;
}

void print(const int *arr, string sortingAlgo, int size){
    cout << "Sorted array using " << sortingAlgo << ": " << endl;
    for (size_t i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
