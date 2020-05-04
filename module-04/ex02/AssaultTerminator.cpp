/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 13:11:20 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

// Contructors /////////////////////////////////////////////////////////////////

AssaultTerminator::AssaultTerminator()
{
	std::cout << "Default constructor for AssaultTerminator called" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &source)
{
	std::cout << "Copy constructor for AssaultTerminator called" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "Destructor for AssaultTerminator called" << std::endl;
}

// Operators ///////////////////////////////////////////////////////////////////

AssaultTerminator& AssaultTerminator::operator = (AssaultTerminator const &source)
{
	std::cout << "Assignations operator for AssaultTerminator called" << std::endl;
	return *this;
}

// Utils ///////////////////////////////////////////////////////////////////////

void		AssaultTerminator::setName(std::string name) //generic function
{
	name = name;
}

std::string	AssaultTerminator::getName() const //generic function
{
	return name;
}


std::ostream &operator<<(std::ostream &out, AssaultTerminator const &assaultTerminator)
{
	out << assaultTerminator.getName();
	return (out);
}
