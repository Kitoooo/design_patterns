#include <iostream>
#include <thread>
#include "Singleton.hpp"

void Thread1()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton *singleton = Singleton::getInstance();
    std::cout << singleton->someLogic() << std::endl;
}

void Thread2()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton *singleton = Singleton::getInstance();
    std::cout << singleton->someLogic() << std::endl;
}
int main()
{

    std::thread t1(Thread1);
    std::thread t2(Thread2);

    t1.join();
    t2.join();

    //Output:
    //> Singleton logic    testValue: 1
    //> Singleton logic    testValue: 1


    return 0;
}