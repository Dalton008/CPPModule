#ifndef ROBOTOMYREQUEStFORM_H
#define ROBOTOMYREQUEStFORM_H

#include <string>
#include <iostream>
#include <cstdlib>

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm(void);
	std::string target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &f);
	// RobotomyRequestForm& operator=(const RobotomyRequestForm &f);
	~RobotomyRequestForm(void);
	void execute(Bureaucrat const & executor) const;
};


#endif