#include "human.h"

Human::Human(string name, int age)
{
    this->name = name;
    this->age = age;
}

void Human::setName(string name)
{
    this->name = name;
}

void Human::Breath()
{
    cout << name + " can Breath" << endl;
}

void Human::Walking()
{
    cout << name + "can Walk" << endl;
}
