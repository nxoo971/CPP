/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:31:36 by jewancti          #+#    #+#             */
/*   Updated: 2023/02/23 09:33:02 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./includes/Main.hpp"

static
void	print_menu(void)
{
	std :: cout << "Available options:" << std :: endl;
	std :: cout << "\t[\tADD\t]" << std :: endl;
	std :: cout << "\t[\tSEARCH\t]" << std :: endl;
	std :: cout << "\t[\tEXIT\t]" << std :: endl;
}

static
bool	is_valid(const std :: string& s, int check(int c))
{
	int	i;

	for (i = 0; s[i] && check(s[i]) == 0; i++) ;
	return (i != 0 && s[i] == '\0');
}

std :: string	get_input(bool isspace, bool numeric)
{
	std :: string	input;

	for (;;)
	{
		std :: cin >> input;
		if (! std :: cin)
			exit(0);
		if (is_valid(input, & std :: isspace)) {
			const int	isnumeric = !is_valid(input, & std :: isdigit);
			if ((!numeric && !isnumeric) || (numeric && isnumeric))
				break ;
		} else if (isspace) return "";
	}
	return (input);
}

int	main(void)
{
	PhoneBook		rep;
	std :: string	input;

	print_menu();
	while (42)
	{
		input = get_input();
		if (input == "ADD")
			add(rep);
		else if (input == "SEARCH")
			search(rep);
		else if (input == "EXIT")
			break ;
		else
			print_menu();
	}
	return (0);
}
