#ifndef LIGHT_OFF_COMMAND_HPP
#define LIGHT_OFF_COMMAND_HPP

#include "ICommand.hpp"
#include "LightReceiver.hpp"

class LightOffCommand : public ICommand
{
public:
    LightOffCommand(LightReceiver *receiver);
    void execute();
    void undo();

private:
    LightReceiver *receiver_;
};

#endif // LIGHT_OFF_COMMAND_HPP