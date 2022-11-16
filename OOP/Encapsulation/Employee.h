#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Emploe{
    private:
        int serialNumber;

    public:
        std::string m_name;
        int m_age;
        std::string m_department;

        Emploe(std::string name, int age, std::string department);

        void setserialNumber(int newserialNum);
        int getserialNum();
};

#endif

/* Note: Ctrl + '/' : comment */
