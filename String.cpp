#include "String.hpp"
#include <iostream>


//Constructors

String::String()
{
	std::cout << "\nDefault String Class Created" << std::endl;

	char string[] = "default";

	this->str = new char[strlen(string + 1)];

	this->str = string;

	std::cout << "String reads: " << this->str << "\n" << std::endl;
}

String::String(const char *str)
{
	std::cout << "\nString Class Created" << std::endl;

	this->str = new char[strlen(str + 1)];

	strcpy(this->str, str);

	std::cout << "String reads: " << this->str << "\n" << std::endl;
}

String::String(const String &other)
{

}

//Destructor

String::~String()
{
	std::cout << "\n" << str << " Destroyed\n" << std::endl;

	delete[] str;
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

	if (index < 0 || index > len)
	{
		return '\0';
	}
	else
	{
		return (str[index]);
	}
}

bool String::EqualTo(const String &other) const
{
	if (strcmp(this->str, other.str))
	{
		return false;
	}
	else
	{
		return true;
	}
}

void String::Append(const String &other)
{
	char tempstr[strlen(this->str + 1)];

	strcpy(tempstr, this->str);

	delete[] this->str;

	str = new char[(strlen(tempstr) + strlen(other.str) + 1)];

	strcpy(this->str, tempstr);

	strcat(this->str, other.str);

	return;
}

void String::Prepend(const String &other)
{
	char tempstr[strlen(this->str + 1)];

	strcpy(tempstr, this->str);

	delete[] this->str;

	this->str = new char[(strlen(tempstr) + strlen(other.str) + 1)];

	strcpy(this->str, other.str);

	strcat(this->str, tempstr);

	return;
}

const char* String::CStr() const
{
	return (str); //Lol
}

void String::ToLower()
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}

	return;
}

void String::ToUpper()
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return;
}



