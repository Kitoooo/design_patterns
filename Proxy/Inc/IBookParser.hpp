#ifndef IBOOKPARSER_HPP
#define IBOOKPARSER_HPP

class IBookParser
{
    public:
        virtual ~IBookParser(){};
        virtual int getLettersAmount() = 0;
};

#endif // IBOOKPARSER_HPP

