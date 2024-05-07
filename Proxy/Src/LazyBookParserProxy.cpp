#include <iostream>

#include "LazyBookParserProxy.hpp"

LazyBookParserProxy::LazyBookParserProxy(std::string book) : book(book){};

int LazyBookParserProxy::getLettersAmount()
{
    std::cout << "LazyBookParserProxy::getLettersAmount()" << std::endl;
    if (bookParser == nullptr)
    {
        bookParser = new BookParser(book);
    }
    return bookParser->getLettersAmount();
}