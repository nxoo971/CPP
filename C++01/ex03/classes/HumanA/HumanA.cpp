/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:42:47 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 22:59:42 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../../includes/HumanA.hpp"

HumanA :: HumanA(std :: string name, Weapon& weapon)
{
	this -> name = name;
	this -> weapon = & weapon;
}

HumanA :: ~HumanA(void) { }

void	HumanA :: attack(void)
{
	std :: cout << this -> name << " attacks with their " << this -> weapon -> getType() << std :: endl;
}
