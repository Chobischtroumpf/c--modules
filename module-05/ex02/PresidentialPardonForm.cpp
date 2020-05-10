/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 15:04:48 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/09 14:36:49 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Contructors /////////////////////////////////////////////////////////////////

std::string const &PresidentialPardonForm::name = "Presidential Pardon";

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
	Form(PresidentialPardonForm::name, 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &source):
	Form(source), target(source.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

// Operators ///////////////////////////////////////////////////////////////////

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm &source)
{
	(void)source;
	return *this;
}

// set-get ///////////////////////////////////////////////////////////////////////

void		PresidentialPardonForm::execute(Bureaucrat const &executor) const //generic function
{
	Form::execute(executor);
	std::cout << this->target << " has been pardoned by our OverLord" << std::endl;
}
