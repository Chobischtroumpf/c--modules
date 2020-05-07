/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/05 16:32:12 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include <string>

# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
private:
	std::string		name;

public:
	// Constructors
	PowerFist ();
	PowerFist (const PowerFist &source);
	virtual ~PowerFist ();

	// Operators
	PowerFist &operator = (const PowerFist &source);

	// Utils
	void attack(void) const;
};

# endif
