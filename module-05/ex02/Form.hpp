/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 10:52:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/09 21:02:58 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
class Form;
# include "Bureaucrat.hpp"


class Form
{

	private:
		std::string		name;
		bool sign;
		int gradeExec;
		int gradeSign;
	public:
		// Constructors
		Form (std::string const &name, int const gradeSign, int const gradeExec);
		Form (const Form &source);
		virtual ~Form ();

		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		class FormAlreadySignedException: public std::exception {
			virtual const char* what() const throw();
		};
		class UnsignedFormException: public std::exception {
			virtual const char* what() const throw();
		};

		// Operators
		Form &operator=(const Form &source);

		// Utils
		std::string	const &getName() const;
		bool isSigned(void) const;
		int getGradeSign(void) const;
		int getGradeExec(void) const;

		void beSigned(Bureaucrat const &bureaucrat);
		virtual void execute(Bureaucrat const &bureaucrat) const = 0;

};

std::ostream &operator<<(std::ostream &out, Form const &obj);

# endif
