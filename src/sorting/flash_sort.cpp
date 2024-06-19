#include "flash_sort.hpp"

void Fsort(int* arr, int n){
    // cout << "hello world";
}

void Fsort_Count(int* arr, int n, int &count){
    // cout << "hello world";
}

void Flash_Sort(int* arr, int n){
    Fsort(arr, n);
}

/*
From selection_sort.hpp
*/
void Flash_Sort_Count(int* arr, int n, int& count){
    count = 0;
    Fsort_Count(arr, n, count);
}