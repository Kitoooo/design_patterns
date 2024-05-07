#include <iostream>

#include "BookParser.hpp"

BookParser::BookParser(std::string book)
{
    std::cout<<"BookParser constructor invoked - \"expensive operation\""<<std::endl;
    lettersAmount_ = book.size();
}

int BookParser::getLettersAmount()
{
    return lettersAmount_;
}