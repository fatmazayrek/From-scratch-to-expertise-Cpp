// This Example may help you understanding about function that return an array.
#include <iostream>
using namespace std;

class Student
{
    private:
    int *numbers;
    string name;

    public: 
    Student(int number){
        numbers = new int[number];
    }

    void setnumbers(int nnumbers[])
    {
        numbers = nnumbers;
    }

    int *getnumbers(){
        return numbers;
    }

};

int main()
{
    Student s(5);
    
    int numbs[] = {10, 25, 14, 14};

    s.setnumbers(numbs);
    int si = sizeof(numbs) / sizeof(int);

    for(int i=0; i<si; i++)
    {
        cout << s.getnumbers()[i]<< endl;
    }

}
