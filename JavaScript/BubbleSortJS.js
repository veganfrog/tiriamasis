//burbuliuko rikiavimo algoritmo implementacija 'JavaScript' programavimo kalboje
function swap(arr, xp, yp)
{
  var temp = arr[xp];
  arr[xp] = arr[yp];
  arr[yp] = temp;
}
function bubbleSort( arr, n)
{
  var i, j;
  for (i = 0; i < n-1; i++)
  {
    for (j = 0; j < n-i-1; j++)
    {
      if (arr[j] > arr[j+1])
      {
        swap(arr,j,j+1); 
      }
    }

  }
}
function printArray(arr, size)
{
  var i;
  for (i=0; i < size; i++)
    console.log(arr[i]+ " ");
  console.log("\n");
}
var arr = [5, 1, 4, 2, 8];
var n = 5;
console.log("UnSorted array:");
printArray(arr, n);
bubbleSort(arr, n);
console.log("Sorted array:");
printArray(arr, n);

