//#pragma once
#ifndef STRING_HPP
#define STRING_HPP

#include <iostream>
#include <string.h>

class String
{
public:

	//Constructors
	String();
	String(const char* str);

	String(const String& other);

	//Destructor
	~String();

public:
	size_t Length() const;
	char& CharacterAt(size_t index);
	const char& CharacterAt(size_t index) const;

	bool EqualTo(const String& other) const;

	String& Append(const String& other);
	String& Prepend(const String& other);

	const char* CStr() const;

	String& ToLower();
	String& ToUpper();

	size_t Find(const String& other);
	size_t Find(size_t startIndex, const String& other);

	String& Replace(const String& find, const String& replace);

	String& ReadFromConsole();
	String& WriteToConsole();

public:
	bool operator==(const String& _other);
	bool operator!=(const String& _other);

	String& operator=(const String& _str);

	char& operator[](size_t _index);
	const char& operator[](size_t _index) const;

private:
	char* str;
	size_t length;
	size_t capacity;
};

#endif