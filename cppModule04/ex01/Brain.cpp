/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:12:24 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/18 18:39:58 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brains constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brains copy constructor called" << std::endl;
	*this = brain;
}

Brain& Brain::operator=(const Brain &brain)
{
	std::cout << "Assignation Brain operator called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = brain.ideas[i];
	}
	return *this;
}

std::string *Brain::getIdeas(void)
{
	return ideas;
}

void Brain::setIdeas(std::string *idea)
{
	for (int i = 0; i < 0; i++)
	{
		this->ideas[i] = idea[i];
	}
}

Brain::~Brain(void)
{
	std::cout << "Brains destructor called" << std::endl;
}
