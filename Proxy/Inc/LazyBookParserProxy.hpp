#ifndef LAZYBOOKPARSERPROXY_HPP
#define LAZYBOOKPARSERPROXY_HPP

#include <string>

#include "BookParser.hpp"

class LazyBookParserProxy : public IBookParser
{
public:
    LazyBookParserProxy(std::string book);
    int getLettersAmount();

private:
    std::string book;
    BookParser* bookParser = nullptr;

};

#endif // LAZYBOOKPARSERPROXY_HPP