/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:55:27 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/20 19:26:52 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
: Form("RobotomyRequestForm", 72, 45)
{
	this->target = target;
	srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f)
{
	*this = f;
}

// RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
// {
// 	// Form(f.getName(), f.getGradeRequiredToSign(), f.getGradeRequiredToExecute());
// 	this->target = f.target;
// 	return *this;
// }

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	// std::cout << "Destructor RobotomyRequestForm called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw Form::IsNotSigned();
	else if (executor.getGrade() > this->getGradeRequiredToExecute())
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Vvvvrrrrrrzzzzz... vvvvvrrrrrrzzzzzzz... bbbbvvvvvvrrrrzzzzz" << std::endl;
	if (rand() % 2 == 0)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << this->target << " has not been robotomized(((" << std::endl;
}
