#include <iostream>
#include <sstream>
using namespace std;

/*

3) Bir program yazınız (Dosya ismi: 3.c veya 3.cpp). Aşağıdaki değişken üzerinde birbirinden bağımsız
bitwise işlemler yapacaksınız.

    int val = 0xCAFE

a. LSB ilk bitin 1 olup olmadığını kontrol ediniz
b. 0xCAFE değerini 0xCAF olacak şekilde modifiye ediniz

*/

void a_controlLSB(int val)
{

    int controlBit = 1;
    int control = 1 & val;   

    if(control == 1){
        cout << "LSB'i 1'dir. " << endl;
    }
    else{
        cout << "LSB'i 0'dir. " << endl;
    }
}

int b_modify(int val)
{

    return val >> 4;
}

int main()
{
    ostringstream s;

    int val = 0xCAFE;

    // a'nın cevabı:
    a_controlLSB(val);

    // b'nin cevabı:
    int modify = b_modify(val);

    s << "0x" << hex << modify;
    string result = s.str();
    cout << "new int is: " << result;
}
