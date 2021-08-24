#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

class Convert
{
private:
	std::string type;
	std::string in;

public:
	Convert(void);
	Convert(const Convert &convert);
	Convert& operator=(const Convert &convert);
	~Convert(void);
	std::string getType(void);
	void parseType(char *argv);
	bool checkDigit(std::string str);
	void conversion(char *argv);
	void ifTypeChar(char *argv);

	class InvalidInput : public std::exception
	{
		const char* what() const throw();
	};
};

#endif