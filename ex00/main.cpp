/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:59:03 by jewancti          #+#    #+#             */
/*   Updated: 2023/02/17 00:28:29 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
	else {
		for (int i = 1; av[i]; i++)
		{
			char	*tmp = av[i];
			for (int j = 0; tmp[j]; j++)
				tmp[j] = std :: toupper(tmp[j]);
			std :: cout << tmp << std :: endl;
		}
	}
	return (0);
}
