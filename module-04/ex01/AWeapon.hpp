/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 14:12:45 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>
# include <string>

using std::string;
using std::cout;

class AWeapon
{

protected:
	AWeapon();

	std::string		name;
	int				damage;
	int				apCost;

public:
	// Constructors
	AWeapon (std::string const & name, int apcost, int damage);
	AWeapon (const AWeapon &source);
	virtual ~AWeapon ();

	// Operators
	AWeapon &operator = (const AWeapon &source);

	// Utils
	std::string const &getName(void) const;
	int getAPCost(void) const;
	int getDamage(void) const;
	virtual void attack() const = 0;
};

# endif
