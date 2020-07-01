/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassScalarConv.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 10:48:28 by adorigo           #+#    #+#             */
/*   Updated: 2020/06/01 15:12:22 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONV_HPP
# define SCALARCONV_HPP
# include <iostream>
# include <string>
# include <limits>
# include <cmath>

class ScalarConv
{
    public:
        // Coplien
        ScalarConv();
        ScalarConv(const ScalarConv&);
        virtual ~ScalarConv();
        ScalarConv &operator=(const ScalarConv& op);

        // Getter - Setter

        // Additionnal
        float       toTreatable(std::string const & totreat);
        float       toFloat(float);
        int         toInt(float);
        double      toDouble(float);
        char        toChar(float);

        // Exceptions
        class NotConvertible : public std::exception
		{
			public:
				NotConvertible () throw();
				NotConvertible (const NotConvertible&) throw();
				NotConvertible& operator= (const NotConvertible&) throw();
				virtual ~NotConvertible() throw();
				virtual const char* what() const throw();
		};
};

# endif
