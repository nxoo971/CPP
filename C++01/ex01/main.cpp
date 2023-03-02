/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:13:07 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 21:10:15 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./includes/Zombie.hpp"

int	main(void)
{
	Zombie	zomb("test");

	zomb.announce();
	Zombie *test = newZombie("sheesh");
	test -> announce();
	delete test;
	randomChump("un nom");
	std :: cout << "\t-----------------------" << std :: endl;
	const int size = 10;
	Zombie	*zombies = zombieHorde(size, "Sheeesh 37");
	printHorde(zombies, size);
	delete [] zombies;
	return (0);
}