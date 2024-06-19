#include "shaker_sort.hpp"

void shakerSort(int* arr, int n){
    // cout << "hello world";
}

void shakerSort_Count(int* arr, int n, int &count){
    // cout << "hello world";
}

void Shaker_Sort(int* arr, int n){
    shakerSort(arr, n);
}

/*
From selection_sort.hpp
*/
void Shaker_Sort_Count(int* arr, int n, int& count){
    count = 0;
    shakerSort_Count(arr, n, count);
}