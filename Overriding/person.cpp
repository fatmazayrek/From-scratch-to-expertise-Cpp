#include "person.h"

Person::Person(string name, int age): Human()
{
    this->name = name;   //name variable is from Human Class
    this->age = age;
    Human::age = age;
}

void Person::getInfo()
{
    cout << "Person name is: " << this->name << endl << "Person age is: " << this->age << endl;
}

void Person::Breath()
{
    cout << this->name + " can breath" << endl;
}
