/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:45:21 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/19 17:27:02 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria type constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria &amateria)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = amateria;
}

AMateria& AMateria::operator=(const AMateria &amateria)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &amateria)
		return *this;
	this->type = amateria.type;
	return *this;
}

AMateria::~AMateria(void)
{
	std::cout << "Destructor AMateria called" << std::endl;
}

const std::string& AMateria::getType() const
{
	return type;
}
