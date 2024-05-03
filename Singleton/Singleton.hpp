#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <mutex>
#include <string>

class Singleton
{
public:
    std::string someLogic();
    static Singleton *getInstance();

private:
    Singleton();
    int testValue = 0;
    static Singleton *instance_;
    static std::mutex mutex_;
};
#endif // SINGLETON_HPP
