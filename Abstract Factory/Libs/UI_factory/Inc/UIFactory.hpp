#ifndef UI_FACTORY_HPP
#define UI_FACTORY_HPP

#include "Alert.hpp"
#include "Button.hpp"

class UIFactory
{
public:
    virtual ~UIFactory(){};
    virtual Alert* createAlert() = 0;
    virtual Button* createButton() = 0;
};

#endif // UI_FACTORY_HPP
