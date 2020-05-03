/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 15:09:58 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/03 15:34:01 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <string>

class NinjaTrap: virtual public ClapTrap
{
private:
	NinjaTrap();
public:
	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &other);
	virtual		~NinjaTrap();

	NinjaTrap	&operator=(NinjaTrap const &other);

	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void ninjaShoebox(FragTrap &trap);
	void ninjaShoebox(ScavTrap &trap);
	void ninjaShoebox(ClapTrap &trap);
	void ninjaShoebox(NinjaTrap &trap);
};

# endif
