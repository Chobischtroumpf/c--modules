/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Isqad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 13:09:14 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQAD_HPP
# define ISQAD_HPP
# include <iostream>
# include <string>

using std::string;
using std::cout;

class Isqad
{

	private:
		std::string		name;

	public:
		// Constructors
		Isqad ();
		Isqad (const Isqad &source);
		virtual ~Isqad ();

		// Operators
		Isqad &operator = (const Isqad &source);

		// Utils
		std::string		getName();
		void			setName(std::string name);

};

std::ostream &operator<<(std::ostream &out, Isqad const &isqad);

# endif
