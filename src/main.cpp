#include "handle_flag.hpp"
#include "./sorting/quick_sort.hpp"
#include <iostream>
#include <string>
using namespace std;



int main(int argc, char* argv[]) {

    test();

    char mode = argv[1][1];
    cout << mode << '\n';
    // cout << argv[2] << ' ' << argv[3] << ' ' << argv[4] << ' ' << argv[5] << '\n';
    switch (mode)
    {
        case 'c':
            Compare_Mode(argv[2], argv[3], argv[4], argv[5]);
            break;
        case 'a':
            Algorithm_Mode(argv[2], argv[3], argv[4], argv[5]);
            break;
        default:
            break;
    }

    return 0;
}