/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 10:52:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/07 10:52:36 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>

using std::string;
using std::cout;


class Form
{

	private:
		std::string		name;

	public:
		// Constructors
		Form ();
		Form (const Form &source);
		virtual ~Form ();

		// Operators
		Form &operator=(const Form &source);

		// Utils
		std::string		getName() const;
		void			setName(std::string name);

};

std::ostream &operator<<(std::ostream &out, Form const &obj);

# endif
