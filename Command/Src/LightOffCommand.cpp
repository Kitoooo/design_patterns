#include "LightOffCommand.hpp"

LightOffCommand::LightOffCommand(LightReceiver *receiver) : receiver_(receiver){};
void LightOffCommand::execute()
{
    receiver_->turn_off();
}
void LightOffCommand::undo()
{
    receiver_->turn_on();
}