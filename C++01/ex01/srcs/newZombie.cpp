/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:33:07 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 19:23:28 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../includes/Zombie.hpp"

Zombie	*newZombie(std :: string name)
{
	//Zombie	*zomb = new Zombie(name);

	return (new Zombie(name));
}