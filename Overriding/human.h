#ifndef HUMAN_H
#define HUMAN_H
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    int age;

    Human();

    void getInfo();
    void Breath();
};

#endif // HUMAN_H
