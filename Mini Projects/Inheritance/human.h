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
/* Note: If you want to learn more about access specifiers, you can visit the "https://www.onurcanalp.com/2013/12/21/public-private-protected-final-const-extends-ve-static-kavramlari/", 
"http://www.baskent.edu.tr/~tkaracay/etudio/ders/prg/java/ch11/accessmods.htm" */
