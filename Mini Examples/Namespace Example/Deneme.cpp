#include <iostream>
namespace Deneme{

    class Deneme1{
    public:
        int a;
        int b;

        Deneme1(int a, int b): a(a), b(b){}

        int sum(){
            return a + b;
        }
    };
}
