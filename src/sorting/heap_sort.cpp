#include "heap_sort.hpp"

void Heapify(int *arr, int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if (l < n && arr[l] > arr[largest]) largest = l;
        if (r < n && arr[r] > arr[largest]) largest = r;
        if (largest != i) {
            swap(arr[i], arr[largest]);
            Heapify(arr, n);
        }
    }
}

void Heapify_Count(int* arr, int n, int i, int& count){
    // Initialize largest as root
    int largest = i;

    // left = 2*i + 1
    int l = 2 * i + 1;

    // right = 2*i + 2
    int r = 2 * i + 2;

    // If left child is larger than root
    if (++count && ++count && l < n && arr[l] > arr[largest]) largest = l;
    // If right child is larger than largest
    // so far
    if (++count && ++count && r < n && arr[r] > arr[largest]) largest = r;

    // If largest is not root
    if (++count && largest != i) {
        swap(arr[i], arr[largest]);
        // Recursively Heapify_Count the affected
        // sub-tree
        Heapify_Count(arr, n, largest, count);
    }
}

void Hsort(int* arr, int n){
    for (int i = n / 2 - 1; i >= 0; i--)
        Heapify(arr, n);
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        Heapify(arr, i);
    }
}

void Hsort_Count(int* arr, int n, int& count){
    for (int i = n / 2 - 1; ++count && i >= 0; i--)
        Heapify_Count(arr, n, i, count);
    for (int i = n - 1; ++count && i > 0; i--) {
        swap(arr[0], arr[i]);
        Heapify_Count(arr, i, 0, count);
    }
}

/*
This function is used to sort the array using heap sort
*/
void Heap_Sort(int* arr, int n){
    Hsort(arr, n);
}

/*
This function is used to sort the array using heap sort and count the number of comparisons
*/
void Heap_Sort_Count(int* arr, int n, int& count){
    count = 0;
    Hsort_Count(arr, n, count);
}