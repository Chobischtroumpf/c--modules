/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 15:04:48 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/09 14:24:00 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"
# include <string>

class PresidentialPardonForm: public Form
{

	private:
		std::string		target;

	public:
		// Constructors
		PresidentialPardonForm (std::string const &target);
		PresidentialPardonForm (const PresidentialPardonForm &source);
		virtual ~PresidentialPardonForm ();

		static std::string const &name;

		// Operators
		PresidentialPardonForm &operator=(const PresidentialPardonForm &source);

		// Utils
		void execute(Bureaucrat const &executor) const;

};

# endif
