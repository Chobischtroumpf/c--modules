/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 13:11:12 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include <iostream>
# include <string>

using std::string;
using std::cout;

class AssaultTerminator
{

	private:
		std::string		name;

	public:
		// Constructors
		AssaultTerminator ();
		AssaultTerminator (const AssaultTerminator &source);
		virtual ~AssaultTerminator ();

		// Operators
		AssaultTerminator &operator = (const AssaultTerminator &source);

		// Utils
		std::string		getName() const;
		void			setName(std::string name);

};

std::ostream &operator<<(std::ostream &out, AssaultTerminator const &assaultterminator);

# endif
