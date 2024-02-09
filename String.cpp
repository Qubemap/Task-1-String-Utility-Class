#include "String.hpp"
#include <iostream>


//Constructors

String::String()
{
	char def[] = "default";

	this->str = new char[strlen(def + 1)];

	strcpy(this->str, def);

	//std::cout << "Default String Object \"" << this->str << "\" created" << std::endl;
}

String::String(const char *str)
{
	this->str = new char[strlen(str + 1)];

	strcpy(this->str, str);

	//std::cout << "String Object \"" << this->str << "\" created" << std::endl;
}

String::String(const String &other)
{
	this->str = new char[strlen(other.str + 1)];

	strcpy(this->str, other.str);

	//std::cout << "Copied String Object \"" << this->str << "\" created" << std::endl;
}

//Destructor

String::~String()
{
	//std::cout << "\""<< str << "\" Destroyed" << std::endl;

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
		{
			str[i] = str[i] + 32;
		}
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

size_t String::Find(const String &tofind)
{
	size_t i = 0;
	int j;

	while(str[i] != '\0')
	{
		j = 0;
		while(tofind.str[j] == str[i + j])
		{
			if (tofind.str[j + 1] == '\0')
			{
				return(i + 1);
			}
			j++;
		}
		i++;
	}
	return (-1);
}

size_t String::Find(size_t startIndex, const String &tofind)
{
	size_t i = startIndex;
	int j;

	while(str[i] != '\0')
	{
		j = 0;
		while(tofind.str[j] == str[i + j])
		{
			if (tofind.str[j + 1] == '\0')
			{
				return(i + 1);
			}
			j++;
		}
		i++;
	}
	return (-1);
}


void String::Replace(const String &tofind, const String &toreplace)
{
	//ugh. memory allocation. find how many instances of the substring exist. find the difference in memory
	int findcount = 0;
	int index = 0;

	while (Find(index, tofind.str) != -1)
	{
		index = Find(index, tofind.str) + 1;
		findcount++;
	}

	//std::cout << findcount << " FOUND" << std::endl;

	if (findcount == 0)
	{
		std::cout << "no findcount" << std::endl;
		return;
	}

	int strdiff = (strlen(toreplace.str) - strlen(tofind.str));

	String tempstr(this->str);

	delete[] str;

	size_t total = (strlen(tempstr.str) + (strdiff * findcount));
	this->str = new char[total + 1];

	//std::cout << "total is " << total << std::endl;

	index = tempstr.Find(tofind);
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < total)
	{
		if (k == index - 1)
		{
			j = 0;
			while(toreplace.str[j] != '\0')
			{
				str[i + j] = toreplace.str[j];
				j++;
			}

			index++;
			index = tempstr.Find(index, tofind);
			i = i + strlen(toreplace.str);
			k = k + strlen(tofind.str);
		}
		else
		{
			str[i] = tempstr.str[k];
			i++;
			k++;
		}
		
	}

	return;
}

/*
void String::ReadFromConsole()
{
	char s;

	std::cout << "Enter a string: ";
	std::cin >> s;

	this->str = new char[strlen(s + 1)];

	strcpy(this->str, s);
	
}

void String::WriteToConsole()
{
	std::cout << this->str << std::endl;
}
*/
