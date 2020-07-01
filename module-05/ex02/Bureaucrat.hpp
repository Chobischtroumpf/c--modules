/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 09:20:31 by adorigo           #+#    #+#             */
/*   Updated: 2020/06/01 10:53:08 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{

	private:
		std::string const name;
		int grade;
	public:
		// Constructors
		Bureaucrat (std::string const &name, int grade);
		Bureaucrat (const Bureaucrat &source);
		virtual ~Bureaucrat ();

		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};

		// Operators
		Bureaucrat &operator=(const Bureaucrat &source);

		// Utils
		std::string		getName(void) const;
		int				getGrade(void) const;

		void			incrementGrade(void);
		void			decrementGrade(void);

		void			signForm(Form &form) const;
		void			executeForm(Form const &form) const;

};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj);

# endif
