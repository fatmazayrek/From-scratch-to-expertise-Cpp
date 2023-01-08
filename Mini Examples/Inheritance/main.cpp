#include <iostream>
#include "person.h"

using namespace std;

// Let's make a simple example about Inheritance with Constructor.

int main()
{

    Person p("Fatma", 25);

    p.setDepartment("Software");
    p.salary = 20000;
    p.isMarried = true;

    p.getInfo();  /*Output will be:
                    Name: Fatma
                    Department: Software
                    Age: 25
                    Salary: 20000
                    isMarried? 1
                  */
    p.Breath();  /* Output will be:
                    Fatma can Breath
                */
    p.Walking(); /* Output will be:
                    Fatma can Walk
                 */

    p.setAge(30);
    p.setName("Zehra");

    p.getInfo(); /* Output will be:
                    Name: Zehra
                    Department: Software
                    Age: 30
                    Salary: 20000
                    isMarried? 1
                   */

    p.Breath();  /* Output will be:
                    Zehra can Breath
                */
    p.Walking(); /* Output will be:
                    Zehra can Walk
                 */

}


