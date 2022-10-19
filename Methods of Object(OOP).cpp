#include <iostream>
using namespace std;

//I showed you using the methods in any class

class Employee{
    public:
        string name;
        string department;
        int age; 
        int serialnumber;

        string getName(){
            return name;
        }

        void setName(string newName){
            name = newName;
        }

        string getDepartment(){
            return department;
        }

        void setDepartment(string newDepartment){
            department = newDepartment;
        }

        int getAge(){
            return age;
        }

        void setAge(int newAge){
            age = newAge;
        }        

        int getSerial(){
            return serialnumber;
        }

        void setSerial(int newSerial){
            serialnumber = newSerial;
        }
};

int main(){
    Employee e = {"Fatma", "Software", 25, 458};
    cout << e.getName() << " " << e.getAge() << " " << e.getDepartment() << " " << e.getSerial() << endl;
    e.setName("Ali");
    e.setAge(58);
    e.setSerial(789);
    e.setDepartment("Embeded");
    cout << e.getName() << " " << e.getAge() << " " << e.getDepartment() << " " << e.getSerial();

}