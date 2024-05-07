#include <iostream>

#include "BookParser.hpp"
#include "LazyBookParserProxy.hpp"

void ClientCode(IBookParser& bookParser)
{
    std::cout << bookParser.getLettersAmount() << std::endl;
}

int main()
{
    std::string book = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    LazyBookParserProxy lazyBookParserProxy(book);

    ClientCode(lazyBookParserProxy);

    // Output:
    // >> LazyBookParserProxy::getLettersAmount()
    // >> BookParser constructor invoked - "expensive operation"
    // >> 56

    return 0;
}