#ifndef WINDOWSUIFACTORY_HPP
#define WINDOWSUIFACTORY_HPP

#include "UIFactory.hpp"

class WindowsUIFactory : public UIFactory
{
public:
    Button *createButton();
    Alert *createAlert();
};

#endif // WINDOWSUIFACTORY_HPP