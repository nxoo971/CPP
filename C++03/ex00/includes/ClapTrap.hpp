/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:43:15 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/11 03:04:41 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std :: string	_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(std :: string name);
		~ClapTrap();

		unsigned int	getEnergyPoints() const;
		unsigned int	getHitsPoints() const;
		void			setEnergyPoints(const unsigned int energyPoints);
		void			setHitsPoints(const unsigned int hitPoints);
		void			setAttackDamage(const unsigned int attackDamage);
		void			attack(const std :: string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		bool			hasPoints(void) const;
};


#endif