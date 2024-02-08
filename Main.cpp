#include "String.hpp"
#include <iostream>

int main()
{

    //char str[] = "beans";

    //std::cout << str << std::endl;

    String mystring("beans");

    std::cout << "Length is " << mystring.Length() << std::endl;

    return 0;

}