#pragma once
#include <iostream>
#include <string>
#include "./sorting/quick_sort.hpp"
#include "./sorting/bubble_sort.hpp"
#include "./sorting/counting_sort.hpp"
#include "./sorting/flash_sort.hpp"
#include "./sorting/heap_sort.hpp"
#include "./sorting/insertion_sort.hpp"
#include "./sorting/merge_sort.hpp"
#include "./sorting/radix_sort.hpp"
#include "./sorting/selection_sort.hpp"
#include "./sorting/shaker_sort.hpp"
#include "./sorting/shell_sort.hpp"

// #include "./sorting/quick_sort.hpp"

/*
This header will be uses to call out sorting algo
*/

using namespace std;


/*
This function will call the sorting function
*/
void Call_Sort(const string name, int* arr, int n);


/*
This function will call the sorting function with counting
*/
void Call_Sort_Counting(const string name, int* arr, int n, int& cntComp);