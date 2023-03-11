/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 04:46:10 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/11 04:48:13 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../../includes/DiamondTrap.hpp"

DiamondTrap :: DiamondTrap(void)
{
	this -> _name = "Default name";
	this -> _hitPoints = 100;
	this -> _energyPoints = 50;
	this -> _attackDamage = 20;
	std :: cout << "DiamondTrap default constructor called" << std :: endl;
}

DiamondTrap :: ~DiamondTrap() { std :: cout << "DiamondTrap destructor called" << std :: endl; }

DiamondTrap :: DiamondTrap(const std :: string name)
{
	this -> _name = name;
	this -> _hitPoints = 100;
	this -> _energyPoints = 50;
	this -> _attackDamage = 20;
	std :: cout << "DiamondTrap copy constructor called" << std :: endl;
}
