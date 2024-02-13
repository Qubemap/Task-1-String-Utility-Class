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

	std::cout << std::endl;

	{
		String add("Oldman ");
		String name("Gary ");
		String altname(name);
		name.Append(add);
		std::cout << "appended string is " << name.str << std::endl;
		altname.Prepend(add);
		std::cout << "prepended string is " << altname.str << std::endl;
	}

	std::cout << std::endl;

	{
		String output("meow");
		std::cout << "str is: " << output.CStr() << std::endl;
	}

	std::cout << std::endl;

	{
		String mix("lowercase UPPERCASE m|x3D% ");
		String mix2(mix);
		std::cout << "String: " << mix.str << std::endl;
		mix.ToUpper();
		std::cout << "To upper: " << mix.str << std::endl;
		mix2.ToLower();
		std::cout << "To lower: " << mix2.str << std::endl;
	}

	std::cout << std::endl;

	{
		String wally("blah HERE blah blah HERE blah HERE");
		String tofind("HERE");

		std::cout << "First occurrence of \"" << tofind.CStr() << "\" in \"" << wally.CStr() << "\" is at position " << wally.Find(tofind) << std::endl;

		std::cout << "Occurrence of \"" << tofind.CStr() << "\" starting from index of 7 in \"" << wally.CStr() << "\" is at position " << wally.Find(7, tofind) << std::endl;

		String toreplace("chimichangas");

		wally.Replace(tofind, toreplace);
		std::cout << "replacing \"" << tofind.CStr() << "\" with \"" << toreplace.CStr() << "\": " << wally.CStr() << std::endl;
		std::cout << "NOTE: currently broken if replace is smaller than find value :(" << std::endl;
	}

	std::cout << std::endl;

	{
		String console;
		console.ReadFromConsole();
		console.WriteToConsole();
	}
	

	return 0;
}

