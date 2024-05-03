#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <mutex>
#include <string>

class Singleton
{
public:
    Singleton(Singleton &other) = delete;
    void operator=(const Singleton &) = delete;

    static Singleton *getInstance();
    std::string someLogic();

private:
    Singleton();
    int testValue = 0;
    static Singleton *instance_;
    static std::mutex mutex_;
};
#endif // SINGLETON_HPP
