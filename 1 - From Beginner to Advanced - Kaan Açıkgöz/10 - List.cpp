#include <iostream>
#include <list>
using namespace std;

// In this example, I want to show you how you can use "list" ----->

class People
{
private:
    string name;
    int age;
    bool marrial_status;

public:
    People(){}

    void setInfo(string name, int age, bool marrial_status)
    {
        this->name = name;
        this->age = age;
        this->marrial_status = marrial_status;
    }

    void getInfo()
    {
        cout << "Name: " << this->name << endl << "Age: " << this->age << endl << "Marrial Status: " << this->marrial_status << endl;
    }
};


int main()
{
    list<People> people;
    People p1, p2, p3, p4, p5;

    p1.setInfo("Melissa", 24, 1);
    p2.setInfo("Ben", 45, 0);
    p3.setInfo("Jenifer", 21, 1);
    p4.setInfo("Katy", 24, 1);
    p5.setInfo("Jenny", 45, 1);

    people.push_back(p1);
    people.push_front(p3);

    list<People>::iterator iterat = people.begin();
    people.insert(iterat, p2);

    people.push_back(p4);
    people.push_front(p5);

    for(list<People>::iterator iterat = people.begin(); iterat != people.end() ; iterat++)
    {
        iterat->getInfo();
    }
}

/* Output will be:
        Name: Jenny
        Age: 45
        Marrial Status: 1
        Name: Ben
        Age: 45
        Marrial Status: 0
        Name: Jenifer
        Age: 21
        Marrial Status: 1
        Name: Melissa
        Age: 24
        Marrial Status: 1
        Name: Katy
        Age: 24
        Marrial Status: 1  */

// Note: There are some differences between list and vector. For example, you can reach an element from back and top in list. You can also add an element after some element in list. 
