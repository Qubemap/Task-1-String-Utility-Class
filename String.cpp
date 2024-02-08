#include "String.hpp"
#include <iostream>

//Constructors

String::String()
{
    std::cout << "\nDefault String Class Created" << std::endl;

    this->str = "Default";

    std::cout << "String reads: " << this->str << "\n" << std::endl;
}

String::String(const char *str)
{
    std::cout << "\nString Class Created" << std::endl;

    this->str = str;

    std::cout << "String reads: " << this->str << "\n" << std::endl;
}

String::String(const String &other)
{

}

//Destructor

String::~String()
{
    std::cout << str << " Destroyed\n" << std::endl;
}

//Functions

size_t String::Length() const
{
    size_t i = 0;

    while(str[i])
    {
        i++;
    }

    return i;
}

char String::CharacterAt(size_t index)
{
    size_t len = Length();

    
}