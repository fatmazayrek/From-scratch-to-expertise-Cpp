#include <thread>
#include <iostream>
#include <assert.h>
#include <chrono>
#include <future>
using namespace std;

void threadFunction(std::future<void> future)
{
   std::cout << "Starting the thread" << std::endl;

   while (future.wait_for(std::chrono::milliseconds(1)) == std::future_status::timeout)
   {
      std::cout << "Executing the thread....." << std::endl;
      std::this_thread::sleep_for(std::chrono::milliseconds(500)); //wait for 500 milliseconds
   }
   std::cout << "Thread Terminated" << std::endl;
}

int main()
{
   std::promise<void> signal_exit; //create promise object

   std::future<void> future = signal_exit.get_future();//create future objects

   std::thread my_thread(&threadFunction, std::move(future)); //start thread, and move future

   std::this_thread::sleep_for(std::chrono::seconds(7)); //wait for 7 seconds

   std::cout << "Threads will be stopped soon...." << std::endl;

   signal_exit.set_value(); //set value into promise

   my_thread.join(); //join the thread with the main thread
   
   std::cout << "Doing task in main function" << std::endl;
}