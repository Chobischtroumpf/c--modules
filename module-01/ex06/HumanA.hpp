/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 11:17:01 by adorigo          #+#    #+#             */
/*   Updated: 2020/04/29 11:17:01 by adorigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	const Weapon &weapon;
public:
	HumanA(std::string const &name, const Weapon &weapon);
	virtual ~HumanA();

	void attack(void) const;
};

#endif