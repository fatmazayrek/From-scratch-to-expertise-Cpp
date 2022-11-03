#ifndef HUMAN_H
#define HUMAN_H
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

class Human
{
protected:
    int age;
    string name;
public:
    Human(string name, int age);

    void setName(string name);
    void Breath();
    void Walking();
};

#endif // HUMAN_H
