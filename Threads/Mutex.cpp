#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

std::mutex global_mutex;

void Thread(int argument, int id)
{
    global_mutex.lock();

    std::cout << "--- Starting Thread with ID: " << id << "----" << std::endl;

    for(int i=0; i<argument; i++)
    {
        std::cout << i << ". Topic" << std::endl;
    }

    std::cout << "--- Ending Thread with ID: " << id << "-----" << std::endl;

    global_mutex.unlock();

}

int main()
{
    std::vector<std::thread> threads_Set;

    std::cout << "------ Adding threads into the threads set -----" << std::endl;

    for(int i=0; i<3; i++)
    {
        threads_Set.push_back(std::thread(&Thread, 10, i));
    }

    std::cout << "------ Adding was completed ---------" << std::endl;

    for(int i=0; i<3; i++)
    {
        threads_Set[i].join();
    }

    std::cout << "------ Ending of the main function --- " << std::endl;
}