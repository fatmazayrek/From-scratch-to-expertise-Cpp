#include <iostream>
using namespace std;
#include "Employee.h"

// I showed you how to use Composition in the Class:

class BirthDate{
private:
    int m_day;
    int m_month;
    int m_year;

public:
    BirthDate(int day, int month, int year):m_day(day), m_month(month), m_year(year){}

/*    Another way describe Constructor:
    BirthDate(int day, int month, int year){
        m_day = day;
        m_month = month;
        m_year = year;
    }*/

    void info(){
        cout << "Day: " << m_day << endl << "Month: " << m_month << endl << "Year: " << m_year << endl;
    }
};

class Person{
private:
    string name;
    BirthDate birthdate;

public:
    Person(string name, BirthDate birtdate): name(name), birthdate(birtdate){}

    void info(){
        cout << "Person's name: " << name << endl;
        cout << "Person's birthdate: " ;
        birthdate.info();
    }
};

int main(){
    BirthDate birthdate(26, 07, 1997);
    Person p("Fatma", birthdate);

    p.info();
}


