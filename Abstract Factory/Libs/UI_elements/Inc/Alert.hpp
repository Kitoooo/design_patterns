#ifndef ALERT_HPP
#define ALERT_HPP

#include "UIElement.hpp"

class Alert : public UIElement
{
public:
    virtual ~Alert(){};
    virtual void render() = 0;
};

#endif // ALERT_HPP