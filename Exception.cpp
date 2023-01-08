#include <iostream>

using namespace std;

// Let's make a simple example about "Exception"

int main()
{
    int age;

    while(true)
    {
        cout << "Enter your age: ";
        cin >> age;

        try
        {
            if(age < 0)
            {
                throw 0;
            }
        }
        catch (int error)
        {
            cout << "Age can not be less than 0" << endl;
        }
    }
}

