/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Isqad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 13:09:14 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Isqad.hpp"

// Contructors /////////////////////////////////////////////////////////////////

Isqad::Isqad()
{
	std::cout << "Default constructor for Isqad called" << std::endl;
}

Isqad::Isqad(const Isqad &source)
{
	std::cout << "Copy constructor for Isqad called" << std::endl;
}

Isqad::~Isqad()
{
	std::cout << "Destructor for Isqad called" << std::endl;
}

// Operators ///////////////////////////////////////////////////////////////////

Isqad& Isqad::operator = (Isqad const &source)
{
	std::cout << "Assignations operator for Isqad called" << std::endl;
	return *this;
}

// Utils ///////////////////////////////////////////////////////////////////////

void		Isqad::setName(std::string name) //generic function
{
	name = name;
}

std::string	Isqad::getName() //generic function
{
	return name;
}


std::ostream &operator<<(std::ostream &out, Isqad const &Isqad)
{
	out << Isqad.getName()
	return (out);
}
