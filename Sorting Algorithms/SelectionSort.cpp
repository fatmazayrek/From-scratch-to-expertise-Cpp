#include <iostream>
#include <stack>
#include <queue>

using namespace std;

//SelectionSort Algorithm

void *selectionSort(int *arr, int n)
{
    int i, j, temp, min_index;

    for (i = 0; i < n-1; i++)
        {
            min_index = i;

            for (j = i+1; j < n; j++){

                if (arr[j] < arr[min_index]){
                    min_index = j;
                }
            }

            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }

    return nullptr;
}

int main()
{
    int arr[] = { 5, 1, 4, 2, 8, 58, 12, 9, 21, 63, 45, 3};
    int N = sizeof(arr) / sizeof(int);

    selectionSort(arr, N);
    
    for(int i=0; i<N; i++){
        cout << arr[i] << " ";
    }
}

/* Output will be: 1 2 3 4 5 8 9 12 21 45 58 63 */
//This example shows you how the Selection sort algorithm works and it is also an example of return array values.
