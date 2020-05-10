/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 21:15:18 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/09 21:33:28 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Pair::Pair(std::string const &name, Form *(*fct)(std::string const &)):
	name(name), fct(fct)
{
}

Intern::Pair::Pair(Pair const &source):
	name(source.name), fct(source.fct)
{
}

Intern::Pair::~Pair()
{
}

Intern::Pair &Intern::Pair::operator=(Pair const &source)
{
	(void)source;
	return (*this);
}

Intern& Intern::operator = (const Intern &source)
{
	(void)source;
	return *this;
}

bool Intern::Pair::correspond(std::string const &name) const
{
	return (this->name == name);
}

Form *Intern::Pair::execute(std::string const &target) const
{
	return ((this->fct)(target));
}

Intern::Intern()
{
	this->generators[0] = new Intern::Pair("Presidential Pardon", PresidentialPardonForm::generate);
	this->generators[1] = new Intern::Pair("PresidentialPardon", PresidentialPardonForm::generate);
	this->generators[2] = new Intern::Pair("Presidential Pardon Form", PresidentialPardonForm::generate);
	this->generators[3] = new Intern::Pair("Robotomy Request", RobotomyRequestForm::generate);
	this->generators[4] = new Intern::Pair("RobotomyRequest", RobotomyRequestForm::generate);
	this->generators[5] = new Intern::Pair("Robotomy Request Form", RobotomyRequestForm::generate);
	this->generators[6] = new Intern::Pair("Shrubbery Creation", ShrubberyCreationForm::generate);
	this->generators[7] = new Intern::Pair("ShrubberyCreation", ShrubberyCreationForm::generate);
	this->generators[8] = new Intern::Pair("Shrubbery Creation Form", ShrubberyCreationForm::generate);
}

Intern::Intern(Intern const &other)
{
	(void)other;
}

Intern::~Intern()
{
	for (size_t i = 0; i < 9; i++)
		delete this->generators[i];
}

const char* Intern::FormDoesNotExistException::what() const throw()
{
	return "InternException: Form does not exist";
}


Form *Intern::makeForm(std::string const &formName, std::string const &target) const
{
	Form *form = nullptr;

	for (size_t i = 0; !form && i < 9; i++)
		if (this->generators[i]->correspond(formName))
			form = this->generators[i]->execute(target);
	if (form == nullptr)
	{
		std::cout << formName << " does not exist" << std::endl;
		throw Intern::FormDoesNotExistException();
	}
	else
		std::cout << "Intern creates " << *form << std::endl;
	return (form);
}
