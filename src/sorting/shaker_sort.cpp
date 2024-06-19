#include "shaker_sort.hpp"

void Ssort(int* arr, int n){
    // cout << "hello world";
}

void Ssort_Count(int* arr, int n, int &count){
    // cout << "hello world";
}

void Shaker_Sort(int* arr, int n){
    Ssort(arr, n);
}

/*
From selection_sort.hpp
*/
void Shaker_Sort_Count(int* arr, int n, int& count){
    count = 0;
    Ssort_Count(arr, n, count);
}