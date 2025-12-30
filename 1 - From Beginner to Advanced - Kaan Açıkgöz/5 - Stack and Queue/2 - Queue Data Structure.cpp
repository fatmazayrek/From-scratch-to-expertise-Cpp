#include <iostream>
#include <stack>
#include <queue>

using namespace std;

//I showed you how to use "Queues" data structure

class Person 
{
private:
    string name, surname;

public:
    // dummy constructor that you must write
    Person() {}

    Person(string name, string surname): name(name), surname(surname){}

//    ~Person(){
//        cout << name + " " + surname <<" is deleted" << endl;
//    }

    // function to print
    void print() { cout << name << " " << surname << endl; }
};

int main()
{
    cout << "How many names and surnames will you write: ";
    int N;
    cin >> N;

    Person* per = new Person[N];
    string name, surname;
    queue<Person> people;

    for (int i = 0; i < N; i++)
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter surname: ";
        cin >> surname;
        per[i] = Person(name, surname);
        people.push(per[i]);    //push the variables into the queue
    }

    int size = people.size();
    Person *per2 = new Person[size];

    // printing contents of array
    for (int i = 0; i <size; i++)
    {
        per2[i] = people.front();
        people.pop();
        per2[i].print();
    }
}

/*Output will be:
        How many names and surnames will you write: 3
        Enter name: Fatma
        Enter surname: Zayrek
        Enter name: Michael
        Enter surname: Scott
        Enter name: Jim
        Enter surname: Halpert
        Fatma Zayrek
        Michael Scott
        Jim Halpert */

/* Note: This example can help you to understand queue data structure.
