#include <iostream>
#include <string>
#include <algorithm>

class ITarget
{
public:
    virtual ~ITarget(){};
    virtual std::string reversedMessage() = 0;
};

class Adaptee
{
public:
    Adaptee(std::string message) : message_(message){};
    std::string getMessage()
    {
        return message_;
    }
private:
    std::string message_;
};

class Adapter : public ITarget
{
public:
    Adapter(Adaptee *adaptee) : adaptee_(adaptee){};
    ~Adapter()
    {
        delete adaptee_;
    }
    std::string reversedMessage()
    {
        std::string message = adaptee_->getMessage();
        std::reverse(message.begin(), message.end());
        return message;
    }

private:
    Adaptee *adaptee_;
};

int main()
{
    ITarget *adapter = new Adapter(new Adaptee("Hello, World!"));
    std::cout << adapter->reversedMessage() << std::endl;
    delete adapter;
    return 0;
}