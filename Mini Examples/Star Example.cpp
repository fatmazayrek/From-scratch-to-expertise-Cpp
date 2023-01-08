#include <iostream>
using namespace std;

/*

5) Bir program yazınız (Dosya ismi: 5.c veya 5.cpp). Ekrana 20 satır * karakteri yazdırınız. İlk satırda 20 adet yıldız olmalı ve devamındaki her satırda yıldız sayısı bir azalmalı. (İkinci satır 19 yıldız, üçüncü satır 18 yıldız gibi)

*/


int main()
{

    int i, j;

    for(i=20; i>0; i--){
        
        for(j=0; j<i; j++){
           
            cout << " * ";
            
        }

        cout << endl;
    }
}
