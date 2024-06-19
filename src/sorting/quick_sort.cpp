#include "quick_sort.hpp"

void Qsort(int* arr, int n) {
    // cout << "hello world";
}

void Qsort_Count(int* arr, int n, int &count) {
    // cout << "hello world";
}


void Quick_Sort(int* arr, int n) {
    Qsort(arr, n);
}

/*
From quick_sort.hpp
*/
void Quick_Sort_Count(int* arr, int n, int& count) {
    count = 0;
    Qsort_Count(arr, n, count);
}
