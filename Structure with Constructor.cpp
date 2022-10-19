#include <iostream>
using namespace std;

// I showed you how can you define a Constructor in a Structure with simple example

struct Student{
    int age;
    string name;
    int number;

    Student(){
        age = 25;
        name = "Fatttma";
    }

    string getName(){
        return name;
    }
};

int main(){
    Student s ; 
    cout << s.getName();
}