/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 17:48:44 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
protected:
	Enemy();

	std::string type;
	int hp;
public:
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &other);
	virtual ~Enemy();

	Enemy &operator=(Enemy const &other);

	std::string const &getType(void) const;
	int getHP(void) const;

	virtual void takeDamage(int damage);
};

#endif

