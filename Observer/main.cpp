#include <iostream>
#include <list>
#include <random>

class IObservable;

class IObserver
{
public:
    virtual ~IObserver(){};
    virtual void update() = 0;
};

class IObservable
{
public:
    virtual ~IObservable(){};
    virtual void addObserver(IObserver *observer) = 0;
    virtual void removeObserver(IObserver *observer) = 0;

protected:
    virtual void notifyObservers() = 0;
};

class WeatherStation : IObservable
{
public:
    void addObserver(IObserver *observer)
    {
        observers.push_back(observer);
    }
    void removeObserver(IObserver *observer)
    {
        observers.remove(observer);
    }

    void setTemperature(double temperature)
    {
        this->temperature = temperature;
        std::cout << "Temperature set: " << this->temperature << std::endl;
        notifyObservers();
    }

    double getTemperature()
    {
        return this->temperature;
    }

protected:
    void notifyObservers()
    {
        for (const auto &observer : observers)
        {
            observer->update();
        }
    }

private:
    std::list<IObserver *> observers;
    double temperature = 0;
};

class PhoneDisplay : IObserver
{
public:
    PhoneDisplay(WeatherStation *weatherStation) : weatherStation_(weatherStation)
    {
        weatherStation->addObserver(this);
    }
    void update()
    {
        std::cout << "Phone display updated temperature: "<< weatherStation_->getTemperature() << std::endl;
    }

protected:
    IObservable *observable;
    WeatherStation *weatherStation_;
};

class LCDDisplay : IObserver
{
public:
    LCDDisplay(WeatherStation *weatherStation) : weatherStation_(weatherStation)
    {
        weatherStation->addObserver(this);
    }
    void update()
    {
        std::cout << "LCD display updated temperature: " << weatherStation_->getTemperature() << std::endl;
    }
protected:
    IObservable *observable;
    WeatherStation *weatherStation_;
};

int main()
{
    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_real_distribution<double> uniform_dist(-20, 40);

    WeatherStation weatherStation;
    PhoneDisplay phoneDisplay(&weatherStation);
    LCDDisplay lcdDisplay(&weatherStation);

    for (int i = 0; i < 10; i++)
    {
        weatherStation.setTemperature(uniform_dist(e1));
    }

    return 0;
}