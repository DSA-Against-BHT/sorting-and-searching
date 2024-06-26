#include "flash_sort.hpp"

void Fsort(int* arr, int n){
    // Find the minimum and maximum values in the array
    int min_val = arr[0];
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
    }

    // Create the distribution array
    int m = static_cast<int>(0.45 * n);
    int* distribution = new int[m + 1]();

    // Calculate the distribution
    for (int i = 0; i < n; i++) {
        int index = static_cast<int>((m - 1) * ((double)(arr[i] - min_val) / (max_val - min_val)));
        distribution[index]++;
    }

    // Calculate the starting positions
    for (int i = 1; i < m; i++)
        distribution[i] += distribution[i - 1];

    // Perform the flash sort
    int i = 0;
    int j = m - 1;
    int k = n - 1;
    int threshold = static_cast<int>(0.25 * n);

    while (k > threshold) {
        while (i > distribution[j] - 1) {
            i++;
            j = static_cast<int>((m - 1) * ((double)(arr[i] - min_val) / (max_val - min_val)));
        }

        int flash = arr[i];

        while (i != distribution[j]) {
            j = static_cast<int>((m - 1) * ((double)(flash - min_val) / (max_val - min_val)));

            int temp = arr[distribution[j] - 1];
            arr[distribution[j] - 1] = flash;
            flash = temp;

            distribution[j]--;
            k--;
        }
    }

    // Perform the insertion sort
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    // Free the memory
    delete[] distribution;
}

void Fsort_Count(int* arr, int n, long long& count){
    int min_val = arr[0];
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (++count && arr[i] < min_val) min_val = arr[i];
        if (++count && arr[i] > max_val) max_val = arr[i];
    }

    int m = static_cast<int>(0.45 * n);
    int* distribution = new int[m + 1]();

    for (int i = 0; ++count && i < n; i++) {
        int index = static_cast<int>((m - 1) * ((double)(arr[i] - min_val) / (max_val - min_val)));
        distribution[index]++;
    }
    for (int i = 1; ++count && i < m; i++)
        distribution[i] += distribution[i - 1];

    int i = 0;
    int j = m - 1;
    int k = n - 1;
    int threshold = static_cast<int>(0.25 * n);

    while (++count && k > threshold) {
        while (++count && i > distribution[j] - 1) {
            i++;
            j = static_cast<int>((m - 1) * ((double)(arr[i] - min_val) / (max_val - min_val)));
        }

        int flash = arr[i];
        while (++count && i != distribution[j]) {
            j = static_cast<int>((m - 1) * ((double)(flash - min_val) / (max_val - min_val)));
            int temp = arr[distribution[j] - 1];
            arr[distribution[j] - 1] = flash;
            flash = temp;
            distribution[j]--;
            k--;
        }
    }
    for (int i = 1; ++count && i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (++count && j >= 0 && ++count && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    delete[] distribution;
}

/*
This function is used to sort the array using flash sort
*/
void Flash_Sort(int* arr, int n){
    Fsort(arr, n);
}

/*
This function is used to sort the array using flash sort and count the number of comparisons
*/
void Flash_Sort_Count(int* arr, int n, long long& count){
    count = 0;
    Fsort_Count(arr, n, count);
}