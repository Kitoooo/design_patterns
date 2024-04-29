#include <iostream>

class Beverage
{
public:
    virtual ~Beverage(){};
    virtual double cost() = 0;
};

class Espresso : public Beverage
{
public:
    double cost() override
    {
        return 1.99;
    }
};

class AddonDecorator : public Beverage
{
public:
    virtual ~AddonDecorator(){};
    virtual double cost() = 0;
};

class AddonDecoratorMilk : public AddonDecorator
{
public:
    AddonDecoratorMilk(Beverage *beverage)
    {
        this->baseBeverage = beverage;
    }
    double cost() override
    {
        return 0.10 + baseBeverage->cost();
    }

private:
    Beverage *baseBeverage;
};

class AddonDecoratorSoy : public AddonDecorator
{
public:
    AddonDecoratorSoy(Beverage *beverage)
    {
        this->baseBeverage = beverage;
    }
    double cost() override
    {
        return 0.15 + baseBeverage->cost();
    }

private:
    Beverage *baseBeverage;
};

int main()
{
    Beverage *espresso = new Espresso();
    std::cout << "Espresso: " << espresso->cost() << std::endl;

    Beverage *espressoWithMilk = new AddonDecoratorMilk(espresso);
    std::cout << "Espresso with milk: " << espressoWithMilk->cost() << std::endl;
    
    Beverage *espressoWithMilkAndSoy = new AddonDecoratorSoy(espressoWithMilk);
    std::cout << "Espresso with milk and soy: " << espressoWithMilkAndSoy->cost() << std::endl;

    delete espressoWithMilkAndSoy;
    delete espressoWithMilk;
    delete espresso;
    return 0;
}