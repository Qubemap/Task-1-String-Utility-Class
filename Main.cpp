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
		std::cout << "-= Length Test =-" << std::endl;
		String s("Hello, World!");
		std::cout << "s reads: " << s.CStr() << std::endl;
		std::cout << "Length of s: " << s.Length() << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= Character At Test =-" << std::endl;
		String s("012345");
		std::cout << "Character at index 3: " << s.CharacterAt(3) << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= Equal To Test =-" << std::endl;
		String s1("Hello, World!");
		String s2("Hello, World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		std::cout << "Are the strings equal? (1 being true, 0 false): " << s1.EqualTo(s2) << std::endl;
	
	}

	std::cout << std::endl;

	{
		std::cout << "-= Append Test =-" << std::endl;
		String s1("Hello, ");
		String s2("World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		s1.Append(s2);
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= Prepend Test =-" << std::endl;
		String s1("Hello, ");
		String s2("World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		s2.Prepend(s1);
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= To Lower Test =-" << std::endl;
		String s("MAKE me LOWER case 123%^&");
		std::cout << "s reads: " << s.CStr() << std::endl;
		s.ToLower();
		std::cout << "s reads: " << s.CStr() << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= To Upper Test =-" << std::endl;
		String s("make me UPPER case 123%^&");
		std::cout << "s reads: " << s.CStr() << std::endl;
		s.ToUpper();
		std::cout << "s reads: " << s.CStr() << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= Find Test =-" << std::endl;
		String s("Hello, World!");
		String find("World");
		std::cout << "s reads: " << s.CStr() << std::endl;
		std::cout << "The string " << find.CStr() << " is found at index " << s.Find(find) << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= Find (from index) Test =-" << std::endl;
		String s("Hello, World! Hello, World!");
		String find("World");
		std::cout << "s reads: " << s.CStr() << std::endl;
		std::cout << "The string " << find.CStr() << " is found at index (starting from position 10) " << s.Find(10, find) << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= Replace Test =-" << std::endl;
		String s("word HERE word word HERE word HERE word");

		String find("HERE");
		String replace("MEOW");
		std::cout << "s reads: " << s.CStr() << std::endl;
		std::cout << "Replacing " << find.CStr() << " with " << replace.CStr() << std::endl;
		s.Replace(find, replace);
		std::cout << "s reads: " << s.CStr() << std::endl << std::endl;

		std::cout << "- Longer replacement word test -" << std::endl;
		String s2("word HERE word word HERE word HERE word");
		String find2("HERE");
		String replace2("chimichangas");
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		std::cout << "Replacing " << find2.CStr() << " with " << replace2.CStr() << std::endl;
		s2.Replace(find2, replace2);
		std::cout << "s2 reads: " << s2.CStr() << std::endl << std::endl;

		std::cout << "- Shorter replacement word test -" << std::endl;
		String s3("word HERE word word HERE word HERE word");
		String find3("HERE");
		String replace3("a");
		std::cout << "s3 reads: " << s3.CStr() << std::endl;
		std::cout << "Replacing " << find3.CStr() << " with " << replace3.CStr() << std::endl;
		s3.Replace(find3, replace3);
		std::cout << "s3 reads: " << s3.CStr() << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= Read and Write From Console Test =-" << std::endl;
		String s;
		std::cout << "Enter a string: ";
		s.ReadFromConsole();
		std::cout << "You entered: " << s.CStr() << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= Operator == Test =-" << std::endl;
		String s1("Hello, World!");
		String s2("Hello, World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		std::cout << "Are the strings equal? (1 being true, 0 false): " << (s1 == s2) << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= Operator != Test =-" << std::endl;
		String s1("Hello, World!");
		String s2("Hello, World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		std::cout << "Are the strings not equal? (1 being true, 0 false): " << (s1 != s2) << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= Operator = Test =-" << std::endl;
		String s1("Hello, World!");
		String s2 ("Hello, World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		s2 = s1;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= Operator [] Test =-" << std::endl;
		String s("Hello, World!");
		std::cout << "s reads: " << s.CStr() << std::endl;
		std::cout << "Character at index 3: " << s[3] << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= Operator < Test =-" << std::endl;
		String s1("Hello, World!");
		String s2("Hello, World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		std::cout << "Is s1 less than s2? (1 being true, 0 false): " << (s1 < s2) << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= Operator + Test =-" << std::endl;
		String s1("Hello, ");
		String s2("World!");
		String s3;
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		s3 = s1 + s2;
		std::cout << "s3 reads: " << s3.CStr() << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "-= Operator += Test =-" << std::endl;
		String s1("Hello, ");
		String s2("World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		s1 += s2;
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
	}



}

