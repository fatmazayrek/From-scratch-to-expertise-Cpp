#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable conditionv;
bool ready = false;

void printID(int id)
{
    std::unique_lock<std::mutex> lk(mtx);

    while(!ready)
    {
        conditionv.wait(lk);
    }

    std::cout << "Thread id: " << id << std::endl;
}

void go()
{
    ready = true;
    conditionv.notify_all();
}

int main()
{
    std::thread threads[10];

    for (int i=0; i<10; ++i)
    {
        threads[i] = std::thread(&printID, i);
    }

    std::cout << "10 threads ready to race...\n";

    go();

    for (auto& th : threads)
    {
        th.join();
    }

    return 0;
}