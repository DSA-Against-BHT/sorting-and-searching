#include "bubble_sort.hpp"

void Bsort(int* arr, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

void Bsort_Count(int* arr, int n, int& count){
    for(int i = 0; ++count && i < n - 1; i++){
        for(int j = 0; ++count && j < n - i - 1; j++){
            if(++count && arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

/*
This function is used to sort the array using bubble sort
*/
void Bubble_Sort(int* arr, int n){
    Bsort(arr, n);
}

/*
This function is used to sort the array using bubble sort and count the number of comparisons
*/
void Bubble_Sort_Count(int* arr, int n, int& count){
    count = 0;
    Bsort_Count(arr, n, count);
}