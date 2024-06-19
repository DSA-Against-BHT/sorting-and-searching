#include "algo_mode.hpp"

const int TIME = 1;
const int COMP = 2;
const int BOTH = 3;

int Parse_Param(const string outputParameter) {
    if (outputParameter == "-both") return BOTH;
    if (outputParameter == "-time") return TIME;
    if (outputParameter == "-comp") return COMP;
}

void Handle_Command_1(string algo1, string givenInput, string outputParameter) {

}

void Handle_Command_2(string algo1, int inputtSize, string inputOrder, string outputParameter) {

}

// namespace

void Handle_Command_3(string algo1, int inputtSize, string outputParameter) {
    cout << "Algorithm: " << algo1 << endl;
    cout << "Input size: " << inputtSize << endl;



}
