#include "shaker_sort.hpp"

void shakerSort(int* arr, int n){
    int left = 1, right = n - 1, k = n - 1; 
    do {
        for (int j = right; j >= left; j--) {
            if (arr[j - 1] > arr[j]) {
                swap(arr[j - 1], arr[j]);
                k = j;
            }
        }
        left = k + 1;
        for (int j = right; j >= left; j--) {
            if (arr[j - 1] > arr[j]) {
                swap(arr[j - 1], arr[j]);
                k = j;
            }
        }
        right = k - 1;
    }
    while (left <= right);
}

void shakerSort_Count(int* arr, int n, int& count){
    int left = 1, right = n - 1, k = n - 1; 
    do {
        for (int j = right; ++count && j >= left; j--) {
            if (++count && arr[j - 1] > arr[j]) {
                swap(arr[j - 1], arr[j]);
                k = j;
            }
        }
        left = k + 1;
        for (int j = right; ++count && j >= left; j--) {
            if (++count && arr[j - 1] > arr[j]) {
                swap(arr[j - 1], arr[j]);
                k = j;
            }
        }
        right = k - 1;
    }
    while (++count && left <= right);
}

/*
This function is used to sort the array using shaker sort
*/
void Shaker_Sort(int* arr, int n){
    shakerSort(arr, n);
}

/*
This function is used to sort the array using shaker sort and count the number of comparisons
*/
void Shaker_Sort_Count(int* arr, int n, int& count){
    count = 0;
    shakerSort_Count(arr, n, count);
}