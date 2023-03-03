/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:39:21 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/03 08:31:52 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../includes/Zombie.hpp"

Zombie	*zombieHorde(int N, std :: string name)
{
	if (N <= 0)
		return (0);
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		horde[i].setName(name);	
	}
	return (horde);
}

void	printHorde(Zombie *horde, const int size)
{
	for (int i = 0; i < size; i++)
		horde[i].announce();
	std :: cout << std :: endl;
}