#pragma once
#include <iostream>
#include <string>
#include "./sorting/quick_sort.hpp"
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