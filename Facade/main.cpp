#include <iostream>

class Engine
{
public:
    void start()
    {
        std::cout << "Engine started" << std::endl;
    }
};

class Lights
{
public:
    void turnOn()
    {
        std::cout << "Lights turned on" << std::endl;
    }
};
class AirConditioner
{
public:
    void turnOn()
    {
        std::cout << "Air Conditioner turned on" << std::endl;
    }
};

class Car
{
private:
    Engine engine;
    Lights lights;
    AirConditioner airConditioner;

public:
    void start()
    {
        engine.start();
        lights.turnOn();
        airConditioner.turnOn();
        std::cout << "Car started" << std::endl;
    }
};
int main()
{
    Car car;
    car.start();
    return 0;
}
