/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 12:35:27 by adorigo           #+#    #+#             */
/*   Updated: 2020/04/30 12:26:25 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

int	ft_replace(const char *filename, std::string str_find, std::string str_replace)
{
	std::ostringstream text;
	size_t start_pos = 0;
	std::ofstream in_file(filename);
	text << in_file.rdbuf();
	std::string str = text.str();
	
	while((start_pos = str.find(str_find, start_pos)) != std::string::npos) {
		str.replace(start_pos, str_find.length(), str_replace);
		start_pos += str_replace.length(); // Handles case where 'to' is a substring of 'from'
	}
	
	std::stringstream string;
	string << std::uppercase << filename << ".replace";
	std::ofstream out_file(string.str());
	out_file << str;
	return 1;
}

int	main(int argc, char const *argv[])
{
	if (argc != 4)
		std::cout << "there aren't four args";
	else if (!argv[2] && !argv[3])
		std::cout << "str1 or 2 are empty";
	else
	{
		if (!ft_replace(argv[1], argv[2], argv[3]))
			std::cout << "ft_replace failed";
	}
	 
	return 0;
}
