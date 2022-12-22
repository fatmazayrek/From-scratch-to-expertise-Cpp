#include <iostream>
#include <vector>
using namespace std;

// In this example, I want to show you how you can use "vector" ----->

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
    vector<People> people;
    People p;
    int a = 0, age;
    string name;
    bool marrial;
    cout << "Enter your people's information: " << endl;

    while(a<5){

        cout << "Name: " ;
        cin >> name;
        cout << "Age: " ;
        cin >> age;
        cout << "Marrial status: " ;
        cin >> marrial;
        p.setInfo(name, age, marrial);
        people.push_back(p);
        a++;
    }

    for(vector<People>::iterator iterat = people.begin() ; iterat != people.end() ; iterat++){
        iterat->getInfo();
    }

}
