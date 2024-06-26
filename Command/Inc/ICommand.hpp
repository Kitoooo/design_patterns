#ifndef ICOMMAND_HPP
#define ICOMMAND_HPP

class ICommand
{
public:
    virtual ~ICommand(){};
    virtual void execute() = 0;
    virtual void undo() = 0;
};

#endif // ICOMMAND_HPP