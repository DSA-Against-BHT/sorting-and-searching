#include "gen.hpp"



/*
    Parameters:
    +inputSize <char*> - the size of the input
    +inputOrder<char*>  -rand, -sorted, -rev, -nsorted
    Output: filePath<char*> - the path to the file
    File format:
        line 1: size of the input
        line 2: each element of the input is separated by a space
*/
string Gen_Data_File(int inputSize, string input){
    char* filePath = (char*)malloc(100);
    char* inputOrder = new char[input.size() + 1];
    for (int i = 0 ; i < input.size(); i ++)
        inputOrder[i] = input[i];
    inputOrder[input.size()] = '\0';

    int size = inputSize;
    // cout << input << ' ' << inputOrder << '\n';
    sprintf(filePath, "../input/%s%d.txt", inputOrder + 1, inputSize);
    // cout << filePath << '\n';
    std::ofstream file(filePath);
    if(!file.is_open()){
        std::cout << "Error opening file" << std::endl;
        return "err";
    }

    file << size << std::endl;

    //Random
    if(strcmp(inputOrder, "-rand") == 0)
    {
        srand(time(0));
        for(int i = 0; i < size; i++){
            file << rand() % 1000000 << " ";
        }
    }
    //Sorted
    else if(strcmp(inputOrder, "-sorted") == 0)
    {
        for(int i = 0; i < size; i++){
            file << i<< " ";
        }
    }
    //Nearly sorted
    else if(strcmp(inputOrder, "-nsorted") == 0)
    {
        for(int i = 0; i < size; i++){
            file << i* 10 + rand() % 30<< " ";
        }

    }
    //Reverse
    else if(strcmp(inputOrder, "-rev") == 0)
    {
        for(int i = size; i > 0; i--){
            file << i << " ";
        }
    }
    else
    {

        file.close();
        free(filePath);
        return NULL;
    }
    file.close();

    string ret = "nsorted10.txt";
    return ret;
}
