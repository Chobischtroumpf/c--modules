/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassScalarConv.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 10:47:55 by adorigo           #+#    #+#             */
/*   Updated: 2020/06/01 15:32:14 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassScalarConv.hpp"

static int ft_strlen(std::string const & s);

// Coplien's form //////////////////////////////////////////////////////////////

ScalarConv::ScalarConv() {}

ScalarConv::ScalarConv(const ScalarConv &source)
{
	(void)source;
}

ScalarConv& ScalarConv::operator = (const ScalarConv &source)
{
	if (this == &source)
		return (*this); 
	return (*this);
}

ScalarConv::~ScalarConv()
{
}

// set-get ///////////////////////////////////////////////////////////////////////

// stream //////////////////////////////////////////////////////////////////////

// others //////////////////////////////////////////////////////////////////////

float		ScalarConv::toTreatable(std::string const & totreat)
{
	float to_treat;

	try
	{	
		if (ft_strlen(totreat) == 3
			&& totreat[0] == '\''
			&& totreat[2] == '\'')
			return (static_cast<float>(totreat[1]));
		to_treat = std::stof(totreat);
	}
	catch (std::exception & e) { throw ScalarConv::NotConvertible(); }

	return (to_treat);
}

float		ScalarConv::toFloat(float f)
{
	return (static_cast<float>(f));
}

int		ScalarConv::toInt(float f)
{
	int i = static_cast<int>(f);
	if (f == std::numeric_limits<float>::infinity()
		|| f == -std::numeric_limits<float>::infinity()
		|| std::isnan(f))
		throw std::string("impossible");
	return (i);
}

double       ScalarConv::toDouble(float f)
{
	return (static_cast<double>(f));
}

char		ScalarConv::toChar(float f)
{
	char value = static_cast<char>(f);
	if (f == std::numeric_limits<float>::infinity()
		|| f == -std::numeric_limits<float>::infinity()
		|| std::isnan(f))
		throw std::string("impossible");
	else if (value < 32 || value > 126)
		throw std::string("Non displayable");
	return (value);
}

// Exceptions ////////////////////////////////////////////////////////////////////

ScalarConv::NotConvertible::NotConvertible() throw() {}


ScalarConv::NotConvertible::NotConvertible(const NotConvertible& copy) throw() { (void)copy; }

ScalarConv::NotConvertible::~NotConvertible() throw() {}

ScalarConv::NotConvertible & ScalarConv::NotConvertible::operator=(const NotConvertible& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char* ScalarConv::NotConvertible::what() const throw() { return ("Invalid format or can't be converted."); }

// Supplement //////////////////////////////////////////////////////

static int ft_strlen(std::string const & s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}