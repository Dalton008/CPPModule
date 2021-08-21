/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:40:55 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/21 19:36:57 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat bureaucrat1("Boris", 152); //create with less than 150 grade
		Bureaucrat bureaucrat2("Boris", 0); //create with more than 1 grade
		
		Bureaucrat bureaucrat3("Boris", 2); //check up grade 
		std::cout << bureaucrat3;
		bureaucrat3.upGrade();
		std::cout << bureaucrat3;
		bureaucrat3.upGrade();

		Bureaucrat bureaucrat3("Boris", 149); //check down grade 
		bureaucrat3.downGrade();
		std::cout << bureaucrat3;
		bureaucrat3.downGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
