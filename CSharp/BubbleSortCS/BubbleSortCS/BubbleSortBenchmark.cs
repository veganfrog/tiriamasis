using AutoFixture;
using BenchmarkDotNet.Attributes;
using BenchmarkDotNet.Jobs;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BubbleSortCS
{
    //[SimpleJob(RuntimeMoniker.Net60)]
    [MediumRunJob]
    //[HtmlExporter]
    public class BubbleSortBenchmark
    {
        private readonly Fixture _fixture;
        private readonly burbuliukas _burbuliukas;
        public BubbleSortBenchmark()
        {
            _fixture = new Fixture();
            _burbuliukas = new burbuliukas();
        }
        [Benchmark]
        public void BubbleSort()
        {
            var arr = _fixture.CreateMany<int>(1000).ToArray();
            //int[] arr = { 5, 1, 4, 2, 8 };
            _burbuliukas.bubbleSort(arr);
            //Console.WriteLine("sutvarkytas masyvas");
            //_burbuliukas.printArray(arr);
        }
    }
}
