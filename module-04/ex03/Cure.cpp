/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 09:24:03 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/07 09:08:39 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Contructors /////////////////////////////////////////////////////////////////

Cure::Cure():
	AMateria("cure")
{
}

Cure::Cure(const Cure &source):
	AMateria("cure")
{
	this->_xp = source._xp;
}

Cure::~Cure()
{
}

// Operators ///////////////////////////////////////////////////////////////////

Cure& Cure::operator = (const Cure &source)
{
	this->_xp = source._xp;
	return *this;
}

// set-get ///////////////////////////////////////////////////////////////////////

AMateria *Cure::clone(void) const
{
	Cure *cpy = new Cure(*this);
	return (cpy);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

