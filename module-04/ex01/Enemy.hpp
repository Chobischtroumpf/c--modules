/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 11:48:36 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>
# include <string>

using std::string;
using std::cout;

class Enemy
{

	private:
		std::string		name;

	public:
		// Constructors
		Enemy ();
		Enemy (const Enemy &source);
		virtual ~Enemy ();

		// Operators
		Enemy &operator = (const Enemy &source);

		// Utils
		std::string		getName();
		void			setName(std::string name);

};

# endif
