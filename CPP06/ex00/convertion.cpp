//
// Created by Aleksey Tvorogov on 12/11/2022.
//

#include "convertion.h"

bool isPseudo(std::string &s)
{
	return s == "nan" || s == "nanf" || s == "+inf" || s == "inf" || s == "-inf"
		   || s == "+inff" || s == "inff" || s == "-inff";
}

bool checker(std::string &s)
{
	if (isPseudo(s))
		return true;

	if (s.length() == 1 && isalpha(s[0]))
	{
		s = std::to_string(static_cast<int>(s[0]));
		return true;
	}

	for (unsigned long i = 0; i < s.length(); i++)
	{
		char c = s[i];
		if (!isdigit(c) && c != '+' && c != '-' && c != 'f' && c != '.')
			return false;
	}

	return true;
}

static void toChar(std::string &s)
{
	if (isPseudo(s))
	{
		std::cout << "impossible" << std::endl;
		return;
	}

	char c = static_cast<char>(atoi(s.c_str()));
	if (c < ' ' || c > '~')
	{
		std::cout << "Non displayable" << std::endl;
		return;
	}
	std::cout << c << std::endl;
}

static void toInt(std::string &s)
{
	if (isPseudo(s))
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	std::cout << std::atoi(s.c_str()) << std::endl;
}

static void toFloat(std::string &s)
{
	float n = std::strtof(s.c_str(), nullptr);
	if (n - static_cast<int>(n) == 0)
	{
		std::cout << n << ".0f" << std::endl;
		return;
	}
	std::cout << n << "f" << std::endl;
}

static void toDouble(std::string &s)
{
	double n = std::strtod(s.c_str(), nullptr);

	if (n - static_cast<int>(n) == 0)
	{
		std::cout << n << ".0" << std::endl;
		return;
	}
	std::cout << n << std::endl;
}

void printConversation(std::string &s)
{
	std::cout << "char: ", toChar(s);
	std::cout << "int: ", toInt(s);
	std::cout << "float: ", toFloat(s);
	std::cout << "double: ", toDouble(s);
}
