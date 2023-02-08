#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <condition_variable>
#include <time.h>

//In this example, I created 2 threads. One thread sets global id value and notify other thread when id is ready. 

static int id;
bool ready = false;

std::mutex mtx;
std::condition_variable conditionv;

void createThread()
{
    std::cout << "Waiting for data "<< std::endl;
    
    std::unique_lock<std::mutex> lck(mtx);

    while(!ready)
    {
        conditionv.wait(lck);
    }

    std::cout << "Thread with id: " << id * 10 << " was created" << std::endl;
}

void setId()
{
    std::unique_lock<std::mutex> lck(mtx);
    
    srand(time(NULL));

    id = rand() % 10 + 1;  //id number between 1-10

    std::cout << "ID was created as: " << id << std::endl;

    ready = true;

    conditionv.notify_all();
}

int main()
{
    std::cout << "main function" << std::endl;

    std::thread t0(&setId);
    std::thread t1(&createThread);
    
    t1.join();
    t0.join();
}

/* Output will be: 
        main function
        Waiting for data
        ID was created as: 6
        Thread with id: 60 was created
*/
