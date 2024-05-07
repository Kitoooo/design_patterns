#ifndef BOOKPARSER_HPP
#define BOOKPARSER_HPP

#include <string>

#include "IBookParser.hpp"

class BookParser : public IBookParser
{
public:
    BookParser(std::string book);
    int getLettersAmount();
private:
    int lettersAmount_ = 0;
};

#endif // BOOKPARSER_HPP