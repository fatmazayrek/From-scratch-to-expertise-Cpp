#include <iostream>
#include <stack>
#include <queue>

using namespace std;
template <typename T>

//Linear Search Algorithm --->

int linearSearch(T arr[], T element, int size)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 45, 78, 7, 9, 4, 5, 2, 21, 22, 369, 89, 52, 41, 15};
    int element;
    int size = sizeof(arr) / sizeof(int);

    while(true)
    {
        cout << "Please enter the number that will search: ";
        cin >> element;

        int result = linearSearch(arr, element, size);

        if(result != -1)
        {
            cout << element << " is found at " << result << ". index" ;
        }
        else
        {
            cout << element << "is not found at this array.";
        }
    }
}

//Note: This Example can help you to understand Linear Search Algorithm and also help to understand using template
