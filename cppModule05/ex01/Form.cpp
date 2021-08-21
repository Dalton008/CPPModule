/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:09:45 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/21 14:00:34 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("RandomName"), isSigned(false), gradeRequiredToSign(150), gradeRequiredToExecute(150)
{}

Form::Form(std::string const name, int const gradeRequiredToSign, int const gradeRequiredToExecute)
: 	name(name), 
	isSigned(false),
	gradeRequiredToSign(gradeRequiredToSign), 
	gradeRequiredToExecute(gradeRequiredToExecute)
{
	if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
		throw Form::GradeTooLowException();
	else if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &form)
: 	name(form.getName()),
	isSigned(form.isSigned),
	gradeRequiredToSign(form.getGradeRequiredToSign()),
	gradeRequiredToExecute(form.getGradeRequiredToExecute())
{
	*this = form;
}

Form& Form::operator=(const Form &form)
{
	if (this == &form)
		return *this;
	*this = form;
	return *this;
}

Form::~Form(void)
{
	std::cout << "Destructor Form called" << std::endl;
}

std::string Form::getName(void) const
{
	return name;
}

bool Form::getIsSigned(void)
{
	return isSigned;
}

int Form::getGradeRequiredToSign(void) const
{
	return gradeRequiredToSign;
}

int Form::getGradeRequiredToExecute(void) const
{
	return gradeRequiredToExecute;
}

std::ostream& operator<<(std::ostream &out, Form &f)
{
	return out << "Name: " << f.getName() << 
		". IsSigned: " << f.getIsSigned() << 
		". GradeRequiredToSign: " << f.getGradeRequiredToSign() << 
		". GradeRequiredToExecute: " << f.getGradeRequiredToExecute() << std::endl;
}

void Form::beSigned(Bureaucrat &b)
{
	if (gradeRequiredToSign >= b.getGrade())
		isSigned = true;
	else
		throw Bureaucrat::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form grade too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form grade too low!";
}
