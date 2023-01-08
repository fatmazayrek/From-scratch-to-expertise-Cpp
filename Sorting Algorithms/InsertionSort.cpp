#include <iostream>
#include <stack>
#include <queue>

using namespace std;

//Insertion Algorithm

int *insertionSort(int arr[], int n)
{
    int i, key, j;

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }

    return arr;
}

int main()
{
    int arr[] = { 5, 1, 4, 2, 8, 58, 12, 9, 21, 63, 45, 3};
    int N = sizeof(arr) / sizeof(int);

    int *arr2 = insertionSort(arr, N);

    for(int i=0; i<N; i++)
    {
        cout << arr2[i] << " ";
    }
}

/* Output will be: 1 2 3 4 5 8 9 12 21 45 58 63 */
//This example shows you how the Insertion sort algorithm works and it is also an example of return array values.
