#include "gen.hpp"



/*
    Parameters: 
    +inputSize <> - the size of the input 
    +inputOrder<char*>  -rand, -sorted, -rev, -nsorted
    Output: filePath<char*> - the path to the file
    File format:
        line 1: size of the input
        line 2: each element of the input is separated by a space
*/
string Gen_Data_File(int inputSize, char* inputOrder){
    string fileName, filePath;
    int* arr = new int[inputSize];
    
    //Random
    if(strcmp(inputOrder, "-rand") == 0)
    {
        GenerateRandomData(arr, inputSize);
        fileName = "input_1.txt";    
    }
    //Nearly sorted
    else if(strcmp(inputOrder, "-nsorted") == 0)
	{
		GenerateNearlySortedData(arr, inputSize);
		fileName = "input_2.txt";
	}
	//Sorted
	else if(strcmp(inputOrder, "-sorted") == 0)
	{
		GenerateSortedData(arr, inputSize);
		fileName = "input_3.txt";
	}
	//Reverse
	else if(strcmp(inputOrder, "-rev") == 0)
	{
		GenerateReverseData(arr, inputSize);
		fileName = "input_4.txt";
	}
	else
	{
		cout << "Invalid input order" << endl;
		delete[] arr;
		return "";
	}

	//Write to file
	filePath = "input/" + fileName;
	ofstream file(filePath);
	if(file.is_open())
	{
		file << inputSize << endl;
		for(int i = 0; i < inputSize; i++)
		{
			file << arr[i] << " ";
		}
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
		return "";
	}
	return filePath;
}

void GenerateRandomData(int a[], int n)
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < n; i++)
	{
		a[i] = rand()%n;
	}
}


// Hàm phát sinh mảng dữ liệu ngẫu nhiên
void GenerateRandomData(int a[], int n)
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < n; i++)
	{
		a[i] = rand()%n;
	}
}

// Hàm phát sinh mảng dữ liệu có thứ tự tăng dần
void GenerateSortedData(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = i;
	}
}

// Hàm phát sinh mảng dữ liệu có thứ tự ngược (giảm dần)
void GenerateReverseData(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = n - 1 - i;
	}
}

// Hàm phát sinh mảng dữ liệu gần như có thứ tự
void GenerateNearlySortedData(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = i;
	}
	srand((unsigned int) time(NULL));
	for (int i = 0; i < 10; i ++)
	{
		int r1 = rand()%n;
		int r2 = rand()%n;
		swap(a[r1], a[r2]);	
	}
}
