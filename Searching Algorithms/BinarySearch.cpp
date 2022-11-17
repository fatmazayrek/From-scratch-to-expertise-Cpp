#include <iostream>
#include <stack>
#include <queue>

using namespace std;
template <typename T>

//Binary Search Algorithm --->

int binarySearch(T *arr, T element, int size){

    int h = size-1 , l=0, mid;

    while(h - l >= 0){
        mid = l + (h - l) / 2;

        if(arr[mid] == element){
            return mid;
        }
        else if(arr[mid] < element){
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }

    return -1;
}

int* selectionSort(int arr[], int n)
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

    return arr;
}


int main()
{
    int arr[] = {10, 45, 78, 7, 9, 4, 5, 2, 21, 22, 369, 89, 52, 41, 15};
    int element;
    int size = sizeof(arr) / sizeof(int);
    int *sorted= selectionSort(arr, size);

    cout << "Enter the element that will search: ";
    cin >> element;

    int result = binarySearch(sorted, element, size);
    cout << result;


}
/* Output will be:
        Sorted list is below:
        2 4 5 7 9 10 15 21 22 41 45 52 78 89 369
        Enter the element that will search: 22
        22 is at the 8. index
*/
//Note: This Example can help you to understand Binary Search Algorithm and also help to understand using pointers. If you want the binary search to an array, you should sort the array first.
