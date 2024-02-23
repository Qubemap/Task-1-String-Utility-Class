#include "String.h"
#include <iostream>
#include <fstream>

//Prints Time and Date to console and File
void ft_Time()
{
	std::fstream file;
	time_t now = time(0);
	file.open("test.txt", std::ios::app);

	struct tm *tstruct;

	tstruct = localtime(&now);

	int sec = tstruct->tm_sec;
	int min = tstruct->tm_min;
	int hour = tstruct->tm_hour;
	int day = tstruct->tm_mday;
	int month = tstruct->tm_mon + 1;
	int year = tstruct->tm_year + 1900;

	file << "=============================================" << std::endl;
	std::cout << "Time: " << hour << ":" << min << ":" << sec << std::endl;
	file << "Time: " << hour << ":" << min << ":" << sec << std::endl;
	std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
	file << "Date: " << day << "/" << month << "/" << year << std::endl;
	file << "=============================================" << std::endl;

	std::cout << std::endl;
	file << std::endl;

	file.close();
}

int main()
{
	ft_Time();
	std::fstream file;
	file.open("test.txt", std::ios::app);
	{
		String s("Hello, World!");
		std::cout << s.CStr() << std::endl;
		file << s.CStr() << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Length Test =-" << std::endl;
		file << "-= Length Test =-" << std::endl;
		std::cout << "Expected Output: 13" << std::endl;
		file << "Expected Output: 13" << std::endl;
		String s("Hello, World!");
		std::cout << "s reads: " << s.CStr() << std::endl;
		file << "s reads: " << s.CStr() << std::endl;
		std::cout << "Length of s: " << s.Length() << std::endl;
		file << "Length of s: " << s.Length() << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Character At Test =-" << std::endl;
		file << "-= Character At Test =-" << std::endl;
		std::cout << "Expected Output: 3" << std::endl;
		file << "Expected Output: 3" << std::endl;
		String s("012345");
		std::cout << "Character at index 3: " << s.CharacterAt(3) << std::endl;
		file << "Character at index 3: " << s.CharacterAt(3) << std::endl;

	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Equal To Test =-" << std::endl;
		file << "-= Equal To Test =-" << std::endl;
		std::cout << "Expected Output: 1" << std::endl;
		file << "Expected Output: 1" << std::endl;
		String s1("Hello, World!");
		String s2("Hello, World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		file << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		file << "s2 reads: " << s2.CStr() << std::endl;
		std::cout << "Are the strings equal? (1 being true, 0 false): " << s1.EqualTo(s2) << std::endl;
		file << "Are the strings equal? (1 being true, 0 false): " << s1.EqualTo(s2) << std::endl;
	
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Append Test =-" << std::endl;
		file << "-= Append Test =-" << std::endl;
		std::cout << "Expected Output: Hello, World!" << std::endl;
		file << "Expected Output: Hello, World!" << std::endl;
		String s1("Hello, ");
		String s2("World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		file << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		file << "s2 reads: " << s2.CStr() << std::endl;
		s1.Append(s2);
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		file << "s1 reads: " << s1.CStr() << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Prepend Test =-" << std::endl;
		file << "-= Prepend Test =-" << std::endl;
		std::cout << "Expected Output: Hello, World! " << std::endl;
		file << "Expected Output: Hello, World! " << std::endl;
		String s1("Hello, ");
		String s2("World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		file << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		file << "s2 reads: " << s2.CStr() << std::endl;
		s2.Prepend(s1);
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		file << "s2 reads: " << s2.CStr() << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= To Lower Test =-" << std::endl;
		file << "-= To Lower Test =-" << std::endl;
		std::cout << "Expected Output: make me lower case 123%^&" << std::endl;
		file << "Expected Output: make me lower case 123%^&" << std::endl;
		String s("MAKE me LOWER case 123%^&");
		std::cout << "s reads: " << s.CStr() << std::endl;
		file << "s reads: " << s.CStr() << std::endl;
		s.ToLower();
		std::cout << "s reads: " << s.CStr() << std::endl;
		file << "s reads: " << s.CStr() << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= To Upper Test =-" << std::endl;
		file << "-= To Upper Test =-" << std::endl;
		std::cout << "Expected Output: MAKE ME UPPER CASE 123%^&" << std::endl;
		file << "Expected Output: MAKE ME UPPER CASE 123%^&" << std::endl;
		String s("make me UPPER case 123%^&");
		std::cout << "s reads: " << s.CStr() << std::endl;
		file << "s reads: " << s.CStr() << std::endl;
		s.ToUpper();
		std::cout << "s reads: " << s.CStr() << std::endl;
		file << "s reads: " << s.CStr() << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Find Test =-" << std::endl;
		file << "-= Find Test =-" << std::endl;
		std::cout << "Expected Output: 7" << std::endl;
		file << "Expected Output: 7" << std::endl;
		String s("Hello, World!");
		String find("World");
		std::cout << "s reads: " << s.CStr() << std::endl;
		file << "s reads: " << s.CStr() << std::endl;
		std::cout << "The string " << find.CStr() << " is found at index " << s.Find(find) << std::endl;
		file << "The string " << find.CStr() << " is found at index " << s.Find(find) << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Find (from index) Test =-" << std::endl;
		file << "-= Find (from index) Test =-" << std::endl;
		std::cout << "Expected Output: 21" << std::endl;
		file << "Expected Output: 21" << std::endl;
		String s("Hello, World! Hello, World!");
		String find("World");
		std::cout << "s reads: " << s.CStr() << std::endl;
		file << "s reads: " << s.CStr() << std::endl;
		std::cout << "The string " << find.CStr() << " is found at index (starting from position 10) " << s.Find(10, find) << std::endl;
		file << "The string " << find.CStr() << " is found at index (starting from position 10) " << s.Find(10, find) << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Replace Test =-" << std::endl;
		file << "-= Replace Test =-" << std::endl;
		String s("word HERE word word HERE word HERE word");

		std::cout << "Expected Output: word MEOW word word MEOW word MEOW word" << std::endl;
		file << "Expected Output: word MEOW word word MEOW word MEOW word" << std::endl;
		String find("HERE");
		String replace("MEOW");
		std::cout << "s reads: " << s.CStr() << std::endl;
		file << "s reads: " << s.CStr() << std::endl;
		std::cout << "Replacing " << find.CStr() << " with " << replace.CStr() << std::endl;
		file << "Replacing " << find.CStr() << " with " << replace.CStr() << std::endl;
		s.Replace(find, replace);
		std::cout << "s reads: " << s.CStr() << std::endl << std::endl;
		file << "s reads: " << s.CStr() << std::endl << std::endl;

		std::cout << "- Longer replacement word test -" << std::endl;
		file << "- Longer replacement word test -" << std::endl;
		std::cout << "Expected Output: word chimichangas word word chimichangas word chimichangas word" << std::endl;
		file << "Expected Output: word chimichangas word word chimichangas word chimichangas word" << std::endl;
		String s2("word HERE word word HERE word HERE word");
		String find2("HERE");
		String replace2("chimichangas");
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		file << "s2 reads: " << s2.CStr() << std::endl;
		std::cout << "Replacing " << find2.CStr() << " with " << replace2.CStr() << std::endl;
		file << "Replacing " << find2.CStr() << " with " << replace2.CStr() << std::endl;
		s2.Replace(find2, replace2);
		std::cout << "s2 reads: " << s2.CStr() << std::endl << std::endl;
		file << "s2 reads: " << s2.CStr() << std::endl << std::endl;

		std::cout << "- Shorter replacement word test -" << std::endl;
		file << "- Shorter replacement word test -" << std::endl;
		std::cout << "Expected Output: word a word word a word a word" << std::endl;
		file << "Expected Output: word a word word a word a word" << std::endl;
		String s3("word HERE word word HERE word HERE word");
		String find3("HERE");
		String replace3("a");
		std::cout << "s3 reads: " << s3.CStr() << std::endl;
		file << "s3 reads: " << s3.CStr() << std::endl;
		std::cout << "Replacing " << find3.CStr() << " with " << replace3.CStr() << std::endl;
		file << "Replacing " << find3.CStr() << " with " << replace3.CStr() << std::endl;
		s3.Replace(find3, replace3);
		std::cout << "s3 reads: " << s3.CStr() << std::endl;
		file << "s3 reads: " << s3.CStr() << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Read and Write From Console Test =-" << std::endl;
		file << "-= Read and Write From Console Test =-" << std::endl;
		std::cout << "Expected Output: USER INPUT" << std::endl;
		file << "Expected Output: USER INPUT" << std::endl;
		String s;
		std::cout << "Enter a string: ";
		s.ReadFromConsole();
		std::cout << "You entered: " << s.CStr() << std::endl;
		file << "You entered: " << s.CStr() << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Operator == Test =-" << std::endl;
		file << "-= Operator == Test =-" << std::endl;
		std::cout << "Expected Output: 1" << std::endl;
		file << "Expected Output: 1" << std::endl;
		String s1("Hello, World!");
		String s2("Hello, World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		file << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		file << "s2 reads: " << s2.CStr() << std::endl;
		std::cout << "Are the strings equal? (1 being true, 0 false): " << (s1 == s2) << std::endl;
		file << "Are the strings equal? (1 being true, 0 false): " << (s1 == s2) << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Operator != Test =-" << std::endl;
		file << "-= Operator != Test =-" << std::endl;
		std::cout << "Expected Output: 0" << std::endl;
		file << "Expected Output: 0" << std::endl;
		String s1("Hello, World!");
		String s2("Hello, World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		file << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		file << "s2 reads: " << s2.CStr() << std::endl;
		std::cout << "Are the strings not equal? (1 being true, 0 false): " << (s1 != s2) << std::endl;
		file << "Are the strings not equal? (1 being true, 0 false): " << (s1 != s2) << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Operator = Test =-" << std::endl;
		file << "-= Operator = Test =-" << std::endl;
		std::cout << "Expected Output: Hello, World!" << std::endl;
		file << "Expected Output: Hello, World!" << std::endl;
		String s1("Hello, World!");
		String s2 ("Hello, World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		file << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		file << "s2 reads: " << s2.CStr() << std::endl;
		s2 = s1;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		file << "s2 reads: " << s2.CStr() << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Operator [] Test =-" << std::endl;
		file << "-= Operator [] Test =-" << std::endl;
		std::cout << "Expected Output: l" << std::endl;
		file << "Expected Output: l" << std::endl;
		String s("Hello, World!");
		std::cout << "s reads: " << s.CStr() << std::endl;
		file << "s reads: " << s.CStr() << std::endl;
		std::cout << "Character at index 3: " << s[3] << std::endl;
		file << "Character at index 3: " << s[3] << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Operator < Test =-" << std::endl;
		file << "-= Operator < Test =-" << std::endl;
		std::cout << "Expected Output: 0" << std::endl;
		file << "Expected Output: 0" << std::endl;
		String s1("Hello, World!");
		String s2("Hello, World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		file << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		file << "s2 reads: " << s2.CStr() << std::endl;
		std::cout << "Is s1 less than s2? (1 being true, 0 false): " << (s1 < s2) << std::endl;
		file << "Is s1 less than s2? (1 being true, 0 false): " << (s1 < s2) << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Operator + Test =-" << std::endl;
		file << "-= Operator + Test =-" << std::endl;
		std::cout << "Expected Output: Hello, World!" << std::endl;
		file << "Expected Output: Hello, World!" << std::endl;
		String s1("Hello, ");
		String s2("World!");
		String s3;
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		file << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		file << "s2 reads: " << s2.CStr() << std::endl;
		s3 = s1 + s2;
		std::cout << "s3 reads: " << s3.CStr() << std::endl;
		file << "s3 reads: " << s3.CStr() << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	{
		std::cout << "-= Operator += Test =-" << std::endl;
		file << "-= Operator += Test =-" << std::endl;
		std::cout << "Expected Output: Hello, World!" << std::endl;
		file << "Expected Output: Hello, World!" << std::endl;
		String s1("Hello, ");
		String s2("World!");
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		file << "s1 reads: " << s1.CStr() << std::endl;
		std::cout << "s2 reads: " << s2.CStr() << std::endl;
		file << "s2 reads: " << s2.CStr() << std::endl;
		s1 += s2;
		std::cout << "s1 reads: " << s1.CStr() << std::endl;
		file << "s1 reads: " << s1.CStr() << std::endl;
	}

	std::cout << std::endl;
	file << std::endl;

	file.close();

	return 0;
}

