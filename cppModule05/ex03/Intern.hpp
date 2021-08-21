#ifndef INTERN_H
#define INTERN_H

#include <string>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
	Intern(void);
	Intern(const Intern &intern);
	Intern& operator=(const Intern &intern);
	~Intern(void);
	Form* makeForm(std::string request, std::string target);

	class FormDoesNotExist : public std::exception
	{
		const char* what() const throw();
	};
};

#endif