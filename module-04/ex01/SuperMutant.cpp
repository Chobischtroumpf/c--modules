/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 12:40:47 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

// Contructors /////////////////////////////////////////////////////////////////

SuperMutant::SuperMutant()
{
	std::cout << "Default constructor for SuperMutant called" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &source)
{
	std::cout << "Copy constructor for SuperMutant called" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Destructor for SuperMutant called" << std::endl;
}

// Operators ///////////////////////////////////////////////////////////////////

SuperMutant& SuperMutant::operator = (const SuperMutant &source)
{
	std::cout << "Assignations operator for SuperMutant called" << std::endl;
	return *this;
}

// Utils ///////////////////////////////////////////////////////////////////////

void		SuperMutant::setName(std::string name) //generic function
{
	name = name;
}

std::string	SuperMutant::getName() //generic function
{
	return name;
}
