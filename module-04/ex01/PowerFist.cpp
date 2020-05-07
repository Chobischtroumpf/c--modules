/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/05 16:15:01 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist():
	AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &source):
	AWeapon(source)
{
}

PowerFist::~PowerFist()
{
}

PowerFist& PowerFist::operator = (const PowerFist &source)
{
	this->name = source.name;
	this->apCost = source.apCost;
	this->damage = source.damage;
	return (*this);
}


void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}