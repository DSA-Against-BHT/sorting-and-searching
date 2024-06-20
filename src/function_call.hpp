#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
#include "timer.hpp"
#include "./generator/gen.hpp"
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
- This function will call the sorting function with counting
- will first set count = 0
*/
void Call_Sort_Counting(const string name, int* arr, int n, int& cntComp);

/*
This function is used to load the array from the path, then return then array in form of pointer and change the size
*/
int *Load_Array(string inputPath, int &size);

/*
Write the array to outputPath
*/
void Dump_Array(string outputPath, int *arr, int size);

/*
copy 'array' to 'copy'
*/
void Make_Copy(int* arr, int *copy, int size);

/*
    return a pair of <seconds, milliseconds>
*/
pair<double, double> Get_Time(const string& algo, int *arr, int size);


/*
    return the number of comparisons
*/
int Get_Count(const string& algo, int *arr, int size);