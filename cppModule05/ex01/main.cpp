/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:40:55 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/21 14:01:29 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		// Bureaucrat bureaucrat1("Boris", 152); //create with less than 150 grade
		// Bureaucrat bureaucrat2("Boris", 0); //create with more than 1 grade
		
		Bureaucrat bureaucrat3("Boris", 2); //check up grade 
		bureaucrat3.upGrade();
		std::cout << bureaucrat3;
		bureaucrat3.upGrade();

		// Bureaucrat bureaucrat3("Boris", 149); //check down grade 
		// bureaucrat3.downGrade();
		// std::cout << bureaucrat3;
		// bureaucrat3.downGrade();

		// Form form1("Form1", 152, 100); //create with less than 150 grade
		// Form form2("Form2", 0, 100); //create with more than 1 grade

		// Bureaucrat bureaucrat("Boris", 10); //if bureaucrat grade lvl less than form grade lvl
		// Form form("1B", 3, 10);
		// bureaucrat.signForm(form);
		
		// Bureaucrat bureaucrat("Boris", 1); //if bureaucrat grade lvl more than form lvl (its OK)
		// Form form("1B", 3, 10);
		// bureaucrat.signForm(form);
		// std::cout << form;

		// Bureaucrat bureaucrat1("Boris", 1); //if the form was signed
		// Bureaucrat bureaucrat2("Gena", 1);
		// Form form("1B", 3, 10);
		// std::cout << form;
		// bureaucrat1.signForm(form);
		// std::cout << form;
		// bureaucrat2.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
