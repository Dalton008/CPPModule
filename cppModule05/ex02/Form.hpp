#ifndef FORM_H
#define FORM_H

#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const name;
	bool isSigned;
	int const gradeRequiredToSign;
	int const gradeRequiredToExecute;

public:
	Form(void);
	Form(std::string name, int gradeRequiredToSign, int gradeRequiredToExecute);
	Form(const Form &form);
	Form& operator=(const Form &form);
	virtual ~Form(void);
	std::string getName(void) const;
	bool getIsSigned(void) const;
	int getGradeRequiredToSign(void) const;
	int getGradeRequiredToExecute(void) const;
	void beSigned(Bureaucrat &b);
	virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};
	class IsNotSigned : public std::exception
	{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream &out, Form &f);

#endif