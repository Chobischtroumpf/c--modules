/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 13:09:14 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP
# include <iostream>
# include <string>

using std::string;
using std::cout;

class ISpaceMarine
{

	private:
		std::string		name;

	public:
		// Constructors
		ISpaceMarine ();
		ISpaceMarine (const ISpaceMarine &source);
		virtual ~ISpaceMarine ();

		// Operators
		ISpaceMarine &operator = (const ISpaceMarine &source);

		// Utils
		std::string		getName();
		void			setName(std::string name);

};

std::ostream &operator<<(std::ostream &out, ISpaceMarine const &ispacemarine);

# endif
