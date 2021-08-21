#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <string>
#include <iostream>
#include <fstream>

#include "Bureaucrat.hpp"
#include "Form.hpp"


class Form;

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm(void);
	std::string target;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &f);
	// ShrubberyCreationForm& operator=(const ShrubberyCreationForm &f);
	~ShrubberyCreationForm(void);
	void execute(Bureaucrat const & executor) const;
};


#endif