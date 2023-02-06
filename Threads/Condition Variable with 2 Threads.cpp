#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable conditionv;
int data = 0;

bool ready = false;

void doTheWork()
{
    std::cout <<"Processing shared data" << std::endl;
}

void waitingForWork()
{
    std::cout << "Worker: Waiting for work." << std::endl;

    std::unique_lock<std::mutex> lck(mtx);

    while(!ready)
    {
        conditionv.wait(lck);
    }
    
    doTheWork();
    
    std::cout << "Work done. Result is: " << data << std::endl;
}

void setDataReady()
{
    std::unique_lock<std::mutex> lck(mtx);

    std::cout << "Sender: Data is ready."  << std::endl;

    data = 1256;

    ready = true;

    conditionv.notify_one();
}

int main()
{
  std::cout << std::endl;

  std::thread t1(waitingForWork);
  std::thread t2(setDataReady);

  t1.join();
  t2.join();

  std::cout << std::endl;
}

/* Output will be: 
        Worker: Waiting for work.
        Sender: Data is ready.
        Processing shared data
        Work done. Result is: 1256
*/