/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:57:40 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 23:00:11 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../../includes/HumanB.hpp"

HumanB :: HumanB(std :: string name)
{
	this -> name = name;
}

HumanB :: ~HumanB(void) { }

void	HumanB :: attack(void)
{
	std :: cout << this -> name << " attacks with their " << this -> weapon -> getType() << std :: endl;
}

void	HumanB :: setWeapon(Weapon& weapon)
{
	this -> weapon = & weapon;
}