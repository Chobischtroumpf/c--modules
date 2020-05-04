/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 11:48:36 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <iostream>
# include <string>

using std::string;
using std::cout;

class SuperMutant
{

	private:
		std::string		name;

	public:
		// Constructors
		SuperMutant ();
		SuperMutant (const SuperMutant &source);
		virtual ~SuperMutant ();

		// Operators
		SuperMutant &operator = (const SuperMutant &source);

		// Utils
		std::string		getName();
		void			setName(std::string name);

};

# endif
