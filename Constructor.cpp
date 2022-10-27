#include <iostream>
using namespace std;
#include "Employee.h"

// I showed you how to use Constructor in the Class:

class Animal{
private:
    string m_name;
    int m_leg;
    string m_family;

public:
    Animal(){
        this->m_name = "null";
        this->m_leg = 0;
        this->m_family = "null";
    }

    void updateInfo(string name, int leg, string family){
        this->m_name = name;
        this->m_leg = leg;
        this->m_family = family;
    }

    void getInfo(){
        cout << "name: " << this->m_name << endl << "leg: " << this->m_leg << endl << "family: " << this->m_family << endl;
    }

};

int main(){
    Animal animals[3];
    Animal a1;
    animals[0] = a1;
    Animal a2;
    animals[1] = a2;
    Animal a3;
    animals[2] = a3;

    string name;
    int leg;
    string family;

    for(int i=0; i<3; i++){
        cout << "Update informations about classes: " << endl;
        cin >> name >> leg >> family ;
        animals[i].updateInfo(name, leg, family);
    }

    for(int i=0; i<3; i++){
        animals[i].getInfo();
    }
}

// Note: you can use just name of variables instead of "this" key word.
