/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 15:04:07 by adorigo           #+#    #+#             */
/*   Updated: 2020/03/24 16:17:43 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
private:
	std::string		type;
	std::string		name;
public:

	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();

	void announce(void);
};

#endif