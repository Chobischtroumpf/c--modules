/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 21:15:18 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/09 21:20:12 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <string>

class Intern
{

	private:
		class Pair {
			private:
				Pair();
			
				std::string const name;
				Form *(*fct)(std::string const &);
			public:
				Pair(std::string const &name, Form *(*fct)(std::string const &));
				Pair(Pair const &other);
				virtual ~Pair();

				Pair &operator=(Pair const &other);

				bool correspond(std::string const &name) const;
				Form *execute(std::string const &target) const;
		};
		Pair *generators[9];
	public:
		// Constructors
		Intern ();
		Intern (const Intern &source);
		virtual ~Intern ();

		// Operators
		Intern &operator=(const Intern &source);

		class FormDoesNotExistException: public std::exception {
			virtual const char* what() const throw();
		};

		// Utils
		Form *makeForm(std::string const &formName, std::string const &target) const;

};

# endif
