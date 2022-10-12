#include <iostream>
#include <math.h>
#include <cstring>
#include <time.h>
using namespace std;

//Structures with Pointers

struct Student
{
    int number;
    string name;
    string lastname;
    char gender;
};

void changeNumber(Student *student, int number){
    student->number = number;
}

void changeName(Student *student, string name){
    student->name = name;
}

void changeLastname(Student *student, string lastname){
    student->lastname = lastname;
}

void changeGender(Student *student, char gender){
    student->gender = gender;
}

void readStudent(Student student){
    cout << student.number << ", " << student.name << ", " << student.lastname << ", " << student.gender;
}

void writeStudent(Student *student){
    int number;
    string name, lastname;
    char gender; 

    cout << "Input student informations : " << endl << " Number: ";
    cin >> student->number;
    cout << "\nName: ";
    cin >> student->name;
    cout << "\nLastname: ";
    cin >> student->lastname; 
    cout << "\nGender: ";
    cin >> student->gender;
}

int main(){
    
    Student student1;

    writeStudent(&student1);
    readStudent(student1);
}

/* If you want to update some variables in structes, you should use pointers. 
Otherwise if you only want to read data from structures, it doesn't necessary. */


