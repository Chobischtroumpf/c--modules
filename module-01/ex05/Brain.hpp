/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 11:24:31 by adorigo           #+#    #+#             */
/*   Updated: 2020/04/27 11:31:08 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <sstream>
# include <iomanip>
# include <iostream>
# include <memory>
# include <string>

class Brain
{
private:
	int neurones;
public:
	Brain();
	virtual ~Brain();

	int getNeurones(void) const;
	std::string identify(void) const;
};

#endif