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
char* generateDataFile(char* inputSize, char* inputOrder){
    char* filePath = (char*)malloc(100);
    int size = atoi(inputSize);
    sprintf(filePath, "%s%s.txt", inputOrder+1, inputSize);

    std::ofstream file(filePath);
    if(!file.is_open()){
        std::cout << "Error opening file" << std::endl;
        return NULL;
    }
    
    file << size << std::endl;

    //Random
    if(strcmp(inputOrder, "-rand") == 0)
    {
        std::cout<< "Generating random data...";
        for(int i = 0; i < size; i++){
            file << rand() % 100000000 << " ";
        }
    }
    //Sorted
    else if(strcmp(inputOrder, "-sorted") == 0)
    {
        std::cout<< "Generating sorted data...";
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
    return filePath;
}
