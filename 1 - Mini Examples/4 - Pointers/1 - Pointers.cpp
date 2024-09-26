#include <iostream>
#include <math.h>
#include <cstring>
#include <time.h>
using namespace std;

//This example may help to understand the "Pointer" topic

void writestringlist(string *oneword)
{
    string *otherword = oneword;

    for(; oneword != otherword + 5; oneword++){
        cout << *oneword << endl;
    }
}

int main()
{
    string words[] = {"hello" , "world", "car", "home", "cat"};

    writestringlist(words);
}



/* Output will be:
                  hello
                  world
                  car
                  home
                  cat */


