#ifndef PERSON_H
#define PERSON_H
#include "human.h"

class Person : public Human
{
private:
    string name;
    string department;
    int age;

public:
    int salary;
    bool isMarried;

    Person(string name, int age);

    void setName(string name);
    string getName();
    void setDepartment(string department);
    string getDepartment();
    void setAge(int age);
    int getAge();

    void getInfo();
};

#endif // PERSON_H
