/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 15:04:48 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/09 21:25:12 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

std::string const &RobotomyRequestForm::name = std::string("Robotomy Request");

// Contructors /////////////////////////////////////////////////////////////////

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	Form(RobotomyRequestForm::name, 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &source):
	Form(source), target(source.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

// Operators ///////////////////////////////////////////////////////////////////

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm &source)
{
	(void)source;
	return *this;
}

// set-get ///////////////////////////////////////////////////////////////////////

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "* VRRRRRR BZZZZZZ VRRRRRR *" << std::endl;
	if ((rand() % 100) > 50)
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->target << " robotomization has failed" << std::endl;
}

Form *RobotomyRequestForm::generate(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}