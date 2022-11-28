#include <iostream>
using namespace std;

int main(){

    int x = 10;
    int y = 20;

    int *ptr = &x;
    int **pp = &ptr;

    cout << "x: " << x << endl << "x address: " << &x << endl <<  "y: " << y << endl << "y address: " << &y << endl << "ptr adress: " << ptr << endl << "ptr value: " << *ptr << endl << "pp: " << pp << endl << "*pp: " << *pp << endl << "**pp: " << **pp << endl;

    *ptr = 100; 
    *pp = &y;

    cout << "2 ---------------------------------------------------" << endl;
    cout << "x: " << x << endl << "x address: " << &x << endl <<  "y: " << y << endl << "y address: " << &y << endl << "ptr adress: " << ptr << endl << "ptr value: " << *ptr << endl << "pp: " << pp << endl << "*pp: " << *pp << endl << "**pp: " << **pp << endl;

    *ptr = 200;
	
    cout << "3 ---------------------------------------------------" << endl;
    cout << "x: " << x << endl << "x address: " << &x << endl <<  "y: " << y << endl << "y address: " << &y << endl << "ptr adress: " << ptr << endl << "ptr value: " << *ptr << endl << "pp: " << pp << endl << "*pp: " << *pp << endl << "**pp: " << **pp << endl;

    **pp = 2000;

    cout << "4 ----------------------------------------------------" << endl;
    cout << "x: " << x << endl << "x address: " << &x << endl <<  "y: " << y << endl << "y address: " << &y << endl << "ptr adress: " << ptr << endl << "ptr value: " << *ptr << endl << "pp: " << pp << endl << "*pp: " << *pp << endl << "**pp: " << **pp << endl;
}

/* 

This example can help you to understand what pointer to pointer is:

int *ptr; 
With a definition like this, we define a variable with the name ptr. At program runtime, the memory allocated for this object can be 2, 4, or 8 bytes, which may vary from system to system. The ptr variable is of type int *. Since ptr is a variable, the address of the ptr variable can also be mentioned. 

&ptr; 
This expression is the address of an object of type int *. This is expressed as int ** in C language.

Then, if the address of a variable like ptr above is to be kept in another variable, the type of the variable to hold this address should be int ** 

*/
