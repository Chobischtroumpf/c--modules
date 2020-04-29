/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 11:17:01 by adorigo           #+#    #+#             */
/*   Updated: 2020/04/29 12:21:19 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name):
	name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(void) const
{
	if (this->weapon)
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " can't attack because he has no Weapon !" << std::endl;
}
