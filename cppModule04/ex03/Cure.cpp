/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:39:32 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/19 17:21:38 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Default Cure constructor called" << std::endl;
	type = "cure";
}

Cure::Cure(const Cure &cure)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = cure;
}

Cure& Cure::operator=(const Cure &cure)
{
	std::cout << "Assignation operator called" << std::endl;
	this->type = cure.type;
	return *this;
}

Cure::~Cure(void)
{
	std::cout << "Destructor Cure called" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria *clone = new Cure();
	return clone;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals" << target.getName() << " wounds *" << std::endl;
}
