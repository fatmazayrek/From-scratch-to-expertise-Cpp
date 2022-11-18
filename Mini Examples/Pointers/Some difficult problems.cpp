#include <iostream>
#include <stack>
#include <queue>
#include <string.h>

using namespace std;
// In this example, I wanted to explain a few indicators that have caused some confusion regarding Pointers.
int main()
{
    int x= 10, y = 9;

// int * :  is a mutable pointer to a mutable int. Lets see this in an example ---->

    int *k;

    k = &y;
    cout << "address of k:" << k << endl << "value of k: " << *k << endl << "address of y: " << &y << endl << "value of y: " << y  << endl <<  "value of x: " << x << endl;

    cout << "-----------------------------------" << endl;

    k = &x;
    cout << "address of k:" << k << endl << "value of k: " << *k << endl << "address of x: " << &x << endl << "value of x: " <<  x << endl;

    cout << "-----------------------------------" << endl;

    *k = y;
    cout << "address of k:" << k << endl << "value of k: " << *k << endl << "address of y: " << &y << endl << "value of y: " << y << endl <<  "value of x: " << x << endl;

/* Output will be:
    address of k:0x62fe10
    value of k: 9
    address of y: 0x62fe10
    value of y: 9
    value of x: 10
    -----------------------------------
    address of k:0x62fe14
    value of k: 10
    address of x: 0x62fe14
    value of x: 10
    -----------------------------------
    address of k:0x62fe14
    value of k: 9
    address of y: 0x62fe10
    value of y: 9
    value of x: 9
*/

// cons int* : is a mutable pointer to an immutable int. You cannot change the contents of the location(s) this pointer points to. Lets see this in an example --->

    const int *k = &x;
    cout << "address of k:" << k << endl << "value of k: " << *k << endl << "address of x: " << &x << endl << "value of x: " <<  x << endl;

    cout << "-----------------------------------" << endl;

//    *k = y; //when you write this, compiler will give you an error. Because you can not change value of k, you can change just address value;

    k = &y;   //when the address of k is changed, value of k will change.
    cout << "address of k:" << k << endl << "value of k: " << *k << endl << "address of x: " << &x << endl << "value of x: " <<  x << endl;

/* Output will be:
        address of k:0x62fe14
        value of k: 10
        address of x: 0x62fe14
        value of x: 10
        -----------------------------------
        address of k:0x62fe10
        value of k: 9
        address of x: 0x62fe14
        value of x: 10
*/

// int *const :  is an immutable pointer (it cannot point to any other location) but the contents of the location at which it points are mutable. Lets see this in an example --->

    int * const k = &x;
    cout << "address of k:" << k << endl << "value of k: " << *k << endl << "address of x: " << &x << endl << "value of x: " <<  x << endl;

    cout << "-----------------------------------" << endl;

//    k = &y; //when you write this, compiler will give you an error. Because you can not change address of k, you can change just value of k;

    *k = y;
    cout << "address of k:" << k << endl << "value of k: " << *k << endl << "address of y: " << &y << endl << "value of y: " << y << endl <<  "value of x: " << x << endl;

/* Output will be:
    address of k:0x62fe14
    value of k: 10
    address of x: 0x62fe14
    value of x: 10
    -----------------------------------
    address of k:0x62fe14
    value of k: 9
    address of y: 0x62fe10
    value of y: 9
    value of x: 9
*/


}
