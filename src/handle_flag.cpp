#include "handle_flag.hpp"

void Compare_Mode(char* algo1, char* algo2, char* inputSize, char* inputOrder) {

    cout << "You have entered compare mode with these params: ";
    cout << algo1 << ' ' << algo2 << ' ' << inputSize << ' ' << inputOrder << '\n';

}

void Algorithm_Mode(char* algo, char* inputSize, char* inputOrder, char* outputParam) {
    cout << "You have entered algorithm mode with these params: ";
    cout << algo << ' ' << inputSize << ' ' << inputOrder << ' ' << outputParam << '\n';
}