#include <iostream>
#include "Employee.h"

Emploe::Emploe(std::string name, int age, std::string department)
{
    m_name = name;
    m_age = age;
    m_department = department;
}

void Emploe::setserialNumber(int newserialNum)
{
    serialNumber = newserialNum;
}

int Emploe::getserialNum()
{
    return serialNumber;
}
