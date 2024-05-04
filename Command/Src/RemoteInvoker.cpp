#include "RemoteInvoker.hpp"

RemoteInvoker::RemoteInvoker() = default;

RemoteInvoker::RemoteInvoker(ICommand *on_command, ICommand *off_command)
    : on_command(on_command), off_command(off_command) {}

RemoteInvoker::~RemoteInvoker()
{
    delete on_command;
    delete off_command;
}

void RemoteInvoker::set_on_command(ICommand *command)
{
    on_command = command;
}

void RemoteInvoker::set_off_command(ICommand *command)
{
    off_command = command;
}

void RemoteInvoker::on_button_pressed()
{
    on_command->execute();
    command_history.push(on_command);
}

void RemoteInvoker::off_button_pressed()
{
    off_command->execute();
    command_history.push(off_command);
}

void RemoteInvoker::undo_button_pressed()
{
    command_history.top()->undo();
    command_history.pop();
}
