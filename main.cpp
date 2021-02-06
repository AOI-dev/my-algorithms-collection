
#include "prototypes.h"
#include "libs.h"

using namespace std;

void get_time(void (* func)(array_t*, int, int), array_t* array, int left, int right)
{
    unsigned int start_time = clock();
    func(array, left, right);
    unsigned int end_time = clock();
    cout << end_time-start_time << " ms\n";
};

void get_time(void (* func)(array_t*, int), array_t* array, int length)
{
    unsigned int start_time = clock();
    func(array, length);
    unsigned int end_time = clock();
    cout << end_time-start_time << " ms\n";
};

void println(std::string s)
{
    std::cout << s << '\n';
}

void refill_array(array_t* array, array_t* array_example, int n)
{
    for (size_t i = 0; i<n; i++)
        array[i] = array_example[i];
}

void print(std::string s)
{
    std::cout << s;
}

void println(int s)
{
    std::cout << s << "\n";
}

int main()
{
    freopen("F:\\Desktop\\Algs\\Algorithms\\input.txt", "r", stdin);
//    ifstream fin;
//    fin.open("input.txt");
    const int n = 100000; //189766
    //fin >> n;
    //cin >> n;
    auto* array_example = new int[n];
    auto* array = new int[n];

    for (size_t i = 0; i<n; i++) {
        cin >> array_example[i];
        array[i] = array_example[i];
    }



//    unsigned int start_time = clock();
//  selectionSort_1(array, n);
//  selectionSort_2(array, n);
//	insertionSort(array, n);
//	mergeSort(array, 0, n - 1);
//	shellSort(array, n);
//	shakerSort(array, n);
//	quickSort(array, 0, n-1);
//    swap(array[0], array[1]);

//    println("selection sort 1");
//    get_time(selectionSort_1, array, n);
//    refill_array(array, array_example, n);
//
//    println("selection sort 2");
//    get_time(selectionSort_2, array, n);
//    refill_array(array, array_example, n);
//
//    println("insertion sort");
//    get_time(insertionSort, array, n);
//    refill_array(array, array_example, n);
//
//    println("merge sort");
//    get_time(mergeSort, array, 0, n-1);
//    refill_array(array, array_example, n);
//
//    println("quick sort");
//    get_time(quickSort, array, 0, n-1);
//    refill_array(array, array_example, n);
//
//    println("shell sort");
//    get_time(shellSort, array, n);
//    refill_array(array, array_example, n);
//
//    println("shaker sort");
//    get_time(shakerSort, array, n);
//    refill_array(array, array_example, n);

    println("heap sort");
    get_time(heapSort, array, n);
//    refill_array(array, array_example, n);

    srand(static_cast<unsigned int>(time(0)));
    int random_index = static_cast<int> (rand() % n);
    println("linear search");
    println(random_index);
    println(linear(array, n, array[random_index]));
    println("binary search");
    println(binary(array, n, array[random_index]));
    println("interpolation search");
    println(interpolation(array, n, array[random_index]));
    println("fibonacci search");
    println(fibonacci(array, n, array[random_index]));
//    unsigned int end_time = clock();

//    for (size_t i = 0; i < n; i++)
//    {
//        cout << array[i] << " ";
//    }
    cout << endl;
    cout << '\a';
}









