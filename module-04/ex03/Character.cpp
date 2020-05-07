/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 09:24:03 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/07 08:46:54 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Contructors /////////////////////////////////////////////////////////////////

Character::Character(std::string const &name):
	name(name), equipped(0)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::Character(const Character &source):
	name(source.name), equipped(0)
{
	for (int i = 0; i < source.equipped; i++)
		this->equip(source.inventory[i]->clone());
	for (int i = this->equipped; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::~Character()
{
	for (int i = 0; i < this->equipped; i++)
		delete this->inventory[i];
}

// Operators ///////////////////////////////////////////////////////////////////

Character& Character::operator = (const Character &source)
{
	this->name = source.name;
	for (int i = 0; i < this->equipped; i++)
		delete this->inventory[i];
	this->equipped = 0;
	for (int i = 0; i < source.equipped; i++)
		this->equip(source.inventory[i]->clone());
	for (int i = this->equipped; i < 4; i++)
		this->inventory[i] = nullptr;
	return (*this);
}

// set-get ///////////////////////////////////////////////////////////////////////

std::string const	&Character::getName(void) const //generic function
{
	return name;
}

void Character::equip(AMateria *m)
{
	if (this->equipped == 4 || m == nullptr)
		return ;
	for (int i = 0; i < this->equipped; i++)
		if (this->inventory[i] == m)
			return ;
	this->inventory[this->equipped++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->equipped || this->inventory[idx] == nullptr)
		return ;
	for (int i = idx; i < 3; i++)
	{
		this->inventory[i] = this->inventory[i + 1];
		this->inventory[i + 1] = nullptr;
	}
	this->equipped--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->equipped || this->inventory[idx] == nullptr)
		return ;
	this->inventory[idx]->use(target);
}
