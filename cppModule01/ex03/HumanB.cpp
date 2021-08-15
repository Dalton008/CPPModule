/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:51:25 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/13 17:30:00 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : nameB(name),  weaponB(NULL)
{
	return;
}

void HumanB::attack()
{
	if (!weaponB)
	{
		std::cout << nameB << " havent weapon!" << std::endl;
	}
	else
		std::cout << nameB << " attacks with his " << this->weaponB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	weaponB = &weapon;
}

HumanB::~HumanB()
{}
