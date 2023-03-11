/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 04:07:04 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/11 04:34:47 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../../includes/ScavTrap.hpp"

ScavTrap :: ScavTrap(void)
{
	this -> _name = "Default name";
	this -> _hitPoints = 100;
	this -> _energyPoints = 50;
	this -> _attackDamage = 20;
	std :: cout << "ScavTrap default constructor called" << std :: endl;
}

ScavTrap :: ~ScavTrap() { std :: cout << "ScavTrap destructor called" << std :: endl; }

ScavTrap :: ScavTrap(const std :: string name)
{
	this -> _name = name;
	this -> _hitPoints = 100;
	this -> _energyPoints = 50;
	this -> _attackDamage = 20;
	std :: cout << "ScavTrap copy constructor called" << std :: endl;
}

void	ScavTrap :: attack(const std :: string& target)
{
	if (this -> hasPoints()) {
		std :: cout << "ScavTrap " << this -> _name
					<< ": attacks " << target << ", causing " << _attackDamage << " points of damages!" << std :: endl;
		this -> _energyPoints--;
	}
}

void	ScavTrap :: guardGate(void)
{
	std :: cout << "ScavTrap entered mode: Gate Keeper" << std :: endl;
}
