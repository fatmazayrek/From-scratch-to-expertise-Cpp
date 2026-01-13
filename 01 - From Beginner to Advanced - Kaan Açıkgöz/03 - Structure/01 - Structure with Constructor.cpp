#include <iostream>
using namespace std;

// I showed you how can you define a Constructor in a Structure with simple example

struct Student
{
    int age;
    string name;
    int number;

    Student()
    {
        age = 25;
        name = "Fatttma";
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    Student s ; 
    cout << s.getName();
}

/*According to this example, the following question may have arisen in your mind: "So what is the difference between structure and class?"
I would like to briefly mention the differences:
- all structures are in "public" state when the structure is first created. However, when the class is created, all its structures are created as "private".
- class inherits while structure does not inherit
- Class can be accessed by references, while structures can be accessed directly.
data for detailed information: 
"https://bidb.itu.edu.tr/seyir-defteri/blog/2013/09/06/yap%C4%B1-(struct)-kavram%C4%B1-ve-yap% Differences between C4%B1-and-s%C4%B1n%C4%B1f-(class)-between%C4%B1" */
