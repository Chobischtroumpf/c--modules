/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 10:52:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/07 10:52:36 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Contructors /////////////////////////////////////////////////////////////////

Form::Form()
{
	std::cout << "Default constructor for Form called" << std::endl;
}

Form::Form(const Form &source)
{
	std::cout << "Copy constructor for Form called" << std::endl;
}

Form::~Form()
{
	std::cout << "Destructor for Form called" << std::endl;
}

// Operators ///////////////////////////////////////////////////////////////////

Form& Form::operator = (const Form &source)
{
	std::cout << "Assignations operator for Form called" << std::endl;
	return *this;
}

// set-get ///////////////////////////////////////////////////////////////////////

void		Form::setName(std::string name) //generic function
{
	name = name;
}

std::string	Form::getName() const//generic function
{
	return name;
}

// stream //////////////////////////////////////////////////////////////////////

std::ostream &operator<<(std::ostream &out, Form const &obj)
{
	out << obj.getName();
	return out;
}

