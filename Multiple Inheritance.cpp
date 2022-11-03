#include <iostream>
#include "person.h"

using namespace std;

// Let's make a simple example about Multiple Inheritance with Constructor.

class A{
public:
    A(){
        cout << "A is created" << endl;
    }
};

class B : public A{
public:
    B(){
        cout << "B is created" << endl;
    }
};

class C: public A, public B{
public:
    C(){
        cout << "C is created" << endl;
    }
};

int main(){

    C c;
}

/* Ouput will be:
A is created
A is created
B is created
C is created
*/
