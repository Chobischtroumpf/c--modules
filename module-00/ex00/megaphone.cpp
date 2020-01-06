/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessandro <alessandro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 10:39:14 by alessandro        #+#    #+#             */
/*   Updated: 2019/12/22 11:45:42 by alessandro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstring>
#include <iostream>
#include <cstdio>

int main(int argc, char** argv)
{
	int j = 1;
	int k = 0;
	char *str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	else
	{
		while(argv[j] != NULL)
		{
			str = argv[j];
			for (int i=0; i<(int)strlen(argv[j]); i++)
			{
				str[k] = toupper(argv[j][i]);
				k++;
			}
			std::cout << str;
			k = 0;
			j++;
		}
		std::cout << "\n";
	}
}