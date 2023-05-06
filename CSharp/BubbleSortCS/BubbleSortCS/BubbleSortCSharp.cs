using System;
 
class burbuliukas {
    public void bubbleSort(int[] arr)
    {
        int n = arr.Length;
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
    }

    public void printArray(int[] arr)
    {
        int n = arr.Length;
        for (int i = 0; i < n; ++i)
            Console.Write(arr[i] + " ");
        Console.WriteLine();
    }

    //public static void Main()
    //{
    //    int[] arr = { 5, 1, 4, 2, 8};
    //    bubbleSort(arr);
    //    Console.WriteLine("Sutvarkytas masyvas");
    //    printArray(arr);
    //}
}