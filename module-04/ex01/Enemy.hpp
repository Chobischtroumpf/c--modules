/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 17:03:30 by adorigo          ###   ########.fr       */
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

protected:
	Enemy();

	std::string	type;
	int			hp;
public:
	Enemy(int hp, std::string const & type);
	Enemy (const Enemy &source);
	virtual ~Enemy ();

	// Operators
	Enemy &operator = (const Enemy &source);


	std::string const &getType(void) const;
	int getHP() const;
	virtual void takeDamage(int);
};

# endif
