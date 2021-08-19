/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:10:56 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/19 17:28:07 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Default Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		amateria[i] = NULL;
	}
}

Character::Character(std::string name)
{
	std::cout << "Character constructor called" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
	{
		amateria[i] = NULL;
	}
}

Character::Character(const Character &character)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = character;
}

Character& Character::operator=(const Character &character)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &character)
		return *this;
	this->name = character.name;
	for (int i = 0; i < 4; i++)
	{
		this->amateria[i] = character.amateria[i];
	}
	return *this;
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (amateria[i] != NULL)
			delete amateria[i];
	}
}

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (amateria[i] == NULL)
		{
			amateria[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	amateria[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	amateria[idx]->use(target);
}
