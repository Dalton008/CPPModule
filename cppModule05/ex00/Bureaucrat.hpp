#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>

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
	int getGrade(void);
	void upGrade(void);
	void downGrade(void);

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