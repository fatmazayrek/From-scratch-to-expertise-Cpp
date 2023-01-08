#include <iostream>
#include <stack>
#include <queue>

using namespace std;

//BubleSort Algorithm

int *bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
        }
    }

    return arr;
}

int main()
{
    int arr[] = { 5, 1, 4, 2, 8, 58, 12, 9, 21, 63, 45, 3};
    int N = sizeof(arr) / sizeof(int);

    int *arr2 = bubbleSort(arr, N);

    for(int i=0; i<N; i++)
    {
        cout << arr2[i] << " ";
    }
}

/* Output will be: 1 2 3 4 5 8 9 12 21 45 58 63 */
//This example shows you how the bubble sort algorithm works and it is also an example of return array values.
