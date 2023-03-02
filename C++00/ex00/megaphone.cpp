/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:59:03 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 07:19:01 by jewancti         ###   ########.fr       */
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
			char *const tmp = av[i];
			for (int j = 0; tmp[j]; j++)
				tmp[j] = std :: toupper(tmp[j]);
			std :: cout << tmp;
		}
		std :: cout << std :: endl;
	}
	return (0);
}
