#include <iostream>
#include "UIFactory.hpp"
#include "LinuxUIFactory.hpp"
#include "WindowsUIFactory.hpp"

void ClientCode(UIFactory *factory)
{
    Button *button = factory->createButton();
    Alert *alert = factory->createAlert();

    button->render();
    alert->render();

    delete button;
    delete alert;
}
int main()
{

    UIFactory *linux_factory = new LinuxUIFactory();
    ClientCode(linux_factory);
    // Output:
    // Linux Button
    // Linux Alert

    UIFactory *windows_factory = new WindowsUIFactory();
    ClientCode(windows_factory);
    // Output:
    // Windows Button
    // Windows Alert

    delete linux_factory;
    delete windows_factory;
    return 0;
}
