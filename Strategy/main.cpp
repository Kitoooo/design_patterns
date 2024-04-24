#include <iostream>
#include <string>
#include <memory>

class IFlyStrategy
{
public:
    virtual void fly() const = 0;
};

class SimpleFlyStrategy : public IFlyStrategy
{
public:
    void fly() const override
    {
        std::cout << "Simple flying" << std::endl;
    }
};

class NoFlyStrategy : public IFlyStrategy
{
public:
    void fly() const override
    {
        std::cout << "No flying" << std::endl;
    }
};

class IQuackStrategy
{
public:
    virtual void quack() const = 0;
};

class SimpleQuackStrategy : public IQuackStrategy
{
public:
    void quack() const override
    {
        std::cout << "Quack!" << std::endl;
    }
};

class SqueakQuackStrategy : public IQuackStrategy
{
public:
    void quack() const override
    {
        std::cout << "Squeak!" << std::endl;
    }
};

class NoQuackStrategy : public IQuackStrategy
{
public:
    void quack() const override
    {
        std::cout << "No quack!" << std::endl;
    }
};

class Duck
{

public:
    Duck(std::unique_ptr<IFlyStrategy> flyStrategy, std::unique_ptr<IQuackStrategy> quackStrategy)
        : flyStrategy_(std::move(flyStrategy)), quackStrategy_(std::move(quackStrategy))
    {
    }
    void fly()
    {
        flyStrategy_->fly();
    }

    void quack()
    {
        quackStrategy_->quack();
    }

protected:
    std::unique_ptr<IFlyStrategy> flyStrategy_;
    std::unique_ptr<IQuackStrategy> quackStrategy_;
};

class SimpleDuck : public Duck
{
public:
    SimpleDuck()
        : Duck(std::make_unique<SimpleFlyStrategy>(), std::make_unique<SimpleQuackStrategy>())
    {
    }
};

class RubberDuck : public Duck
{
public:
    RubberDuck()
        : Duck(std::make_unique<NoFlyStrategy>(), std::make_unique<SqueakQuackStrategy>())
    {
    }
};

class WoodenDuck : public Duck
{
public:
    WoodenDuck()
        : Duck(std::make_unique<NoFlyStrategy>(), std::make_unique<NoQuackStrategy>())
    {
    }
};
int main()
{
    WoodenDuck woodenDuck;
    std::cout << "Wooden duck" << std::endl;
    woodenDuck.fly();
    woodenDuck.quack();

    std::cout << "Simple duck" << std::endl;
    SimpleDuck simpleDuck;
    simpleDuck.fly();
    simpleDuck.quack();

    std::cout << "Rubber duck" << std::endl;
    RubberDuck rubberDuck;
    rubberDuck.fly();
    rubberDuck.quack();

    return 0;
}