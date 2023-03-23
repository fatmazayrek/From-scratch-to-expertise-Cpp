#include <iostream>
#include <cfloat>
using namespace std;

/* 

1) Aşağıdaki veri tiplerinin kaç byte olduğunu, alabilecekleri minimum ve maksimum değerleri karşılarına yazınız. İşletim sisteminizin 32 bit veya 64 bit olduğunu belirtiniz.
a. char
b. unsigned char
c. short
d. int
e. unsigned int
f. unsigned long
g. float 

*/

//Not: Bu sonuçlar 64 bit'lik işletim sistemine aittir.

int main()
{
    cout << "char veri tipi ------> " <<  endl << "Byte: " << sizeof(char) << endl << "Bit: " << sizeof(char)*8 << endl << "Max: " << CHAR_MAX << endl << "Min: " << CHAR_MIN << endl;

    cout << endl << "Unsigned char veri tipi ------> " <<  endl << "Byte: " << sizeof(unsigned char) << endl << "Bit: " << sizeof(unsigned char)*8 << endl << "Max: " << UCHAR_MAX << endl << "Min: " << 0 << endl;    //Unsigned char veri tipi unsigned olmasından dolayı minimum değer olarak '0' değerini alır. 

    cout << endl << "short veri tipi ------> " <<  endl << "Byte: " << sizeof(short) << endl << "Bit: " << sizeof(short)*8 << endl << "Max: " << SHRT_MAX << endl << "Min: " << SHRT_MIN << endl;

    cout << endl <<  "int veri tipi ------> " <<  endl << "Byte: " << sizeof(int) << endl << "Bit: " << sizeof(int)*8 << endl << "Max: " << INT_MAX << endl << "Min: " << INT_MIN << endl;

    cout << endl << "Unsigned int veri tipi ------> " <<  endl << "Byte: " << sizeof(unsigned int) << endl << "Bit: " << sizeof(unsigned int)*8 << endl << "Max: " << UINT_MAX << endl << "Min: " << 0 << endl;    //Unsigned int veri tipi unsigned olmasından dolayı minimum değer olarak '0' değerini alır. 
    
    cout << endl << "Unsigned long veri tipi ------> " <<  endl << "Byte: " << sizeof(unsigned long) << endl << "Bit: " << sizeof(unsigned long)*8 << endl << "Max: " << ULONG_MAX << endl << "Min: " << 0 << endl;   //Unsigned long veri tipi unsigned olmasından dolayı minimum değer olarak '0' değerini alır. 

    cout << endl << "float veri tipi ------> " <<  endl << "Byte: " << sizeof(float) << endl << "Bit: " << sizeof(float)*8 << endl << "Max: " << FLT_MAX << endl << "Min: " << FLT_MIN << endl;

}
