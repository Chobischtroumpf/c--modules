/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/05 16:32:52 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Contructors /////////////////////////////////////////////////////////////////

Character::Character():
	name(std::string()), ap(0), weapon(NULL) 
{
}

Character::Character(std::string const &name):
	name(name), ap(40), weapon(NULL)
{
}

Character::Character(const Character &source):
	name(source.name), ap(source.ap), weapon(source.weapon)
{
}

Character::~Character()
{
}

// Operators ///////////////////////////////////////////////////////////////////

Character& Character::operator = (const Character &source)
{
	this->name = source.name;
	this->ap = source.ap;
	this->weapon = source.weapon;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Character const &chara)
{
	out << chara.getName() << " has " << chara.getAP() << " AP and ";
	if (chara.getWeapon())
		out << "wields a " << chara.getWeapon()->getName();
	else
		out << "is unarmed";
	out << std::endl;
	return (out);
}

// Utils ///////////////////////////////////////////////////////////////////////

std::string const	&Character::getName(void) const //generic function
{
	return this->name;
}

int Character::getAP(void) const
{
	return this->ap;
}

AWeapon *Character::getWeapon(void) const
{
	return weapon;
}

void Character::recoverAP(void)
{
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (!this->weapon || !enemy)
		return ;
	
}
