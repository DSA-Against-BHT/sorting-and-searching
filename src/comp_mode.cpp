#include "comp_mode.hpp"

void Handle_Command_4(string algo1, string algo2, string givenInput) {


    const string inputPath = "../input/" + givenInput;
    const string outputPath = "../output/output.txt";

    int size;
    int *arr = Load_Array(inputPath, size);
    int *copy = new int[size];

    Make_Copy(arr, copy, size);
    int count1 = Get_Count(algo1, copy, size);

    Make_Copy(arr, copy, size);
    int count2 = Get_Count(algo2, copy, size);

    Make_Copy(arr, copy, size);
    pair<double, double> time1 = Get_Time(algo1, copy, size);

    Make_Copy(arr, copy, size);
    pair<double, double> time2 = Get_Time(algo2, copy, size);

// ==== console output ====

    cout << "Algorithm: " << algo1 << " | " << algo2 << endl;
    cout << "Input file: " << givenInput << endl;
    cout << "Input size: " << size << endl;
    cout << "-------------------------\n";
    cout << setprecision(8) << fixed;
    cout << "Running time: " << time1.second << " miliseconds | " << time2.second << " milliseconds" << endl;
    cout << "Comparisions: " << count1 << " | " << count2 << endl;
// ==== Deallocate memory ====

    delete[] copy;
    delete[] arr;
}

void Handle_Command_5(string algo1, string algo2, int inputSize, string inputOrder) {

    string createdInput = Gen_Data_File(inputSize, inputOrder);
    if (createdInput == "err") {
        cout << "error occured while generating!!";
        return;
    }

    const string inputPath = "../input/" + createdInput;
    const string outputPath = "../output/output.txt";

    int size;
    int *arr = Load_Array(inputPath, size);
    int *copy = new int[size];

    Make_Copy(arr, copy, size);
    int count1 = Get_Count(algo1, copy, size);

    Make_Copy(arr, copy, size);
    int count2 = Get_Count(algo2, copy, size);

    Make_Copy(arr, copy, size);
    pair<double, double> time1 = Get_Time(algo1, copy, size);

    Make_Copy(arr, copy, size);
    pair<double, double> time2 = Get_Time(algo2, copy, size);

// ==== console output ====

    cout << "Algorithm: " << algo1 << " | " << algo2 << endl;
    cout << "Input Size: " << inputSize << endl;
    cout << "Input order: " << inputOrder << endl;
    cout << "-------------------------\n";
    cout << setprecision(8) << fixed;
    cout << "Running time: " << time1.second << " miliseconds | " << time2.second << " milliseconds" << endl;
    cout << "Comparisions: " << count1 << " | " << count2 << endl;
// ==== Deallocate memory ====

    delete[] copy;
    delete[] arr;

}
