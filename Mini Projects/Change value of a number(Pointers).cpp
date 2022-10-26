/* Let's make an simple example about Pointers:
Input 3 numbers in the function(x, y, z). Function should return 2 result. First one is the sum of the x + y. Second one is the third parameter(z). But this third parameter contains multiplication of the x and y.  */

#include <iostream>

using namespace std;

int* change(int x, int y, int *z){
    int sum = x + y;
    *z = (x * y);
    static int returnArray[] = {sum, *z};

    return returnArray;
}

int main(){
    int a = 10;
    int b = 20;
    int c = 0;

    int *sum = change(a, b, &c);
    cout << "sum of a and b: " << sum[0] << endl << "multiplication of a and b: " <<  sum[1] << endl << "last value of c: " << c;
}

//This Example may help you to understand Pointers topic. If we want to change value of an number then we should use to pointers.
