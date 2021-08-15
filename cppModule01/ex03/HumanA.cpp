/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:21:27 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/12 16:51:15 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : nameA(name), weaponA(weapon)
{
	return;
}

void HumanA::attack()
{
	std::cout << nameA << " attacks with his " << this->weaponA.getType() << std::endl;
}

HumanA::~HumanA()
{}
