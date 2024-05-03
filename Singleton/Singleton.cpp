#include <iostream>

#include "Singleton.hpp"

Singleton::Singleton()
{
    testValue++;
}
std::string Singleton::someLogic()
{
    return "Singleton logic\ttestValue: " + std::to_string(testValue);
}

Singleton *Singleton::instance_ = nullptr;
std::mutex Singleton::mutex_;

Singleton *Singleton::getInstance()
{
    std::lock_guard<std::mutex> lock(mutex_);
    if (instance_ == nullptr)
    {
        instance_ = new Singleton();
    }
    return instance_;
}
