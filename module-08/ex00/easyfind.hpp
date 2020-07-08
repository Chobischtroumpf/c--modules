/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 14:24:25 by adorigo           #+#    #+#             */
/*   Updated: 2020/07/02 14:45:09 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <exception>

template<typename T>
int& easyfind(T& container, int value)
{
	typename T::iterator it;

	if (container.empty() == true)
		throw(std::exception());
	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw(std::exception());
	return (*it);
}

#endif