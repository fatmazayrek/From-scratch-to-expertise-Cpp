#include <iostream>
#include "person.h"

using namespace std;

// I showed you how to use Overriding.

int main(){
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


}

