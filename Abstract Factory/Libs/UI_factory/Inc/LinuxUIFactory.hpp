#ifndef LINUXUIFACTORY_HPP
#define LINUXUIFACTORY_HPP

#include "UIFactory.hpp"

class LinuxUIFactory : public UIFactory
{
public:
    Button *createButton();
    Alert *createAlert();
};

#endif // LINUXUIFACTORY_HPP