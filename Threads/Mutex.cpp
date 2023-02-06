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

/* Output will be: 
        ------ Adding threads into the threads set -----
        ------ Adding was completed ---------
        --- Starting Thread with ID: 0----
        0. Topic
        1. Topic
        2. Topic
        3. Topic
        4. Topic
        5. Topic
        6. Topic
        7. Topic
        8. Topic
        9. Topic
        --- Ending Thread with ID: 0-----
        --- Starting Thread with ID: 1----
        0. Topic
        1. Topic
        2. Topic
        3. Topic
        4. Topic
        5. Topic
        6. Topic
        7. Topic
        8. Topic
        9. Topic
        --- Ending Thread with ID: 1-----
        --- Starting Thread with ID: 2----
        0. Topic
        1. Topic
        2. Topic
        3. Topic
        4. Topic
        5. Topic
        6. Topic
        7. Topic
        8. Topic
        9. Topic
        --- Ending Thread with ID: 2-----
        ------ Ending of the main function --- 
*/
