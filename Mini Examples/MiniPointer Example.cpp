#include <iostream>
using namespace std;

/*

8) Bir program yazınız (Dosya ismi: 8.c veya 8.cpp). Bir integer (int) değişken tanımlayınız, istediğiniz değer ile initialize edebilirsiniz.

a. Değişkene bir integer pointer ile işaret ediniz ve pointer vasıtası ile değişkene yeni bir değer
atayınız.
b. Değişkenin ve pointer’ın gösterdiği adresleri ekrana yazdırınız.
c. Pointer’ı bir arttırınız (Örnek: p++;). Pointer’ın gösterdiği adresi ekrana yazdırınız. Bir arttırmış olmanıza rağmen sonuç nasıl çıktı neden? Açıklamanızı burada yazınız.

*/

int main(){

    int my_value = 123;

    //a. Değişkene bir integer pointer ile işaret ediniz ve pointer vasıtası ile değişkene yeni bir değer atayınız.
    int *pointer = &my_value;

    cout << "Pointer ile degiskene yeni deger atamadan once: " << my_value << endl;

    *pointer =  456;

    cout << "Pointer ile degiskene yeni deger atamadan sonra: " << my_value << endl;

    //b. Değişkenin ve pointer’ın gösterdiği adresleri ekrana yazdırınız.

    cout << "Degisken adresi: " << &my_value << " || Pointer adresi: " << pointer << endl;

    //Pointer’ı bir arttırınız (Örnek: p++;). Pointer’ın gösterdiği adresi ekrana yazdırınız. Bir arttırmış olmanıza rağmen sonuç nasıl çıktı neden? Açıklamanızı burada yazınız.

    (*pointer)++;
    cout << "Pointer gosterdigi adresi: " << pointer << "|| Pointer degeri: " << *pointer <<  endl;
}

//Değerlendirme: pointer'ı bir arttırdığımızda o pointer'ın işaret ettiği adresteki değişkenin değeri bir arttırmış olduk, Adres değerine dokunmamış olduk. Böylece pointer'ın adres değeri değişmedi. O adreste yer alan değişkenin değeri değişmiş oldu. Eğer adres değerini değiştirtmek isteseydik pointer++; şeklinde yazmamız gerekecekti. 

//Bu konuları kendi Github sayfamda da detaylıca ele aldım: https://github.com/fatmazayrek/From-scratch-to-expertise-Cpp/blob/main/Mini%20Examples/Pointers/Some%20difficult%20problems.cpp