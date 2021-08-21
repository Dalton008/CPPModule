/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:40:55 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/20 19:37:12 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		{
			PresidentialPardonForm form1("1A"); //test: PresidentialPardonForm all ok
			Bureaucrat bureaucrat1("Boris", 1);	
			form1.beSigned(bureaucrat1);
			bureaucrat1.executeForm(form1);
			form1.execute(bureaucrat1);
		}
		std::cout << "*****************************************************************\n" << std::endl;
		{
			RobotomyRequestForm form2("2A"); //test: RobotomyRequestForm all ok
			Bureaucrat bureaucrat2("Boris", 1);
			form2.beSigned(bureaucrat2);
			bureaucrat2.executeForm(form2);
			form2.execute(bureaucrat2);
		}
		std::cout << "*****************************************************************\n" << std::endl;
		{
			ShrubberyCreationForm form3("3A"); //test: ShrubberyCreationForm all ok
			Bureaucrat bureaucrat3("Boris", 1);
			form3.beSigned(bureaucrat3);
			bureaucrat3.executeForm(form3);
			form3.execute(bureaucrat3);
		}
		std::cout << "*****************************************************************\n" << std::endl;
		{
			PresidentialPardonForm form4("4A"); //test: bureaucrat low lvl for form execute
			Bureaucrat bureaucrat4("Boris", 6);
			form4.beSigned(bureaucrat4);
			bureaucrat4.executeForm(form4);
		}
		std::cout << "*****************************************************************\n" << std::endl;
		{
			RobotomyRequestForm form5("5A"); //test: bureaucrat low lvl for form execute
			Bureaucrat bureaucrat5("Boris", 50);
			form5.beSigned(bureaucrat5);
			form5.execute(bureaucrat5);
		}
		std::cout << "*****************************************************************\n" << std::endl;
		{
			ShrubberyCreationForm form6("6A"); //test: form not signed
			Bureaucrat bureaucrat6("Boris", 50);
			bureaucrat6.executeForm(form6);
			form6.beSigned(bureaucrat6);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
