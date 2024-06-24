#include "bubble_sort.hpp"

void Bsort(int* arr, int n){
    for(int i = 1; i < n; i ++){
        for(int j = 0; j < n - i; j ++){
            if(arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

void Bsort_Count(int* arr, int n, long long& count){
    // cout << "hello world";
}

void Bubble_Sort(int* arr, int n){
    Bsort(arr, n);
}

/*
This function is used to sort the array using bubble sort and count the number of comparisons
*/
void Bubble_Sort_Count(int* arr, int n, long long& count){
    count = 0;
    Bsort_Count(arr, n, count);
}