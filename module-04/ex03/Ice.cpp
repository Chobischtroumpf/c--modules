/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 09:24:03 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/07 09:08:34 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Contructors /////////////////////////////////////////////////////////////////

Ice::Ice():
	AMateria("ice")
{
}

Ice::Ice(const Ice &source):
	AMateria("ice")
{
	this->_xp = source._xp;
}

Ice::~Ice()
{
}

// Operators ///////////////////////////////////////////////////////////////////

Ice& Ice::operator = (const Ice &source)
{
	this->_xp = source._xp;
	return *this;
}

// set-get ///////////////////////////////////////////////////////////////////////

AMateria *Ice::clone(void) const
{
	Ice *cpy = new Ice (*this);
	return cpy;
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}