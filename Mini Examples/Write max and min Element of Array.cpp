#include <iostream>
using namespace std;

/* 
7) Bir program yazınız (Dosya ismi: 7.c veya 7.cpp). 10 elemanlı bir liste (array) oluşturunuz ve listedeki en küçük ve en büyük elemanları ekrana yazdırınız.

Örnek liste: 5, 200, 10, 7, 300, 9, 25, 50, 2, 100

*/

//Bu program için selection sort metodu kullanmayı tercih etim. selectionSort() metodu içerisine gönderilen array'i sıralanmış bir şekilde geri dönmektedir. 
void *selectionSort(int *arr, int n){

    int i, j, temp, min_index;

    for (i = 0; i < n-1; i++){

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

int main(){

    int array[] = {5, 200, 10, 7, 300, 9, 25, 50, 2, 100};
    int N = sizeof(array) / sizeof(int);

    selectionSort(array, N);

    cout << "Listedeki en kucuk eleman: " << array[0] << " ||  Listedeki en buyuk eleman: " << array[N-1];   
}