#include <iostream>
using namespace std;
#include "Employee.h"

/* I showed you how to use Overloading in the Class:
- Method overloading can be expressed as defining a method within a class with the same name but different signature (type, number, order of parameters it will accept).*/

class Number
{
private:
    int value;

public:
    Number(){};

    //Overloading
    Number(int a)
    {
        value = a;
    }

    Number sum(Number a, Number b)
    {

        Number summation;

        summation.value = a.value + b.value;

        return summation;
    }

    Number operator+(Number a)
    {

        Number t;

        t.value = value + a.value;

        return t;
    }

    int getValue()
    {
        return value;
    }

};

int main()
{
    Number n1(10);
    Number n2(20);
    Number n3;

    n3 = n1.sum(n1, n2);
    cout << n3.getValue() << endl;

    Number n4(70);
    Number n5(50);

    n3 = n4 + n5;
    cout << n3.getValue() << endl;

}

/* In this example:
- I overloaded Constructor
- I also showed you operator process.


