/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 10:52:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/06/01 10:53:52 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Contructors /////////////////////////////////////////////////////////////////

Form::Form(std::string const &name, int const gradeSign, int const gradeExec):
	name(name),sign(false), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &source):
	name(source.name), sign(source.sign), gradeSign(source.gradeSign), gradeExec(source.gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
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
	return sign;
}

int Form::getGradeSign(void) const
{
	return gradeSign;
}

int Form::getGradeExec(void) const
{
	return gradeExec;
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
	<< "] <sign:" << obj.getGradeSign() << ", Execute:" << obj.getGradeExec() << ">";
	return out;
}

