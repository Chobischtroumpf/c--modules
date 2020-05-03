/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:33:28 by agossuin          #+#    #+#             */
/*   Updated: 2020/05/03 15:11:26 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap: virtual public ClapTrap
{
private:
	FragTrap();
protected:
	static const int nbrQuotes = 5;
	static std::string quotes[FragTrap::nbrQuotes];
public:
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &other);
	virtual		~FragTrap();

	FragTrap	&operator=(FragTrap const &other);

	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		vaulthunter_dot_exe(std::string const &target);
};

# endif
