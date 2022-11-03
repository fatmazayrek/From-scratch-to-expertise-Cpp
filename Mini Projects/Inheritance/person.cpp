#include "person.h"

Person::Person(string name, int age) : Human(name, age)
{
    this->name = name;
    this->age = age;
}

void Person::setName(string name)
{
    this->name = name;
    Human::setName(name);  //If name is changed, then human's name is must be changed.
}

string Person::getName()
{
    return this->name;
}

void Person::setDepartment(string department)
{
    this->department = department;
}

string Person::getDepartment()
{
    return this->department;
}

void Person::setAge(int age)
{
    this->age = age;
}

int Person::getAge()
{
    return this->age;
}

void Person::getInfo()
{
    cout << "Name: " << this->name << endl << "Department: " << this->department << endl << "Age: " << this->age << endl << "Salary: " << this->salary << endl;
    cout << "isMarried? " << this->isMarried << endl;
}
