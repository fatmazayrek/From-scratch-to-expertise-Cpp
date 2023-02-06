#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

static int global_argument = 0;
std::mutex global_mutex;

void incrementNumber()
{
    global_mutex.lock();  //lock the thread 

    std::cout << "--- Starting Thread ----" << std::endl;

    global_argument = global_argument + 1;
   
    std::cout << "--- Ending Thread ----" << std::endl;

    global_mutex.unlock();
}

int main()
{
    std::vector<std::thread> threads_Set;

    std::cout << "------ Adding threads into the threads set with global number: " << global_argument << "-------" << std::endl;

    for(int i=0; i<10; i++)
    {
        threads_Set.push_back(std::thread(&incrementNumber));
    }

    std::cout << "------ Adding was completed ---------" << std::endl;

    for(int i=0; i<10; i++)
    {
        threads_Set[i].join();
    }

    std::cout << "------ Ending of the main function global number: " << global_argument << "-------" << std::endl;
}