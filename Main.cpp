#include "String.hpp"
#include <iostream>

int main()
{
	{
		String hellostring("Hello, World");
		std::cout << hellostring.CStr() << std:: endl;
	}

	{
		String boring;
		String construct("Peanuts");
		String duplicate(construct);
	}

	std::cout << std::endl;

	{
		String lenstr("12345");
		std::cout << "Length of String: \"" << lenstr.CStr() << "\" is " << lenstr.Length() << std::endl;
		String longstr("1234567890");
		std::cout << "Length of String: \"" << longstr.CStr() << "\" is " << longstr.Length() << std::endl;
	}

	std::cout << std::endl;

	{
		String stringpos("012345");
		std::cout << "Char at position [3] in string: \"" << stringpos.CStr() << "\" is " << stringpos.CharacterAt(3) << std::endl;
		std::cout << "Char at position [0] in string: \"" << stringpos.CStr() << "\" is " << stringpos.CharacterAt(0) << std::endl;
	}

	std::cout << std::endl;

	{
		String match1("match");
		String match2("match");
		if (match1.EqualTo(match2))
		std::cout << "string \"" << match1.str << "\" IS equal to string \"" << match2.str << "\"" << std::endl;
		else
		std::cout << "string \"" << match1.str << "\" IS NOT equal to string \"" << match2.str << "\"" << std::endl;
		
		String mismatch("mismatch");
		if (match1.EqualTo(mismatch))
		std::cout << "string \"" << match1.str << "\" IS equal to string \"" << mismatch.str << "\"" << std::endl;
		else
		std::cout << "string \"" << match1.str << "\" IS NOT equal to string \"" << mismatch.str << "\"" << std::endl;

	}

	/*
	
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

	std::cout << "Find location of 'doggy' inside 'catsdoggy': " << mystring.Find(String foundstring("doggy")) << std::endl;

	
	std::cout << "Done :3\n" << std::endl;
	*/

	return 0;
}

