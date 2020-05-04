/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 13:09:14 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squap.hpp"

// Contructors /////////////////////////////////////////////////////////////////

Squap::Squap()
{
	std::cout << "Default constructor for Squap called" << std::endl;
}

Squap::Squap(const Squap &source)
{
	std::cout << "Copy constructor for Squap called" << std::endl;
}

Squap::~Squap()
{
	std::cout << "Destructor for Squap called" << std::endl;
}

// Operators ///////////////////////////////////////////////////////////////////

Squap& Squap::operator = (Squap const &source)
{
	std::cout << "Assignations operator for Squap called" << std::endl;
	return *this;
}

// Utils ///////////////////////////////////////////////////////////////////////

void		Squap::setName(std::string name) //generic function
{
	name = name;
}

std::string	Squap::getName() //generic function
{
	return name;
}


std::ostream &operator<<(std::ostream &out, Squap const &Squap)
{
	out << Squap.getName()
	return (out);
}
