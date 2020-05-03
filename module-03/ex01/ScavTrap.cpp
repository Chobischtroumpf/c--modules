/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 21:24:09 by adorigo          #+#    #+#             */
/*   Updated: 2020/05/02 21:24:09 by adorigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

std::string ScavTrap::challenges[ScavTrap::nbrChalls] = {
	"Did you try to open me?",
	"A single mag won't be enough!",
	"Let's get this party started!",
	"You call yourself a badass?",
	"Did someone feel something?"
};


ScavTrap::ScavTrap(std::string const &name):
	name(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 50;
	this->maxHitPoints = 50;
	this->level = 1;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	std::cout << this->name << ": Locking the door !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other):
	name(other.name)
{
	std::cout << this->name << ": Locking the door !" << std::endl;
	this->level = other.level;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << ": door breached, scavtrap now deactivating."  << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	this->name = other.name;
	this->level = other.level;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
	return (*this);
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " made a melee attack to " << target 
	<< " dealing " << this->rangedAttackDamage 
	<< " points de dégâts !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " made a melee attack to " << target
	<< " dealing " << this->meleeAttackDamage
	<< " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= (amount - this->armorDamageReduction);
	if (this->hitPoints < 0)
	{
		this->hitPoints = 0;
		std::cout << "your " << this->name << " is dying" << std::endl;
	}
	else if (this->hitPoints < 30)
		std::cout << "votre " << this->name << " is low on health" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
	std::cout << "YOUR " << this->name << " WAS HEALED, YOU HEARD THAT ? I. WAS. HEALED." << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
	std::cout << this->name << ": ";
	std::cout << ScavTrap::challenges[rand() % ScavTrap::nbrChalls] << std::endl;
}
