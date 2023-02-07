#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <time.h>
#include <vector>

// In this example, I created two threads which use mutex independently. One thread create an unique id and push this is into the vector. Other thread writes on the terminal.
std::vector<int> ids;
std::mutex mtx;

void setID(int argument)
{
    std::unique_lock<std::mutex> lck(mtx);

    std::cout << "--------- Adding is starting ---------" << std::endl;

    srand(time(0));

    for(int i=0; i<argument; i++)
    {
        ids.push_back(rand() % 10 + 1);
    }

    std::cout << "----------- Adding is ending ----------" << std::endl;
}

void writeIDs(int threadID)
{
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::unique_lock<std::mutex> lck(mtx);
    
    std::cout << "--------- Writing is starting ---------" << threadID << std::endl;

    for(int i=0; i<ids.size(); i++)
    {
        std::cout << i + 1 << ". element: " << ids[i] << std::endl;
    }

    std::cout << "----------- Writing is ending ----------" << threadID << std::endl;
}


int main()
{
    std::thread t1(setID, 12);
    std::thread t2(writeIDs, 1);
    std::thread t3(writeIDs, 2);

    std::this_thread::sleep_for(std::chrono::seconds(3));

    t1.detach();
    t2.detach();
    t3.detach();
}
