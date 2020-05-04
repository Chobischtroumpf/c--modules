/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 13:09:14 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include <iostream>
# include <string>

using std::string;
using std::cout;

class TacticalMarine
{

	private:
		std::string		name;

	public:
		// Constructors
		TacticalMarine ();
		TacticalMarine (const TacticalMarine &source);
		virtual ~TacticalMarine ();

		// Operators
		TacticalMarine &operator = (const TacticalMarine &source);

		// Utils
		std::string		getName();
		void			setName(std::string name);

};

std::ostream &operator<<(std::ostream &out, TacticalMarine const &tacticalmarine);

# endif
