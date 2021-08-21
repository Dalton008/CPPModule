#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>

#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	Bureaucrat(void);
	std::string name;
	int			grade;

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat& operator=(const Bureaucrat &bureaucrat);
	~Bureaucrat(void);
	std::string getName(void);
	int getGrade(void) const;
	void upGrade(void);
	void downGrade(void);
	void signForm(Form &f);
	void executeForm(Form const & form);

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream &out, Bureaucrat &b);

#endif