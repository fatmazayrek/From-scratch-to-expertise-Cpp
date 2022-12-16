#include <iostream>
using namespace std;

// I showed you that how to use virtual functions ---->

class Animal{
public:

    virtual void eat(){
        cout << "Animals eat generic food" << endl;
    }
};


class Cat: public Animal{
public:

    void eat(){
        cout << "Cats eat Rat" << endl;
    }
};

void what(Animal *x){

    x->eat();

}


int main(){

    Animal *animal = new Animal();
    Cat *cat = new Cat();

    what(animal);
    what(cat);
}


/* Output will be with virtual keyword:
      Animals eat generic food
      Cats eat Rat

  Output will be without virtual keyword:
      Animals eat generic food
      Animals eat generic food

*/
