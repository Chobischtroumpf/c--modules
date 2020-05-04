/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 11:48:36 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <iostream>
# include <string>

using std::string;
using std::cout;

class RadScorpion
{

	private:
		std::string		name;

	public:
		// Constructors
		RadScorpion ();
		RadScorpion (const RadScorpion &source);
		virtual ~RadScorpion ();

		// Operators
		RadScorpion &operator = (const RadScorpion &source);

		// Utils
		std::string		getName();
		void			setName(std::string name);

};

# endif
