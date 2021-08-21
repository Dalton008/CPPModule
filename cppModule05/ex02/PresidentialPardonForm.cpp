/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:55:27 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/21 14:03:51 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
: Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f)
{
	*this = f;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
	if (this == &f)
		return *this;
	*this = f;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	// std::cout << "Destructor PresidentialPardonForm called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw Form::IsNotSigned();
	else if (executor.getGrade() > this->getGradeRequiredToExecute())
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
