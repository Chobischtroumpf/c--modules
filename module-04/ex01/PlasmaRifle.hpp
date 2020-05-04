/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 12:32:32 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
#include "AWeapon.hpp"

using std::string;
using std::cout;

class PlasmaRifle: public AWeapon
{
	public:
		// Constructors
		PlasmaRifle ();
		PlasmaRifle (const PlasmaRifle &source);
		virtual ~PlasmaRifle ();

		// Operators
		PlasmaRifle &operator = (const PlasmaRifle &source);

		// Utils
		void attack(void) const;
};

# endif
