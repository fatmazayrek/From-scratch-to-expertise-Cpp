#include "human.h"

Human::Human()
{

}

void Human::getInfo()
{
    cout << "Human name is: " << this->name << endl << "Human age is: " << this->age << endl;
}

void Human::Breath()
{
    cout << "Human can breath" << endl;
}
