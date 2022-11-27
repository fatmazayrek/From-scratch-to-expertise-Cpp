#include <iostream>
using namespace std;

/* 

2) Aşağıdaki pointer tiplerinin kaç byte olduğunu karşılarına yazınız. İşletim sisteminizin kaç bit
olduğunu belirtiniz. Çıkan sonucu değerlendirin.
a. char *
b. unsigned char *
c. int *
d. unsigned int *

*/

//Not: Bu sonuçlar 64 bit'lik işletim sistemine aittir.

int main(){
    cout << "char* tipi ------> " <<  endl << "Byte: " << sizeof(char*) << endl << "Bit: " << sizeof(char*)*8 << endl;

    cout << endl << "Unsigned char* tipi ------> " <<  endl << "Byte: " << sizeof(unsigned char*) << endl << "Bit: " << sizeof(unsigned char*)*8 << endl;

    cout << endl << "int* tipi ------> " <<  endl << "Byte: " << sizeof(int*) << endl << "Bit: " << sizeof(int*)*8 << endl;

    cout << endl << "Unsigned int* tipi ------> " <<  endl << "Byte: " << sizeof(unsigned int*) << endl << "Bit: " << sizeof(unsigned int*)*8 << endl;
}

//Bilgisayarım 64 bit'lik işlemciye sahiptir yani bilgisayarımda veriler, 64 bitlik diziler halinde saklanmaktadır. Bu örnekte de  her sonucun 8 byte, 64 bit çıktığı gözlemlenir. Bu çok doğaldır çünkü burda her bir değişken, bellek adresini tutan bir pointer'dır. Pointer'lar değer olarak tanımlandığı türdeki değişkenin bellek adresini saklar.