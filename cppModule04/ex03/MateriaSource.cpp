/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:40:54 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/19 17:26:53 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "Default MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		amateria[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = materiaSource;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &materiaSource)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &materiaSource)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		this->amateria[i] = materiaSource.amateria[i];
	}
	return *this;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (amateria[i] != NULL)
			delete amateria[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (amateria[i] == NULL)
		{
			amateria[i] = m->clone();
			break;
		}
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (amateria[i] != NULL)
		{
			if (amateria[i]->getType() == type)
			{
				return amateria[i]->clone();
			}
		}
	}
	return NULL;
}
