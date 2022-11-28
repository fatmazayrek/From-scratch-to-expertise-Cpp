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

/* Output will be: 
	x: 10
	x address: 0x61fe14
	y: 20
	y address: 0x61fe10
	ptr adress: 0x61fe14
	ptr value: 10
	pp: 0x61fe08
	*pp: 0x61fe14
	**pp: 10
	2 ---------------------------------------------------
	x: 100
	x address: 0x61fe14
	y: 200
	y address: 0x61fe10
	ptr adress: 0x61fe10
	ptr value: 200
	pp: 0x61fe08
	*pp: 0x61fe10
	**pp: 200
	3 ---------------------------------------------------
	x: 100
	x address: 0x61fe14
	y: 200
	y address: 0x61fe10
	ptr adress: 0x61fe10
	ptr value: 200
	pp: 0x61fe08
	*pp: 0x61fe10
	**pp: 200
	4 ----------------------------------------------------
	x: 100
	x address: 0x61fe14
	y: 2000
	y address: 0x61fe10
	ptr adress: 0x61fe10
	ptr value: 2000
	pp: 0x61fe08
	*pp: 0x61fe10
	**pp: 2000
*/
