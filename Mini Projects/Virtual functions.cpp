#include <iostream>
#include "person.h"

using namespace std;

// Let's make a simple example about Virtual Function.

class base {
public:
    virtual void print()
    {
        cout << "print base class" <<
                 endl;
    }

    void show()
    {
      cout << "show base class" <<
               endl;
    }
};

class derived : public base {
public:
    void print()
    {
        cout << "print derived class" <<
                 endl;
    }

    void show()
    {
      cout << "show derived class" <<
               endl;
    }
};

int main()
{
    base* bptr;
    derived d;
    bptr = &d;

    bptr->print();

    bptr->show();

}

/* Note: Virtual functions are used with polymorphism. To ensure that a class's function is used by other inheriting classes, we define it with the virtual keyword */
