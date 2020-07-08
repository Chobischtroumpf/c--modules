/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 14:48:22 by adorigo           #+#    #+#             */
/*   Updated: 2020/07/02 15:56:44 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class Span
{
private:
	unsigned int		_N;
	std::vector<int>	_v;
	Span();

public:
	Span(unsigned int N);
	virtual ~Span();
	Span(const Span& source);

	void addNumber(int n);
	
	int shortestSpan();
	int longestSpan();
};

#endif
