/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finder.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 15:20:57 by adorigo           #+#    #+#             */
/*   Updated: 2020/06/30 15:53:38 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FINDER_HPP
# define FINDER_HPP

# include <iostream>
# include <random>
# include "ClassBase.hpp"
# include "ClassA.hpp"
# include "ClassB.hpp"
# include "ClassC.hpp"

Base *generator(void);

void identify_from_pointer(Base *p);
void identify_from_reference(Base &p);

#endif