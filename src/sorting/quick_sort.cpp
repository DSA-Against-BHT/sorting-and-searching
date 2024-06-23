#include "quick_sort.hpp"

int Partition(int* arr, int low, int high){
  //choose the pivot
  int pivot = arr[high];

  //Index of smaller element and Indicate
  //the right position of pivot found so far
  int i = low - 1;
  
  for(int j = low; j <= high - 1; j++){
    //If current element is smaller than the pivot
    if(arr[j] < pivot){
      //Increment index of smaller element
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);
  i++;
  return i;
}

void Qsort(int* arr, int low, int high){
  // when low is less than high
  if(low < high){
    // pi is the partition return index of pivot
    
    int pi = Partition(arr, low, high);
    
    //Recursion Call
    //smaller element than pivot goes left and
    //higher element goes right
    Qsort(arr, low, pi - 1);
    Qsort(arr, pi + 1, high);
  }
}

int Partition_Count(int* arr, int low, int high, int& count){
  int pivot = arr[high];
  int i = low - 1;
  
  for(int j = low; ++count && j <= high - 1; j++){
    if(++count && arr[j] < pivot){
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);
  i++;
  return i;
}


void Qsort_Count(int* arr, int low, int high, int& count){
  if(++count && low < high){    
    int pi = Partition_Count(arr, low, high, count);
    Qsort_Count(arr, low, pi - 1, count);
    Qsort_Count(arr, pi + 1, high, count);
  }
}

/*
This function is used to sort the array using quick sort
*/
void Quick_Sort(int* arr, int n){
    Qsort(arr, 0, n - 1);
}

/*
This function is used to sort the array using quick sort and count the number of comparisons
*/
void Quick_Sort_Count(int* arr, int n, int& count){
    count = 0;
    Qsort_Count(arr, 0, n - 1, count);
}
