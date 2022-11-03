#include <iostream>
using namespace std;

// I showed you Inheritance in the Class:
class Team{
public:
    string name;
    int year;

    void writeInfo();
};

void Team::writeInfo(){
    cout << "Team name: " << Team::name << endl << "Team year: " << Team::year << endl;
}


class FootballPlayer : public Team{
private:
    string name = "No name";
public:
    int age;
    int salary;

    void setName(string name){
        this->name = name;
    }

    string getName(){
        return this->name;
    }
};


int main(){
    Team *t;
    FootballPlayer f;
    t = &f;

    f.setName("Fatma");
    f.age = 25;
    f.salary = 25000;

    t->name = "EsTu";
    t->year = 1997;

    f.writeInfo();
}

/*Since there are two variables named "name" in the inheritance classes, the use of pointers was required.
So, when we use the f.writeInfo() function, it doesn't return null charecteristic.*/


