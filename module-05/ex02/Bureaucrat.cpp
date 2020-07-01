/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 09:20:31 by adorigo           #+#    #+#             */
/*   Updated: 2020/06/01 10:52:59 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Contructors /////////////////////////////////////////////////////////////////

Bureaucrat::Bureaucrat(std::string const &name, int grade):
	name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &source):
	name(source.name), grade(source.grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade is higher than max (grade max : 1)";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade is lower than minimum (grade min : 150)";
}

// Operators ///////////////////////////////////////////////////////////////////

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &source)
{
	this->grade = source.grade;
	return *this;
}

// set-get ///////////////////////////////////////////////////////////////////////

int			Bureaucrat::getGrade(void) const
{
	return grade;
}

std::string	Bureaucrat::getName(void) const//generic function
{
	return name;
}

void		Bureaucrat::incrementGrade(void)
{
	this->grade--;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void)
{
	this->grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &form) const
{
	if (form.isSigned())
	{
		std::cout << *this << " cannot sign " << form 
			<< " because the form is already signed." << std::endl;
	}
	else if (this->grade > form.getGradeSign())
	{
		std::cout << *this << " cannot sign " << form
			<< " because it's grade is too low" << std::endl;
	}
	else
	{
		std::cout <<*this << " signs " << form << std::endl;
	}
	form.beSigned(*this);	
}

void Bureaucrat::executeForm(Form const &form) const
{
	if (!form.isSigned())
	{
		std::cout << *this << " cannot execute " << form
				<< " because the form is unsigned." << std::endl;
	}
	else if (form.getGradeExec() < this->grade)
	{
		std::cout << *this << " cannot execute " << form
				<< " because it's grade is too low." << std::endl;
	}
	else
	{
		std::cout << *this << " executes " << form << std::endl;
	}
	form.execute(*this);
}

// stream //////////////////////////////////////////////////////////////////////

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return out;
}

