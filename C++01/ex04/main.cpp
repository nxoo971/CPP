/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:13:07 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/03 12:08:24 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./includes/Main.hpp"
# include <fstream>

void	searchReplaceFromFile(const std :: string filename,
						const std :: string search, const std :: string replace)
{
	std :: ifstream	in;
	std :: string	content;

	in.open(filename.c_str());
	if (!in.is_open()) {
		std :: cerr << "Can't open file" << std :: endl;
		return ;
	}
	const	std :: string	newfilename = filename + ".replace";
			std :: ofstream	out;
	out.open(newfilename.c_str());
	if (!out.is_open()) {
		std :: cerr << "Can't open file" << std :: endl;
		return ;
	}
	std :: string	read;
	while ((std :: getline(in, read)))
	{
		const std :: size_t	pos = read.find(search);
		if (pos != std :: string :: npos) {
			read.erase(pos, search.length());
			read.insert(pos, replace);
		}
		out << read << std :: endl;
	}
}

int	main(int ac, char const **av)
{
	if (ac != 4)
		std :: cout << "Wrong numbers arguments" << std :: endl;
	else
		searchReplaceFromFile(av[1], av[2], av[3]);
	return (0);
}
