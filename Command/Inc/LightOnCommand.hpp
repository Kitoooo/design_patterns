#ifndef LIGHT_ON_COMMAND_HPP
#define LIGHT_ON_COMMAND_HPP

#include "ICommand.hpp"
#include "LightReceiver.hpp"

class LightOnCommand : public ICommand
{
public:
    LightOnCommand(LightReceiver *receiver);
    void execute();
    void undo();

private:
    LightReceiver *receiver_;
};

#endif // LIGHT_ON_COMMAND_HPP