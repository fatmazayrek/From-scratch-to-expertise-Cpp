#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> integers;

namespace MyNamespace
{
    class Template1
    {
    public:
        void write()
        {
            std::cout << "This is Template1" << std::endl;
        }

        void writetoIntegers()
        {
            for(int i=0; i<13; i +=2)
            {
                integers.push_back(i);
            }
        }
    };

    class Template2
    {
    public:
        void write()
        {
            std::cout << "This is Template2" << std::endl;
        }

        void readfromInteger()
        {
            for(int i=0; i<integers.size(); i++)
            {
                std::cout << integers.at(i) << std::endl;
            }
        }
    };
} // namespace MyNamespace
