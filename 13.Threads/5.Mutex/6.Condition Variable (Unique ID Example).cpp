#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <condition_variable>
#include <time.h>
#include <vector>

//In this example, I created two threads. One thread push the unique ids into the vector and the other threads write on the consol when they are unblock

std::vector<int> ids;
bool ready = false;

std::mutex mtx;
std::condition_variable conditionv;

void setIds(int elementNum)
{
    std::unique_lock<std::mutex> lck(mtx);
   
    std::cout << "Creating ids..." << std::endl;

    srand(time(0));

    for(int i=0; i<elementNum; i++)
    {
        ids.push_back(rand() % 10 + 1);
    }

    std::cout << "Ids are created" << std::endl;

    ready = true;

    conditionv.notify_all();
}

void createThread(int id)
{
    std::unique_lock<std::mutex> lck(mtx);

    while(!ready)
    {
        conditionv.wait(lck);
    }

    std::cout << "Thread with unique id: " << id << std::endl;
}

int main()
{
    std::thread t0(&setIds, 12);

    t0.join();

    for(int i=0; i<ids.size(); i++)
    {
        std::thread t(&createThread, ids[i]);
        t.join();
    }
}

/* Output will be:
    Creating ids...
    Ids are created
    Thread with unique id: 8
    Thread with unique id: 8
    Thread with unique id: 9
    Thread with unique id: 10
    Thread with unique id: 5
    Thread with unique id: 10
    Thread with unique id: 9
    Thread with unique id: 3
    Thread with unique id: 8
    Thread with unique id: 2
    Thread with unique id: 4
    Thread with unique id: 6
*/