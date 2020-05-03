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
#include "ClapTrap.hpp"

std::string ScavTrap::challenges[ScavTrap::nbrChalls] = {
	"Did you try to open me?",
	"A single mag won't be enough!",
	"Let's get this party started!",
	"You call yourself a badass?",
	"Did someone feel something?"
};


ScavTrap::ScavTrap(std::string const &name):
	ClapTrap(name)
{
	std::cout << this->name << ": Locking the door." << std::endl;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::ScavTrap(ScavTrap const &other):
	ClapTrap(other.name)
{
	std::cout << this->name << ": Locking the door !" << std::endl;
	ClapTrap::copy(other);
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << ": door breached, scavtrap now deactivating."  << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	ClapTrap::copy(other);
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

void ScavTrap::challengeNewcomer(void)
{
	std::cout << this->name << ": ";
	std::cout << ScavTrap::challenges[rand() % ScavTrap::nbrChalls] << std::endl;
}
