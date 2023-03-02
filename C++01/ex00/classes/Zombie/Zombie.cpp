/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:24:20 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 20:31:18 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../../includes/Zombie.hpp"

Zombie :: Zombie(std :: string name)
{
	this -> name = name;
}

Zombie :: ~Zombie() { std :: cout << "Destructor called (" << this -> name << ")" << std :: endl; }

void	Zombie :: announce(void)
{
	std :: cout << this -> name << ": " << "BraiiiiiiinnnzzzZ..." << std :: endl;
}
