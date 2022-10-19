#include <iostream>
#include <math.h>
#include <cstring>
#include <time.h>
using namespace std;

//Let's calculate the GPA in this mini project

string gpa(int examNote){
    if(examNote > 85)
        return "AA";
    
    else if(examNote > 75)
        return "BB";
    
    else if(examNote > 55)
        return "CC";

    else if(examNote > 45)
        return "DD";
    
    else
        return "FF";
}

int main(){

    int Midterm, Final, Average;

    while(true){
        cout << "Input Midterm Note: ";
        cin >> Midterm ;
        cout << endl;
        cout << "Input Final Note: ";
        cin >> Final;

        Average = Midterm * 0.4 + Final * 0.6;
        cout << "Your gpa is: " << gpa(Average) << endl;

    }
}


