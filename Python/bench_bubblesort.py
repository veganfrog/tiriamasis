#burbuliuko rikiavimo algoritmo implementacija 'Python' programavimo kalboje

def bubbleSort(arr):
    n = len(arr)
 
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
 
def bubble_sort():
  arr = [5, 1, 4, 2, 8]
 
  bubbleSort(arr)
 
  print("Sorted array is:")
  for i in range(len(arr)):
      print("%d" % arr[i], end=" ")

def bubble_sort1():
  arr = [5, 1, 4, 2, 8]
 
  bubbleSort(arr)
 
  #print("Sorted array is:")
  for i in range(len(arr)):
      print("%d" % arr[i], end=" ")



__benchmarks__ = [
    (bubble_sort1, bubble_sort, "sorting bubbles")
]