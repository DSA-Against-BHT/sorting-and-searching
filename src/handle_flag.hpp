#pragma once
#include "comp_mode.hpp"
#include "algo_mode.hpp"
#include <iostream>
#include <string>

using namespace std;

/*
In this mode, you have to run TWO specified sorting algorithms on the input data, which is either given or generated automatically and presents the resulting running times and/or numbers of comparisons.
*/
void Compare_Mode(char* algo1, char* algo2, char* inputSize, char* inputOrder);


/*
In this mode, you are asked to run a specified sorting algorithm on the input data, which is either given or generated automatically and presents the resulting running time and/or number of comparisons.
*/
void Algorithm_Mode(char* algo, char* giveInput, char* inputOrder, char* outputParam);
