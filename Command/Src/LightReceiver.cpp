#include <iostream>

#include "LightReceiver.hpp"

LightReceiver::LightReceiver() : state_(false) {}

void LightReceiver::turn_on()
{
    state_ = true;
}

void LightReceiver::turn_off()
{
    state_ = false;
}

bool LightReceiver::getState()
{
    return state_;
}
