#include "String.hpp"
#include <iostream>

int main()
{
	{
		String s("Hello, World!");
		std::cout << s.CStr() << std::endl;
	}

	std::cout << std::endl;

	{
		String s("012345");
		std::cout << "Character at index 3: " << s.CharacterAt(3) << std::endl;
	}

	std::cout << std::endl;

	{
		String s("Hello, World!");
		String s2("Hello, World!");
		std::cout << "Are the strings equal? " << s.EqualTo(s2) << std::endl;
	
	}


	String r("word HERE word word HERE word HERE word");
	String find("HERE");
	String replace("HER");
	r.Replace(find, replace);
	std::cout << r.CStr() << std::endl;
	return 0;
}

