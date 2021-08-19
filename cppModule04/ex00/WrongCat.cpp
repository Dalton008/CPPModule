/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:03:31 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/18 14:12:19 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Constructor WrongCat called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wrongCat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = wrongCat.type;
}

WrongCat& WrongCat::operator=(const WrongCat &wrongCat)
{
	this->type = wrongCat.type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "<Meow Meow> (Wrong Cat)" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor WrongCat called" << std::endl;
}