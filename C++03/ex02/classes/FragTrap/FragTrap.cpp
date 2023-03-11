/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 04:37:00 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/11 04:39:47 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../../includes/FragTrap.hpp"

FragTrap :: FragTrap(void)
{
	this -> _name = "Default name";
	this -> _hitPoints = 100;
	this -> _energyPoints = 10;
	this -> _attackDamage = 30;
	std :: cout << "FragTrap default constructor called" << std :: endl;
}

FragTrap :: ~FragTrap() { std :: cout << "FragTrap destructor called" << std :: endl; }

FragTrap :: FragTrap(const std :: string name)
{
	this -> _name = name;
	this -> _hitPoints = 100;
	this -> _energyPoints = 50;
	this -> _attackDamage = 20;
	std :: cout << "FragTrap copy constructor called" << std :: endl;
}

void	FragTrap :: highFivesGuys(void)
{
	std :: cout << "Give me high fives!" << std :: endl;
}
