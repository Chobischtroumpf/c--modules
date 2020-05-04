/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 11:48:36 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>

using std::string;
using std::cout;

class Character
{

	private:
		std::string		name;

	public:
		// Constructors
		Character ();
		Character (const Character &source);
		virtual ~Character ();

		// Operators
		Character &operator = (const Character &source);

		// Utils
		std::string		getName();
		void			setName(std::string name);

};

# endif
