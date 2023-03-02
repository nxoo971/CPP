/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:13:07 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 20:34:19 by jewancti         ###   ########.fr       */
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
	return (0);
}