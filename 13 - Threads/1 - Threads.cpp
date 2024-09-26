#include <iostream>
#include <thread>
#include <chrono>

void Thread1(int a, int b)
{
    for(int i=0; i<3; i++)
    {
        std::cout << "Thread1: " << a * b << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(50));

    }

    std::cout << "Tread1 is ending... " << std::endl;
}

void Thread2(std::string name)
{
    for(int i=0; i<3; i++)
    {
        std::cout << "Thread2: " << name << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

        std::cout << "Tread2 is ending... " << std::endl;

}

int main()
{
    std::thread t1(Thread1, 12, 45);
    std::thread t2(Thread2, "Fatma");

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    t1.detach();
    t2.detach();

}

/* Output will be: 
        Thread1: 540
        Thread2: Fatma
        Thread1: 540
        Thread2: Fatma
        Thread1: 540
        Tread1 is ending...
        Thread2: Fatma
        Tread2 is ending... 
*/
