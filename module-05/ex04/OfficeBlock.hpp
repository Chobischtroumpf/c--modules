/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 13:44:06 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/18 15:54:17 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include "Intern.hpp"
# include "Bureaucrat.hpp"

class OfficeBlock
{

	private:
		Intern const *intern;
		Bureaucrat const *signer;
		Bureaucrat const *executor;
	public:
		// Constructors
		OfficeBlock ();
		OfficeBlock (Intern const &intern, Bureaucrat const &signer, Bureaucrat const &executor);
		virtual ~OfficeBlock ();

		class InternAlreadyAssignedException: public std::exception {
			virtual const char* what () const throw();
		};
		
		class BureaucratAlreadyAssignedException: public std::exception {
			virtual const char* what () const throw();
		};

		class MissingOfficeMember: public std::exception {
			virtual const char* what () const throw();
		};
		// Utils
		void setIntern(Intern const &intern);
		void setSigner(Bureaucrat const &signer);
		void setExecutor(Bureaucrat const &executor);

		void doBureaucracy(std::string const &formName, std::string const &target);
};

# endif
