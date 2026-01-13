#include <iostream>
#include "Employee.h"

using namespace std;

void f(int a, int b, int c)
{
    cout << "a:" << a << "b:" << b << "c:" << c;
}

int main()
{
    Emploe e;
    e.setName("Fatma");
    e.setAge(25);
    e.setDepartment("Software Engineer");

    cout << e.getName() << " " << e.getAge() << " " << e.getDepartment() << endl;


    return 0;
}
