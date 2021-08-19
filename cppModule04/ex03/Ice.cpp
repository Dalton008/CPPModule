/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:21:21 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/19 17:23:42 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
	type = "ice";
}

Ice::Ice(const Ice &ice)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = ice;
}

Ice& Ice::operator=(const Ice &ice)
{
	std::cout << "Assignation operator called" << std::endl;
	this->type = ice.type;
	return *this;
}

Ice::~Ice(void)
{
	std::cout << "Destructor Ice called" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria *clone = new Ice();
	return clone;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
