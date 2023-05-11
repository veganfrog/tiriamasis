//burbuliuko rikiavimo algoritmo implementacija 'JavaScript' programavimo kalboje
var n = 1000;
function swap(arr, xp, yp)
{
  var temp = arr[xp];
  arr[xp] = arr[yp];
  arr[yp] = temp;
}
function CreateRandomNumberArray()
{
  return Array.from({length: 1000}, () => Math.floor(Math.random() * 100000000));
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
function RunBubbleSort()
{
  var arr = CreateRandomNumberArray();
  bubbleSort(arr,n)
  //console.log("Sorted array:");
  //printArray(arr, n);
}
//RunBubbleSort();

const t0 = performance.now();
var iterations = 10000;
for(var i = 0; i < iterations; i++)
{
  RunBubbleSort();
}
const t1 = performance.now();
console.log(`BubbleSort: ${t1 - t0} ms`);
var averageTime = (t1-t0)/iterations;
console.log(`Average time: ${averageTime} ms`)

//console.log("UnSorted array:");
//printArray(arr, n);
//bubbleSort(arr, n);
//console.log("Sorted array:");
//printArray(arr, n);

