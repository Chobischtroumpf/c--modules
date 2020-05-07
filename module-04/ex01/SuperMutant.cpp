/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/05 16:32:28 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

// Contructors /////////////////////////////////////////////////////////////////

SuperMutant::SuperMutant():
	Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &other):
	Enemy(other)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

// Operators ///////////////////////////////////////////////////////////////////

SuperMutant &SuperMutant::operator=(SuperMutant const &other)
{
	this->type = other.type;
	this->hp = other.hp;
	return (*this);
}


// Utils ///////////////////////////////////////////////////////////////////////

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
