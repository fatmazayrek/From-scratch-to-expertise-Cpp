#include <iostream>

using namespace std;

// Let's make a simple example about "namespace and Scopes"

namespace Math
{
    double pi = 3.14;

    int sum(int a, int b)
    {
        return a+ b;
    }

    int multiplication(int a, int b)
    {
        return a * b;
    }

    int substract(int a, int b)
    {
        return a- b;
    }
}

int main()
{
    using namespace Math;
    int number1, number2;

    cout << "please input the numbers: " << endl << "number1: " ;
    cin >> number1 ;
    cout << "number2: ";
    cin >> number2;

    cout << "sumation of " << number1 << " and " << number2 << " is: " << sum(number1, number2) << endl ;
    cout << "multiplication of " << number1 << " and " << number2 << " is: " << multiplication(number1, number2) << endl ;
    cout << "substraction of " << number1 << " and " << number2 << " is: " << substract(number1, number2) << endl ;
}

/* Output will be:
    please input the numbers:
    number1: 8
    number2: 9
    sumation of 8 and 9 is: 17
    multiplication of 8 and 9 is: 72
    substraction of 8 and 9 is: -1
*/
