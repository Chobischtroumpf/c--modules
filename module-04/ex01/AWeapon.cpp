/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/05 16:33:26 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

// Contructors /////////////////////////////////////////////////////////////////

AWeapon::AWeapon():
	name(std::string()), apCost(0), damage(0)
{
}

AWeapon::AWeapon(std::string const &name, int apCost, int damage):
	name(name), apCost(apCost), damage(damage)
{
}

AWeapon::AWeapon(const AWeapon &source)
{

}

AWeapon::~AWeapon()
{
}

// Operators ///////////////////////////////////////////////////////////////////

AWeapon& AWeapon::operator = (const AWeapon &source)
{
	this->name = source.name;
	this->apCost = source.apCost;
	this->damage = source.damage;
	return *this;
}

// Utils ///////////////////////////////////////////////////////////////////////

int AWeapon::getAPCost(void) const
{
	return (this->apCost);
}

int AWeapon::getDamage(void) const
{
	return (this->damage);
}

std::string	 const &AWeapon::getName(void) const
{
	return name;
}
