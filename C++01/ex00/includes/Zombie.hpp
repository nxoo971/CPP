/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:14:55 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 20:32:28 by jewancti         ###   ########.fr       */
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
		Zombie(std :: string name);
		~Zombie();
		void	announce(void);
};

Zombie*	newZombie(std :: string name);
void	randomChump(std :: string name);

#endif