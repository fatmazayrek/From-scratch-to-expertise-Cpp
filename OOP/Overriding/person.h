#ifndef PERSON_H
#define PERSON_H
#include "human.h"

class Person : public Human
{
private:
    int age;
public:
    Person(string name, int age);

    void getInfo();
    void Breath();

};

#endif // PERSON_H
