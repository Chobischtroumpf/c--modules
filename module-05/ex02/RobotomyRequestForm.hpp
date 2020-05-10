/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 15:04:48 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/08 17:13:23 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <string>

using std::string;
using std::cout;


class RobotomyRequestForm: public Form
{

	private:
		std::string const target;

	public:
		// Constructors
		RobotomyRequestForm (std::string const &target);
		RobotomyRequestForm (const RobotomyRequestForm &source);
		virtual ~RobotomyRequestForm ();

		static std::string const &name;

		// Operators
		RobotomyRequestForm &operator=(const RobotomyRequestForm &source);

		// Utils
		void execute(Bureaucrat const &executor) const;

};

# endif
