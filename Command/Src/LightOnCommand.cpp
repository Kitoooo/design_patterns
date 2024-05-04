#include "LightOnCommand.hpp"

LightOnCommand::LightOnCommand(LightReceiver *receiver) : receiver_(receiver){};
void LightOnCommand::execute()
{
    receiver_->turn_on();
}
void LightOnCommand::undo()
{
    receiver_->turn_off();
}