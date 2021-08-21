/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:26:07 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/20 18:54:31 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->name = name;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
	*this = bureaucrat;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	this->name = bureaucrat.name;
	this->grade = bureaucrat.grade;
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	// std::cout << "Destructor Bureaucrat called" << std::endl;
}

std::ostream& operator<<(std::ostream &out, Bureaucrat &b)
{
	return out << "Name: " << b.getName() << " Grade: " << b.getGrade() << std::endl;
}

std::string Bureaucrat::getName(void)
{
	return name;
}

int Bureaucrat::getGrade(void) const
{
	return grade;
}

void Bureaucrat::upGrade(void)
{
	grade--;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::downGrade(void)
{
	grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &f)
{
	if (f.getIsSigned() == true)
		std::cout << "This form has already been signed!" << std::endl;
	else
	{
		try
		{
			f.beSigned(*this);
			std::cout << "Bureaucrat " << name << " signs form: " << f.getName() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << name << " can't sign form " << f.getName() << " because: ";
			std::cerr << e.what() << '\n';
		}
		
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << "Bureaucrat " << this->getName() << " cant execute form because: " << std::endl;
		std::cerr << e.what() << '\n';
	}
	
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat grade too low!";
}
