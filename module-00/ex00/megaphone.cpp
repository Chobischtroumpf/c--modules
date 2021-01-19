/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 10:39:14 by alessandro        #+#    #+#             */
/*   Updated: 2021/01/19 13:38:50 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char** argv)
{
	int j = 1;
	int k = 0;
	std::string str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while(argv[j] != NULL)
		{
			str = argv[j];
			for (int i=0; i < (int)strlen(argv[j]); i++)
			{
				str[k] = toupper(argv[j][i]);
				k++;
			}
			std::cout << str << " ";
			k = 0;
			j++;
		}
		std::cout << "\n";
	}
	return (0);
}