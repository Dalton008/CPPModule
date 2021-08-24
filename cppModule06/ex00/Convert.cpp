/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:06:14 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/24 13:28:43 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{}

Convert::Convert(const Convert &convert)
{
	*this = convert;
}

Convert& Convert::operator=(const Convert &convert)
{
	if (this == &convert)
		return *this;
	return *this;
}

Convert::~Convert(void)
{}

std::string Convert::getType(void)
{
	return type;
}

const char* Convert::InvalidInput::what() const throw()
{
	return "Invalid input!";
}

bool Convert::checkDigit(std::string str)
{
	size_t i = 0;
	size_t len;

	if (in.find('f') != std::string::npos)
		len = str.length() - 1;
	else 
		len = str.length();
	if (in[0] == '-')
		i++;
	while (i < in.length() - 1)
	{
		if (!isdigit(in[i]) && in[i] != '.')
			throw Convert::InvalidInput();
		i++;
	}
	return 1;
}

void Convert::parseType(char *argv)
{
	in = static_cast<std::string>(argv);
	if ((in.length() == 1 || in.length() == 0) && !isdigit(in[0]))
		type = "char";
	else if (in.find('.') != std::string::npos && checkDigit(in))
	{
		if (in.find('f') != std::string::npos)
			type = "float";
		else
			type = "double";
	}
	else if (in == "-inff" || in == "+inff" || in == "nanf")
		type = "float";
	else if (in == "-inf" || in == "+inf" || in == "nan")
		type = "double";
	else if (checkDigit(in))
		type = "int";
	std::cout << getType() << std::endl;
}

void Convert::conversion(char *argv)
{
	float value = atof(argv);
	long long int num1 = static_cast<long long int>(value);
	if (value > 256 || value < 0 || in == "nan" || in == "nanf")
		std::cout << "char: impossible" << std::endl;
	else if (value > 126 || value < 32)
		std::cout << "char: : Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	if (num1 > INT_MAX || num1 < INT_MIN || in == "nan" || in == "nanf")
		std::cout << "int: impossible" << std::endl;
	else
	{
		int num = atoi(argv);
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	}
	if (in == "nanf")
		std::cout << "float: nanf" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	if (in == "nan")
		std::cout << "double: nan" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void Convert::ifTypeChar(char *argv)
{
	char ch = static_cast<char>(*argv);
	int num = static_cast<int>(ch);
	if (num > 256 || num < 0 || in == "nan" || in == "nanf")
		std::cout << "char: impossible" << std::endl;
	else if (num > 126 || num < 32)
		std::cout << "char: : Non displayable" << std::endl;
	else
		std::cout << "char: '" << ch << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(ch) << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(ch) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(ch) << std::endl;
}
