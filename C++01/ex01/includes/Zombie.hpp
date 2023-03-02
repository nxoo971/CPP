/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:14:55 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 21:09:27 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std :: string	name;
	public:
		Zombie(void);
		Zombie(std :: string name);
		~Zombie();

		void	announce(void);
		void	setName(const std :: string& name);
};

Zombie	*newZombie(std :: string name);
Zombie	*zombieHorde(int N, std :: string name);
void	randomChump(std :: string name);
void	printHorde(Zombie *horde, const int size);

#endif