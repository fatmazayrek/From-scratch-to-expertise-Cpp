#include <iostream>

using namespace std;

//I showed you how to write an array of object

class Person {
private:
    string name, surname;

public:
    // dummy constructor that you should write
    Person() {}

    Person(string name, string surname): name(name), surname(surname){}

// You can also write this way:
//    Person(int x, int y)
//    {
//        this->x = x;
//        this->y = y;
//    }

    // function to print
    void print() { cout << name << " " << surname << endl; }
};

int main()
{
    cout << "How many people will you write: ";
    int N;
    cin >> N;
    Person* per = new Person[N];
    string name, surname;

    // calling constructor
    // for each index of array
    for (int i = 0; i < N; i++) {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter surname: ";
        cin >> surname;
        per[i] = Person(name, surname);
    }

    // printing contents of array
    for (int i = 0; i < N; i++) {
        per[i].print();
    }
}
