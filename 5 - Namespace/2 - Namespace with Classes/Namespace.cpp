#include <iostream>
#include "MyNamespace.cpp"

using namespace MyNamespace;

int main(){

    Template1 t;
    t.write();
    t.writetoIntegers();

    Template2 t2;
    t2.readfromInteger();
}