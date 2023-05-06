#burbuliuko rikiavimo algoritmo implementacija 'Python' programavimo kalboje
import random
import sys
def bubbleSort(arr):
    n = len(arr)
 
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
 
def CreateRandomNumberArray(amount):
    return [random.randint(0, sys.maxsize) for _ in range(amount)]
 
if __name__ == "__main__":
  arr = CreateRandomNumberArray(1000)
 
  bubbleSort(arr)
 
  print("Sorted array is:")
  for i in range(len(arr)):
      print("%d" % arr[i], end=" ")