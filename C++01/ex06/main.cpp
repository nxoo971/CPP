/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:13:07 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/03 23:11:25 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./includes/Harl.hpp"

int	main(int ac, char const **av)
{
	if (ac != 2) {
		std :: cerr << "Wrong arguments counts" << std :: endl;
		return (1);
	}
	static const std :: string	names[FUNC_SIZE] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	const	std :: string		param = av[1];
			Harl				harl;

	int	index = -1;
	for (int i = 0; i < FUNC_SIZE; i++)
	{
		if (param == names[i]) {
			index = i;
			break ;		
		}
	}
	switch (index)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std :: cerr << "Insignificant problems" << std :: endl;
			break;
	}
	return (0);
}