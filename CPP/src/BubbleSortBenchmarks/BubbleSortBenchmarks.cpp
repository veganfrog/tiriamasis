// StringBenchmarks.cpp : Defines the entry point for the application.
//
#include <iostream>
#include <benchmark/benchmark.h>
#include "StringBenchmarks.h"

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

void RunBubbleSort(benchmark::State& state)
{
    for (auto _ : state){       
        int arr[] = { 5, 1, 4, 2, 8 };
        int N = sizeof(arr) / sizeof(arr[0]);
        bubbleSort(arr, N);
        // cout << "Sutvarkytas masyvas \n";
        //printArray(arr, N);
    }
}
// Register the function as a benchmark
BENCHMARK(RunBubbleSort);
BENCHMARK_MAIN();