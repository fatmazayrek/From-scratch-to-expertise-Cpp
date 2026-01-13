#include <iostream>
#include "Employee.h"


void Emploe::setName(std::string newName)
{
    Emploe::name = newName; // or you can write this way: this->name = newName;
}

std::string Emploe::getName()
{
    return this->name;
}

void Emploe::setAge(int newAge)
{
    this->age = newAge;
}

int Emploe::getAge()
{
    return Emploe::age;
}

void Emploe::setDepartment(std::string newDepartment)
{
    Emploe::department = newDepartment;
}

std::string Emploe::getDepartment()
{
    return this->department;
}
