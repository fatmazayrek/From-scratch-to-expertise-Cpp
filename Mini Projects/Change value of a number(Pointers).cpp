/* Let's make an simple example about Pointers:
Input 3 numbers in the function(x, y, z). Function should return 2 result. First one is the sum of the x + y. Second one is the third parameter(z). 
But this third parameter contains multiplication of the x and y.  */

#include <iostream>

using namespace std;

int* change(int x, int y, int *z){
    int sum = x + y;
    *z = (x * y);
    static int returnArray[] = {sum, *z};  /* We should static key word. Because we can't return local array variables.The problem is, that we return the address of a 
                                            local variable which is not advised as local variables may not exist in memory after the function call is over */

    return returnArray;
}

int main(){
    int a = 10;
    int b = 20;
    int c = 0;

    int *sum = change(a, b, &c);
    cout << "sum of a and b: " << sum[0] << endl << "multiplication of a and b: " <<  sum[1] << endl << "last value of c: " << c;
}

/*NOTE: This Example may help you to understand Pointers topic. If we want to change value of an number then we should use to pointers. 
Also, this example is an example of how to return array values in functions.*/
