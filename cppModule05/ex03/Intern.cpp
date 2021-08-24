/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:28:44 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/24 14:30:08 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{}

Intern::Intern(const Intern &intern)
{
	*this = intern;
}

Intern& Intern::operator=(const Intern &intern)
{
	if (this == &intern)
		return *this;
	*this = intern;
	return *this;
}

Intern::~Intern(void)
{}

Form* Intern::makeForm(std::string request, std::string target)
{
	std::string requestArray[3] = 
	{
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	Form* (Intern::*array[3])(std::string target) = 
	{
		array[0] = &Intern::createPresidentialPardonForm,
		array[1] = &Intern::createRobotomyRequestForm,
		array[2] = &Intern::createShrubberyCreationForm
	};
	int i;

	for (i = 0; i < 3; i++)
	{
		if (request.compare(requestArray[i]) == 0)
			return (this->*(array[i]))(target);;
	}
	throw Intern::FormDoesNotExist();
}

const char* Intern::FormDoesNotExist::what() const throw()
{
	return "The form does not exist!";
}

Form* Intern::createPresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form* Intern::createShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form* Intern::createRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}
