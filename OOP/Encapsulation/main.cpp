#include <iostream>
using namespace std;
#include "Employee.h"

int main()
{
    Emploe *e = new Emploe("Fatma", 25, "Software");
    int serialNum;

    cout << "Pls Enter a number: ";
    cin >> serialNum;

    if(serialNum > 0)
    {
        e->setserialNumber(serialNum);
    }

    cout << "name : " << e->m_name << endl << "Age: " << e->m_age << endl <<  "serialnumber: " << e->getserialNum() << endl;
}

/* In this example, I showed you:
  - how to use "private" key word
  - What is the Encapsulation?
  - using pointers in the Class.

NOTE: Encapsulation is a way of storing data in classes. It prevents access to this data from outside. We can access this data with the get
and set methods. Thus, we can keep the values of these data under control. */
