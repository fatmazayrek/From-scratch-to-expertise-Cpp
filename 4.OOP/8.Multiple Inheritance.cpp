#include <iostream>
#include "person.h"

using namespace std;

// Let's make a simple example about Multiple Inheritance with Constructor.

class A
{
public:
    A()
    {
        cout << "A was created" << endl;
    }
    
    ~A()
    {
        cout << "A was deleted" << endl;
    }
    
};

class B : public A
{
public:
    B()
    {
        cout << "B was created" << endl;
    }
    
    ~B()
    {
        cout << "B was deleted" << endl;
    }
};

class C: public A, public B
{
public:
    C()
    {
        cout << "C was created" << endl;
    }
    
    ~C()
    {
        cout << "C was deleted" << endl;
    }
};

int main()
{

    C c;
}

/* Ouput will be:
A was created
A was created
B was created
C was created
C was deleted
B was deleted
A was deleted
A was deleted
*/
