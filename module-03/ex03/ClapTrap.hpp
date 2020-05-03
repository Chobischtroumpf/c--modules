/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 10:52:16 by adorigo          #+#    #+#             */
/*   Updated: 2020/05/03 10:52:16 by adorigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
protected:
	ClapTrap();

	int			hitPoints;
	int			maxHitPoints;
	int			energyPoints;
	int			maxEnergyPoints;
	int			level;
	int			meleeAttackDamage;
	int			rangedAttackDamage;
	int			armorDamageReduction;
	std::string	name;
	void copy(ClapTrap const &other);
public:
	ClapTrap (std::string const &name);
	ClapTrap(ClapTrap const &other);
	virtual				~ClapTrap ();
	ClapTrap			&operator=(ClapTrap const &other);
	virtual void		meleeAttack(std::string const &target);
	virtual void		rangedAttack(std::string const &target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	std::string const	&getName(void);
};

# endif
