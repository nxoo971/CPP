/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:43:53 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/11 03:06:28 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../../includes/ClapTrap.hpp"

ClapTrap :: ClapTrap(void) : _name("Default name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std :: cout << "Default constructor called" << std :: endl;
}

ClapTrap :: ClapTrap(const std :: string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std :: cout << "Copy constructor called" << std :: endl;
}

ClapTrap :: ~ClapTrap() { std :: cout << "Destructor called" << std :: endl; }

unsigned int	ClapTrap :: getEnergyPoints(void) const
{
	return this -> _energyPoints;
}

unsigned int	ClapTrap :: getHitsPoints(void) const
{
	return this -> _hitPoints;
}

void	ClapTrap :: setEnergyPoints(const unsigned int energyPoints)
{
	if (this -> hasPoints())
		this -> _energyPoints = energyPoints;
}

void	ClapTrap :: setHitsPoints(const unsigned int hitPoints)
{
	if (this -> hasPoints())
		this -> _hitPoints = hitPoints;
}

void	ClapTrap :: setAttackDamage(const unsigned int attackDamage)
{
	if (this -> hasPoints())
		this -> _attackDamage = attackDamage;
}

void	ClapTrap :: attack(const std :: string& target)
{
	if (this -> hasPoints()) {
		std :: cout << "ClapTrap " << this -> _name
					<< ": attacks " << target << ", causing " << _attackDamage << " points of damages!" << std :: endl;
		this -> _energyPoints--;
	}
}

void	ClapTrap :: takeDamage(unsigned int amount)
{
	if (this -> hasPoints()) {
		std :: cout << __func__ << " called with " << amount << " energy pts" << std :: endl;
		if (amount < this -> _energyPoints)
			this -> _energyPoints -= amount;
		else
			this -> _energyPoints = 0;
	}
}

void	ClapTrap :: beRepaired(unsigned int amount)
{
	if (this -> hasPoints()) {
		std :: cout << this -> _name << " has been repaired (" << amount << "pts)" << std :: endl;
		this -> _hitPoints += amount;
		this -> _energyPoints--;
	}
	
}

bool	ClapTrap :: hasPoints() const
{
	if (this -> _energyPoints == 0 || this -> _hitPoints == 0) {
		std :: cout << "No energy points or hit points" << std :: endl;
		return false;
	}
	return true;
}