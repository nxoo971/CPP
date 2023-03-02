/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:24:20 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 20:59:48 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../../includes/Zombie.hpp"

Zombie :: Zombie(void) { }

Zombie :: Zombie(std :: string name)
{
	this -> name = name;
}

Zombie :: ~Zombie() { std :: cout << "Destructor called (" << this -> name << ")" << std :: endl; }

void	Zombie :: announce(void)
{
	std :: cout << this -> name << ": " << "BraiiiiiiinnnzzzZ..." << std :: endl;
}

void	Zombie :: setName(const std :: string& name)
{
	this -> name = name;
}