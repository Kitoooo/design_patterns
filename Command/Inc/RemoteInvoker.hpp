#ifndef REMOTEINVOKER_HPP
#define REMOTEINVOKER_HPP

#include <stack>

#include "ICommand.hpp"

class RemoteInvoker
{
public:
    RemoteInvoker();
    RemoteInvoker(ICommand *on_command, ICommand *off_command);
    ~RemoteInvoker();

    void set_on_command(ICommand *command);
    void set_off_command(ICommand *command);

    void on_button_pressed();
    void off_button_pressed();

    // The undo button cannot be set by the client
    void undo_button_pressed();

private:
    ICommand *on_command = nullptr;
    ICommand *off_command = nullptr;
    std::stack<ICommand *> command_history;
};

#endif // REMOTEINVOKER_HPP
