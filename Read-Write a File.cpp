#include <iostream>
#include <fstream>

using namespace std;


/* Let's make a simple example about "File Read/Write":
   1) Create a file named Informations of Students, no matter what the extension is.
   2) Write the following informations:
        - Student 1:
                Name: Fatma Zayrek
                Number: 45
                Lecture: Math
        - Student 2:
                Name: Micheal Scott
                Number: 489
                Lecture: Business
        - Student 3:
                Name: Jim Halpert
                Number: 128
                Lecture: Math, Business
    3) Read this information from the file named Informations of Students. */

int main(){

    // First Example ------>
    ofstream file("C:\\Users\\Fatma\\OneDrive\\Information_of_Students.txt");
    //add new information into the end of the file

    try {                           //confirm that the file is exist
        if(!((file << "Student 1 : " << endl << " - Name: Fatma Zayrek" << endl << " - Number: 45" << endl << " - Lecture: Math" << endl) &&
        (file << "Student 2 : " << endl << " - Name: Micheal Scott" << endl << " - Number: 489" << endl << " - Lecture: Business" << endl) &&
        (file << "Student 3 : " << endl << " - Name: Jim Halpert" << endl << " - Number: 128" << endl << " - Lecture: Math, Business" << endl)))
                throw 0;
    } catch (int a) {
        cout << "There is not exist this file";
    }

    ifstream file2("C:\\Users\\Fatma\\OneDrive\\Information_of_Students.txt");
    string name;

    while(file2 >> name){
        if(name == "-")
            cout << endl;
        cout << name;
    }
}

