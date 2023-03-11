/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 04:46:38 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/11 04:46:41 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "./ClapTrap.hpp"

class ScavTrap : ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std :: string name);
		~ScavTrap();

		void	attack(const std :: string& target);
		void	guardGate(void);
};


#endif