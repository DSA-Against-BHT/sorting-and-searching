#include "algo_mode.hpp"

const int TIME = 1;
const int COMP = 2;
const int BOTH = 3;

int Parse_Param(const string outputParameter) {
    if (outputParameter == "-both") return BOTH;
    if (outputParameter == "-time") return TIME;
    if (outputParameter == "-comp") return COMP;
    return BOTH;
}


namespace ORDER {
    /*
    Run the sorting algorithm with the given datafile and outputParameter
    */
    void Run_Sort(string datafile, string algo, string outputParameter, int printSizeOrder = 0) {
        const string inputPath = "../input/" + datafile;

        int size;
        int *arr = Load_Array(inputPath, size);
        int *copy = new int[size];

        if (printSizeOrder) {
            if (printSizeOrder & 1)
                cout << "Input size: " << size << endl;
            if (!(printSizeOrder & 2))
                cout << "-------------------------\n";
        }

        if (Parse_Param(outputParameter) & TIME) {
            Make_Copy(arr, copy, size);
            pair <double, double> time = Get_Time(algo, copy, size);
             cout << setprecision(8) << fixed;
            cout << "Running time: " << time.second << " miliseconds" << endl;
        }

        if (Parse_Param(outputParameter) & COMP) {
            Make_Copy(arr, copy, size);
            int count = Get_Count(algo, copy, size);
            cout << "Comparisons: " << count << endl;
        }

        delete[] arr;
        delete[] copy;
    }

    void Randomize(int inputSize, string outputParam, string algo) {
        const string filename = "input_1.txt";

        cout << "Input order: Randomize" << endl;
        cout << "-------------------------" << endl;

        // gen the file
        int err = Gen_Data_File(inputSize, "-rand", filename);
        if (err == -1) {
            cout << "error occured while generating!!";
            return;
        }
        Run_Sort(filename, algo, outputParam);
    }

    void Nearly_Sorted(int inputSize, string outputParam, string algo) {
        const string filename = "input_2.txt";

        cout << "Input order: Nearly Sorted" << endl;
        cout << "-------------------------" << endl;

        // gen the file
        int err = Gen_Data_File(inputSize, "-nsorted", filename);
        if (err == -1) {
            cout << "error occured while generating!!";
            return;
        }
        Run_Sort(filename, algo, outputParam);
    }

    void Sorted(int inputSize, string outputParam, string algo) {
        const string filename = "input_3.txt";

        cout << "Input order: Sorted" << endl;
        cout << "-------------------------" << endl;

        // gen the file
        int err = Gen_Data_File(inputSize, "-sorted", filename);
        if (err == -1) {
            cout << "error occured while generating!!";
            return;
        }
        Run_Sort(filename, algo, outputParam);
    }

    void Reverse(int inputSize, string outputParam, string algo) {
        const string filename = "input_4.txt";

        cout << "Input order: Reverse" << endl;
        cout << "-------------------------" << endl;

        // gen the file
        int err = Gen_Data_File(inputSize, "-rev", filename);
        if (err == -1) {
            cout << "error occured while generating!!";
            return;
        }
        Run_Sort(filename, algo, outputParam);
    }
}

void Handle_Command_1(string algo, string givenInput, string outputParameter) {
    cout << "Algorithm: " << algo << endl;
    cout << "Input file: " << givenInput << endl;
    ORDER::Run_Sort(givenInput, algo, outputParameter, 1);
}

void Handle_Command_2(string algo, int inputtSize, string inputOrder, string outputParameter) {
    cout << "Algorithm: " << algo << endl;
    cout << "Input size: " << inputtSize << endl;
    if (inputOrder == "-rand") {
        ORDER::Randomize(inputtSize, outputParameter, algo);
    } else if (inputOrder == "-nsorted") {
        ORDER::Nearly_Sorted(inputtSize, outputParameter, algo);
    } else if (inputOrder == "-sorted") {
        ORDER::Sorted(inputtSize, outputParameter, algo);
    } else if (inputOrder == "-rev") {
        ORDER::Reverse(inputtSize, outputParameter, algo);
    } else {
        cout << "Invalid input order" << endl;
    }
}

// namespace

void Handle_Command_3(string algo, int inputtSize, string outputParameter) {
    cout << "Algorithm: " << algo << endl;
    cout << "Input size: " << inputtSize << endl;

    cout << "\n";
    ORDER::Randomize(inputtSize, outputParameter, algo);
    cout << "\n";
    ORDER::Nearly_Sorted(inputtSize, outputParameter, algo);
    cout << "\n";
    ORDER::Sorted(inputtSize, outputParameter, algo);
    cout << "\n";
    ORDER::Reverse(inputtSize, outputParameter, algo);
}
