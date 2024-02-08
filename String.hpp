//#pragma once
#ifndef STRING_HPP
#define STRING_HPP

#include <iostream>
#include <string.h>

class String
{
public:

	//Constructors
	String(); //Default
	String(const char* str);
	String(const String& other); //Copy

	//Destructor
	~String();

	//Vars
	char *str;

	//Funcs
	size_t Length() const;

	char CharacterAt(size_t index);

	//const char &CharacterAt(size_t index) const;

	bool EqualTo(const String& other) const;

	void Append(const String &other);
	void Prepend(const String &other);

	const char* CStr() const;

	void ToLower();
	void ToUpper();

	size_t Find(const String& str);
	size_t Find(size_t _startIndex, const String& str);

	String& Replace(const String& _find, const String& replace);

	String& ReadFromConsole();
	String& WriteToConsole();

public:
	bool operator==(const String& other);
	bool operator!=(const String& other);

	String& operator=(const String& str);

	char& operator[](size_t index);
	const char& operator[](size_t index) const;


private:

};

#endif