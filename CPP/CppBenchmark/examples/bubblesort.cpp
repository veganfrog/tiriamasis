//burbuliuko rikiavimo algoritmo implementacija 'C++' programavimo kalboje

#include <iostream>
#include "benchmark/cppbenchmark.h"
#include <math.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// int* CreateRandomNumberArray()
// {
//     int arr[1000];

//     srand((unsigned int)time(NULL));

//     for (int i = 0;i < 1000;i++)
//     {
//         int num = rand();
//         arr[i] = num;
//     }

//     return arr;
// }
void RunBubbleSort()
{
    int arr[1000];

    srand((unsigned int)time(NULL));

    for (int i = 0;i < 1000;i++)
    {
        int num = rand();
        arr[i] = num;
    }
    //int* arr;
    //arr = CreateRandomNumberArray();
    //int arr[] = { 5, 1, 4, 2, 8 };
    int N = sizeof(1000) / sizeof(arr[0]);
    bubbleSort(arr, N);
    // cout << "Sutvarkytas masyvas \n";
    //printArray(arr, N);
}
BENCHMARK("bubblesort")
{
    RunBubbleSort();
}

BENCHMARK_MAIN()