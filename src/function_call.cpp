#include "function_call.hpp"
// #include ".gitignore"/s


string algoList[] = {
    "selection-sort",
    "insertion-sort",
    "bubble-sort",
    "shaker-sort",
    "shell-sort",
    "heap-sort",
    "merge-sort",
    "quick-sort",
    "counting-sort",
    "radix-sort",
    "flash-sort"
};

void Call_Sort(const string name, int* arr, int n) {

    if (name == "selection-sort") {
        Selection_Sort(arr, n);
    } else if (name == "insertion-sort") {
        Insertion_Sort(arr, n);
    } else if (name == "bubble-sort") {
        Bubble_Sort(arr, n);
    } else if (name == "shaker-sort") {
        Shaker_Sort(arr, n);
    } else if (name == "shell-sort") {
        Shell_Sort(arr, n);
    } else if (name == "heap-sort") {
        Heap_Sort(arr, n);
    } else if (name == "merge-sort") {
        Merge_Sort(arr, n);
    } else if (name == "quick-sort") {
        Quick_Sort(arr, n);
    } else if (name == "counting-sort") {
        Counting_Sort(arr, n);
    } else if (name == "radix-sort") {
        Radix_Sort(arr, n);
    } else if (name == "flash-sort") {
        Flash_Sort(arr, n);
    }  else {
        cout << "np sorting algo found!";
    }

    // if (name == "quick-sort") {
    //     Quick_Sort(arr, n);
    // } else {
    //     cout << "no sorting algo found!";
    // }
}

void Call_Sort_Counting(const string name, int* arr, int n, int& cntComp) {
  if (name == "selection-sort") {
        Selection_Sort_Count(arr, n, cntComp);
    } else if (name == "insertion-sort") {
        Insertion_Sort_Count(arr, n, cntComp);
    } else if (name == "bubble-sort") {
        Bubble_Sort_Count(arr, n, cntComp);
    } else if (name == "shaker-sort") {
        Shaker_Sort_Count(arr, n, cntComp);
    } else if (name == "shell-sort") {
        Shell_Sort_Count(arr, n, cntComp);
    } else if (name == "heap-sort") {
        Heap_Sort_Count(arr, n, cntComp);
    } else if (name == "merge-sort") {
        Merge_Sort_Count(arr, n, cntComp);
    } else if (name == "quick-sort") {
        Quick_Sort_Count(arr, n, cntComp);
    } else if (name == "counting-sort") {
        Counting_Sort_Count(arr, n, cntComp);
    } else if (name == "radix-sort") {
        Radix_Sort_Count(arr, n, cntComp);
    } else if (name == "flash-sort") {
        Flash_Sort_Count(arr, n, cntComp);
    } else {
        cout << "np sorting algo found!";
    }
    // if (name == "quick-sort") {
    //     Quick_Sort_Count(arr, n, cntComp);
    // } else {
    //     cout << "no sorting algo found!";
    // }
}