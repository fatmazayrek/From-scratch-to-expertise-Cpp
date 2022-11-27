#include <iostream>
using namespace std;

/* 
6) Bir program yazınız (Dosya ismi: 6.c veya 6.cpp). İlk aşamada 1000 elemanlı bir liste (array) tanımlayınız. Listedeki değerleri bir döngü içinde 0’dan başlayıp sıralı artacak şekilde giriniz. (İlk eleman 0, ikinci eleman 1 gibi…) Ardından tüm liste elemanlarını toplayıp sonucu ekrana bastırınız.

*/

int main(){

    int array[1000];
    int sum = 0;

    for(int i=0; i<1000; i++){
        array[i] = i;
        sum += array[i];
    }

    cout << "Tum liste elemanlari: " << sum << endl;
} 