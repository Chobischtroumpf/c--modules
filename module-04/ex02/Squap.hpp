/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squap.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 13:09:14 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAP_HPP
# define SQUAP_HPP
# include <iostream>
# include <string>

using std::string;
using std::cout;

class Squap
{

	private:
		std::string		name;

	public:
		// Constructors
		Squap ();
		Squap (const Squap &source);
		virtual ~Squap ();

		// Operators
		Squap &operator = (const Squap &source);

		// Utils
		std::string		getName();
		void			setName(std::string name);

};

std::ostream &operator<<(std::ostream &out, Squap const &squap);

# endif
