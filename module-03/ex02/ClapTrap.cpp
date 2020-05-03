/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 10:52:16 by adorigo          #+#    #+#             */
/*   Updated: 2020/05/03 10:52:16 by adorigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name):
	name(name)
{
	std::cout << "ClapTrap " << name << " created." << std::endl;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 100;
	this->rangedAttackDamage = 100;
	this->armorDamageReduction = 100;
}

ClapTrap::ClapTrap(ClapTrap const &other):
	name(other.name)
	{
		std::cout << "ClapTrap " << name << " created." << std::endl;
		ClapTrap::copy(other);
	}

ClapTrap::~ClapTrap()
{
	std::cout << "-ClapTrap is being deleted" << '\n';
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	ClapTrap::copy(other);
	return (*this);
}

void ClapTrap::copy(ClapTrap const &other)
{
	this->level = other.level;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
}


void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "CL4P-TP " << this->name << " attaque " << target 
	<< " à distance, " << "causant " << this->rangedAttackDamage 
	<< " points de dégâts !" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "CL4P-TP " << this->name << " attaque " << target
	<< " au corp a corp, " << "causant " << this->meleeAttackDamage
	<< " points de dégâts !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= (amount - this->armorDamageReduction);
	if (this->hitPoints < 0)
	{
		this->hitPoints = 0;
		std::cout << "votre " << this->name << " n'a plus de vie" << std::endl;
	}
	else if (this->hitPoints < 30)
		std::cout << "votre " << this->name << " n'a presque plus de vie" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
	std::cout << "YOUR " << this->name << " WAS HEALED, YOU HEARD THAT ? I. WAS. HEALED." << std::endl;
}
