/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 12:02:33 by adorigo           #+#    #+#             */
/*   Updated: 2020/07/01 11:11:07 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <string>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void);

Data *deserialize(void *raw);

#endif