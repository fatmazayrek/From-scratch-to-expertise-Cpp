#include <iostream>
#include <map>
using namespace std;

// In this example, I want to show you how you use "map" ----->

class People{
private:
    string name;
    int age;
    bool marrial_status;

public:
    People(){}

    void setInfo(string name, int age, bool marrial_status){
        this->name = name;
        this->age = age;
        this->marrial_status = marrial_status;
    }

    void getInfo(){
        cout << "Name: " << this->name << endl << "Age: " << this->age << endl << "Marrial Status: " << this->marrial_status << endl;
    }
};


int main()
{
    map<int, People> people;
    People *p = new People[5];

    p[1].setInfo("Melissa", 24, 1);
    p[2].setInfo("Ben", 45, 0);
    p[3].setInfo("Jenifer", 21, 1);
    p[4].setInfo("Katy", 24, 1);
    p[0].setInfo("Jenny", 45, 1);

    for(int i=0; i<5; i++){
        people[i] = p[i];
    }

    for(auto items: people){
        items.second.getInfo();
    }

}

/* Output will be:
        Name: Jenny
        Age: 45
        Marrial Status: 1
        Name: Melissa
        Age: 24
        Marrial Status: 1
        Name: Ben
        Age: 45
        Marrial Status: 0
        Name: Jenifer
        Age: 21
        Marrial Status: 1
        Name: Katy
        Age: 24
        Marrial Status: 1
*/
