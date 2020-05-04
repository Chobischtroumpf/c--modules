/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 14:29:18 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

// Contructors /////////////////////////////////////////////////////////////////

PlasmaRifle::PlasmaRifle():
	AWeapon("Plasma Rifle", 5, 21)
{
	std::cout << "Default constructor for PlasmaRifle called" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &source):
	AWeapon(source)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

// Operators ///////////////////////////////////////////////////////////////////

PlasmaRifle& PlasmaRifle::operator = (PlasmaRifle const &source)
{
	std::cout << "Assignations operator for PlasmaRifle called" << std::endl;
	this->name =  source.name;
	this->apCost = source.apCost;
	this->damage = source.damage;
	return *this;
}

// Utils ///////////////////////////////////////////////////////////////////////

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouu *" << std::endl;
}