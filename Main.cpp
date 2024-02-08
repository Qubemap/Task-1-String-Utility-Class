#include "String.hpp"
#include <iostream>

int main()
{
	{
		String hellostring("Hello, World");
		std::cout << hellostring.CStr() << std:: endl;
	}

	std::cout << std::endl;

	//char str[] = "beans";

	//std::cout << str << std::endl;

	String mystring("Cats Meow Cats ");
	String otherstring("Cats Meow Cats");
	String wrongstring("doggy");

	std::cout << "\nLength is " << mystring.Length() << std::endl;
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

	std::cout << "Find location of 'doggy' inside 'catsdoggy': " << mystring.Find("doggy") << std::endl;

	
	std::cout << "Done :3\n" << std::endl;


	return 0;
}

