#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include <string>
#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm(void);
	std::string target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &f);
	// PresidentialPardonForm& operator=(const PresidentialPardonForm &f);
	~PresidentialPardonForm(void);
	void execute(Bureaucrat const & executor) const;
};

#endif