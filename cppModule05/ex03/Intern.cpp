/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:28:44 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/21 13:38:18 by mjammie          ###   ########.fr       */
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
	Form* array[3] = 
	{
		array[0] = new PresidentialPardonForm(target),
		array[1] = new RobotomyRequestForm(target),
		array[2] = new ShrubberyCreationForm(target)
	};
	int i;

	for (i = 0; i < 3; i++)
	{
		if (request.compare(requestArray[i]) == 0)
			return array[i];
	}
	throw Intern::FormDoesNotExist();
}

const char* Intern::FormDoesNotExist::what() const throw()
{
	return "The form does not exist!";
}
