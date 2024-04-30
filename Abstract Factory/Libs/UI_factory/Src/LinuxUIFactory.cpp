#include "LinuxUIFactory.hpp"
#include "LinuxButton.hpp"
#include "LinuxAlert.hpp"

Button *LinuxUIFactory::createButton(){
    return new LinuxButton();
}

Alert *LinuxUIFactory::createAlert(){
    return new LinuxAlert();
}
