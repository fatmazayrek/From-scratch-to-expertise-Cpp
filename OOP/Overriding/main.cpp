#include <iostream>
#include "person.h"

using namespace std;

// I showed you how to use Overriding.

int main()
{
        Person p("Fatma", 25);

        p.Human::getInfo();
        p.getInfo();

        cout << "************" << endl;

        p.Human::Breath();
        p.Breath();

        p.Human::name = "Zehra";
        p.Human::age = 35;

        cout << "************" << endl;

        p.Human::getInfo();
        p.getInfo();
        p.Breath();
        
        /* Output will be:
                Human name is: Fatma
                Human age is: 25
                Person name is: Fatma
                Person age is: 25
                ************
                Human can breath
                Fatma can breath
                ************
                Human name is: Zehra
                Human age is: 35
                Person name is: Zehra
                Person age is: 25
                Zehra can breath */
}

