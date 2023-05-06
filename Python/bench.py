#burbuliuko rikiavimo algoritmo implementacija 'Python' programavimo kalboje
import pyperf
import sys
import random

def bubbleSort(arr):
    n = len(arr)
 
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
 
def CreateRandomNumberArray(amount):
    return [random.randint(0,sys.maxsize) for _ in range(amount)]

def RunBubbleSort():
  arr = CreateRandomNumberArray(1000)
 
  bubbleSort(arr)
 
  #print("Sorted array is:")
  #for i in range(len(arr)):
      #print("%d" % arr[i], end=" ")

runner = pyperf.Runner()
runner.bench_func('sorting bubbles', RunBubbleSort)