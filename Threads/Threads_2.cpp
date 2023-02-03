#include <thread>
#include <iostream>
#include <assert.h>
#include <chrono>
#include <future>
using namespace std;

void threadFunction(int k)
{
   std::cout << "Thread1 Starting" << std::endl;

   while(k > 0)
   {
        std::cout << k << ". Topic" << std::endl;

        k--;

        std::this_thread::sleep_for(std::chrono::seconds(5));
   }
}

int main()
{
    std::cout << "Before starting the thread" << std::endl;

    std::thread my_thread(&threadFunction, 10); 
    // std::thread my_thread2(&threadFunction2, 56);

    std::cout << "After call thread" << std::endl;

    std::this_thread::sleep_for (std::chrono::seconds(40));

    my_thread.detach();
    // my_thread2.detach();
    std::cout << "Doing task in main function" << std::endl;
}

/* Output will be:
        Before starting the thread
        After call thread
        Thread1 Starting
        10. Topic
        9. Topic
        8. Topic
        7. Topic
        6. Topic
        5. Topic
        4. Topic
        3. Topic
        Doing task in main function    
*/

//If you want more detailed information, I suggest you watch this video. 