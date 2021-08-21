#ifndef FORM_H
#define FORM_H

#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	Form(void);
	std::string const name;
	bool isSigned;
	int const gradeRequiredToSign;
	int const gradeRequiredToExecute;

public:
	Form(std::string const name, int const gradeRequiredToSign, int const gradeRequiredToExecute);
	Form(const Form &form);
	Form& operator=(const Form &form);
	~Form(void);
	std::string getName(void) const;
	bool getIsSigned(void);
	int getGradeRequiredToSign(void) const;
	int getGradeRequiredToExecute(void) const;
	void beSigned(Bureaucrat &b);

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream &out, Form &f);

#endif