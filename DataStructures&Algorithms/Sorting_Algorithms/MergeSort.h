#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED

void mergeSort(int [], int); // wrapper function
void mergeSort(int [], int, int, int); // auxiliary function
void mrg(int [], int, int, int);


void mrg(int arr[], int l, int m, int r){

    int *temp = new int [r+1];
    int k = l;

    while(k < r) temp[k] = arr[k], k++;

    int i = l, j = m+1;
    k = l;
    while(i <= m && j < r){
        if(temp[i] <= temp[j]){
            arr[k] = temp[i];
            i++;
        }else{
            arr[k] = temp[j];
            j++;
        }
        k++;
    }

    while(i <= m){
        arr[k] = temp[i];
        i++;
        k++;
    }
    while(j < r){
        arr[k] = temp[j];
        j++;
        k++;
    }
    delete [] temp;
}

void mergeSort (int arr[], int l, int r){
    if (l >= r)
        return;

    int middle = l + (r-l) / 2;
    mergeSort(arr, l, middle);
    mergeSort(arr, middle+1, r);
    mrg(arr, l, middle, r);
}

void mergeSort(int arr[], int size){
    mergeSort(arr, 0, size-1);
}


#endif // MERGESORT_H_INCLUDED
