/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 15:04:48 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/08 16:53:36 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <fstream>
# include <string>
#include "Form.hpp"


class ShrubberyCreationForm: public Form
{

	private:
		std::string const target;
		static std::string const trees[3];
	public:
		static std::string const &name;
		// Constructors
		ShrubberyCreationForm (std::string const &target);
		ShrubberyCreationForm (const ShrubberyCreationForm &source);
		virtual ~ShrubberyCreationForm ();

		// Operators
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

		// Utils
		class TargetFileOpenException: public std::exception {
			virtual const char* what() const throw();
		};
		class WriteException: public std::exception {
			virtual const char* what() const throw();
		};

		void execute(Bureaucrat const &executor) const;

};

# endif
