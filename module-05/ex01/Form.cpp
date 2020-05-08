/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 10:52:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/08 14:56:09 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Contructors /////////////////////////////////////////////////////////////////

Form::Form(std::string const &name, int const gradeSign, int const gradeExec):
	name(name),sign(false), gradeSign(gradeSign), gradeExec(gradeExec)
{
}

Form::Form(const Form &source)
{
	std::cout << "Copy constructor for Form called" << std::endl;
}

Form::~Form()
{
	std::cout << "Destructor for Form called" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return("FormException: Grade is higher than maximum, max is 1");
}
const char* Form::GradeTooLowException::what() const throw()
{
	return("FormException: Grade is lower than minimum, min is 150");
}

const char* Form::FormAlreadySignedException::what() const throw()
{
	return("FormException: Form is already signed");
}
// Operators ///////////////////////////////////////////////////////////////////

Form& Form::operator=(const Form &source)
{
	this->sign = source.sign;	
	return *this;
}

// set-get ///////////////////////////////////////////////////////////////////////

std::string	const &Form::getName() const//generic function
{
	return name;
}

bool Form::isSigned(void) const
{
	return (this->sign);
}

int Form::getSignGrade(void) const
{
	return (this->gradeSign);
}

int Form::getExecGrade(void) const
{
	return (this->gradeExec);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeSign)
		throw Form::GradeTooLowException();
	else if (this->sign)
		throw Form::FormAlreadySignedException();
	this->sign = true;
}

// stream //////////////////////////////////////////////////////////////////////

std::ostream &operator<<(std::ostream &out, Form const &obj)
{
	out << "(" << obj.getName() << ")[" << ((obj.isSigned()) ? "Signed" : "Unsigned")
	<< "] <sign:" << obj.getSignGrade() << ", Execute:" << obj.getExecGrade() << ">";
	return out;
}

