#include <iostream>
using namespace std;

void change(int **doublepointer, int a)
{
 *doublepointer = &a;
}

int main()
{
    int a = 12, b = 90, c = 67;
    int *p = &a;
    int **pp = &p;

    cout << "a address: " << &a << endl << "a value: " << a << endl << "b address: " << &b << endl << "b value: " << b << endl << "c address: " << &c << endl << "c value" << c << endl << "p value: " << *p << endl << "p address: " << p << endl << "pp value: " << **pp << endl << "pp address: " << *pp << endl;

    cout << "*****************" << endl;

    change(pp, b);

     cout << "a address: " << &a << endl << "a value: " << a << endl << "b address: " << &b << endl << "b value: " << b << endl << "c address: " << &c << endl << "c value" << c << endl << "p value: " << *p << endl << "p address: " << p << endl << "pp value: " << **pp << endl << "pp address: " << *pp << endl;

    cout << "*****************" << endl;

    *pp = &c;

    cout << "a address: " << &a << endl << "a value: " << a << endl << "b address: " << &b << endl << "b value: " << b << endl << "c address: " << &c << endl << "c value" << c << endl << "p value: " << *p << endl << "p address: " << p << endl << "pp value: " << **pp << endl << "pp address: " << *pp << endl;
}