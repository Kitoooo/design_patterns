#ifndef LINUXALERT_HPP
#define LINUXALERT_HPP

#include "Alert.hpp"

class LinuxAlert : public Alert
{
public:
    void render();
};

#endif // LINUXALERT_HPP