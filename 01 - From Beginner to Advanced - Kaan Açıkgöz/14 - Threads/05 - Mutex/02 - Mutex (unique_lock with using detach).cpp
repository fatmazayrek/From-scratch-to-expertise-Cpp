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
/* Output will be:
        ----------- Adding is ending ----------
        --------- Writing is starting ---------1
        1. element: 5
        2. element: 9
        3. element: 4
        4. element: 1
        5. element: 9
        6. element: 10
        7. element: 5
        8. element: 2
        9. element: 1
        10. element: 6
        11. element: 10
        12. element: 4
        ----------- Writing is ending ----------1
        --------- Writing is starting ---------2
        1. element: 5
        2. element: 9
        3. element: 4
        4. element: 1
        5. element: 9
        6. element: 10
        7. element: 5
        8. element: 2
        9. element: 1
        10. element: 6
        11. element: 10
        12. element: 4
        ----------- Writing is ending ----------2
        */
