#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Emploe{
public:
    std::string name;  // In header file, string is undefined. Because there is no string variable in C. So we use "#include <string>" and "using namespace std" together.
    int age;
//    int serialNum;    "ctrl + /" : comment
    std::string department;

    void setName(std::string newName);
    std::string getName();

    void setAge(int newAge);
    int getAge();

    void setDepartment(std::string newDepartment);
    std::string getDepartment();
};

#endif // EMPLOYEE_H
