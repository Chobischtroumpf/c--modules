/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 16:06:43 by adorigo           #+#    #+#             */
/*   Updated: 2020/03/25 11:16:24 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void)
{
    ZombieHorde zombieHorde = ZombieHorde(100);
    zombieHorde.announce();
    return (0);
}