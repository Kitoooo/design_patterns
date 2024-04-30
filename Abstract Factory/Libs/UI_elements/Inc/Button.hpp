#ifndef BUTTON_HPP
#define BUTTON_HPP

#include "UIElement.hpp"
class Button : public UIElement
{
public:
    virtual ~Button(){};
    virtual void render() = 0;
};

#endif // BUTTON_HPP