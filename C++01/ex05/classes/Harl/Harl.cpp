/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:11:28 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/03 22:27:00 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../../includes/Harl.hpp"

Harl :: Harl(void) { }

Harl :: ~Harl() { }

void	Harl :: debug(void)		{ std :: cout << "This is a debug message" << std :: endl; }
void	Harl :: info(void)		{ std :: cout << "This is an info message" << std :: endl; }
void	Harl :: warning(void)	{ std :: cout << "This is a warning message" << std :: endl; }
void	Harl :: error(void)		{ std :: cout << "This is an error message" << std :: endl; }

void	Harl :: complain(std :: string level)
{
	static const Harl :: ptr_func	funcs[FUNC_SIZE] = {
		& Harl :: debug,
		& Harl :: info,
		& Harl :: warning,
		& Harl :: error
	};
	static const std :: string		names[FUNC_SIZE] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < FUNC_SIZE; i++) {
		if (names[i] == level)
			(this ->*funcs[i])();
	}
}