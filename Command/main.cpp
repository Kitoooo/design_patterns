#include <iostream>

#include "RemoteInvoker.hpp"
#include "LightReceiver.hpp"
#include "LightOnCommand.hpp"
#include "LightOffCommand.hpp"

void print_light_state(LightReceiver *light)
{
    std::cout << "The light is " << (light->getState() ? "on" : "off") << std::endl;
}

int main()
{
    LightReceiver *light = new LightReceiver();
    RemoteInvoker *remote = new RemoteInvoker();

    remote->set_on_command(new LightOnCommand(light));
    remote->set_off_command(new LightOffCommand(light));

    print_light_state(light);
    std::cout << "Pressing the on button" << std::endl;
    remote->on_button_pressed();
    print_light_state(light);
    std::cout << "Pressing the off button" << std::endl;
    remote->off_button_pressed();
    print_light_state(light);
    std::cout << "Pressing the undo button" << std::endl;
    remote->undo_button_pressed();
    print_light_state(light);
    std::cout << "Pressing the undo button" << std::endl;
    remote->undo_button_pressed();
    print_light_state(light);
    return 0;
}