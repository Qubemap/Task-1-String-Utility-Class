#include "String.hpp"
#include <iostream>

int main()
{

	//char str[] = "beans";

	//std::cout << str << std::endl;

	String mystring("Cats");
	String otherstring("Cats");
	String wrongstring("Doggy");

	std::cout << "Length is " << mystring.Length() << std::endl;
	std::cout << "Third character (position [2]) is " << mystring.CharacterAt(2) << std::endl;
	
	if (mystring.EqualTo(otherstring))
		std::cout << "string \"" << mystring.str << "\" IS equal to string \"" << otherstring.str << "\"" << std::endl;
	else
		std::cout << "string \"" << mystring.str << "\" IS NOT equal to string \"" << otherstring.str << "\"" << std::endl;

	if (mystring.EqualTo(wrongstring))
		std::cout << "string \"" << mystring.str << "\" IS equal to string \"" << wrongstring.str << "\"" << std::endl;
	else
		std::cout << "string \"" << mystring.str << "\" IS NOT equal to string \"" << wrongstring.str << "\"" << std::endl;

	mystring.Append(wrongstring);
	std::cout << "appended string is " << mystring.str << std::endl;

	otherstring.Prepend(wrongstring);
	std::cout << "prepended string is " << otherstring.str << std::endl;
	
	std::cout << "CStr thing: " << mystring.CStr() << std::endl;

	mystring.ToUpper();
	std::cout << "To upper: " << mystring.str << std::endl;

	mystring.ToLower();
	std::cout << "To lower: " << mystring.str << std::endl;

	



	return 0;
}

