#include "WindowsUIFactory.hpp"
#include "WindowsButton.hpp"
#include "WindowsAlert.hpp"

Button *WindowsUIFactory::createButton(){
    return new WindowsButton();
}

Alert *WindowsUIFactory::createAlert(){
    return new WindowsAlert();
}
