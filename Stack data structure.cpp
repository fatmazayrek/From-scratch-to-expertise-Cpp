#include <iostream>
#include <stack>

using namespace std;

//I showed you how to use "Stack" data structure

class Person {
private:
    string name, surname;

public:
    // dummy constructor that you must write
    Person() {}

    Person(string name, string surname): name(name), surname(surname){}

    // function to print
    void print() { cout << name << " " << surname << endl; }
};

int main()
{
    cout << "How many names and surnames will you write: ";
    int N;
    cin >> N;
    Person* per = new Person[N];
    Person* per2 = new Person[N];

    string name, surname;

    stack<Person> people;

    for (int i = 0; i < N; i++) {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter surname: ";
        cin >> surname;
        per[i] = Person(name, surname);
        people.push(per[i]);    //push the variables into the stack
    }

    // printing contents of array
    for (int i = 0; i < N; i++) {
        per2[i] = people.top();
        people.pop();
        per2[i].print();
    }
}

/* Output will be:
    How many names and surnames will you write: 4
    Enter name: Fatma
    Enter surname: Zayrek
    Enter name: Zehra
    Enter surname: Zerrin
    Enter name: Mehmet
    Enter surname: Sarı
    Enter name: Seki
    Enter surname: Top
    Seki Top
    Mehmet Sarı
    Zehra Zerrin
    Fatma Zayrek  */

/* Note: This example can help you to understand structure of stack data structure. As you can see there is a FILO(First in Last out) structure on the stack. */
