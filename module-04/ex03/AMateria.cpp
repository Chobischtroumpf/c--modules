/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 09:24:03 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/07 08:48:03 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Contructors /////////////////////////////////////////////////////////////////

AMateria::AMateria(std::string const &type):
	_type(type), _xp(0)
{
}

AMateria::~AMateria()
{
}

// set-get ///////////////////////////////////////////////////////////////////////

std::string const &AMateria::getType(void) const //generic function
{
	return (this->_type);
}

unsigned int	AMateria::getXP(void) const //generic function
{
	return (this->_xp);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp +=10;
}