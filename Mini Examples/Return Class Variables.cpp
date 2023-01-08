#include <iostream>

using namespace std;

// Let's make a simple example about "return"

class Person
{
public:
    int age;
    string name;

    Person(){}
};

Person returnFunc(string name, int age)
{
    Person p;
    p.name = name;
    p.age = age;

    return p;
}

int main()
{
    Person p = returnFunc("Fatma", 25);
    cout << "Name: " <<  p.name << endl << "Age: " << p.age << endl;
}

/* Output will be: 
                Name: Fatma
                Age: 25
*/
