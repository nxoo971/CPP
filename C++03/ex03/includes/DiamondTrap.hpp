/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 04:46:55 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/11 04:48:18 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "./ClapTrap.hpp"

class DiamondTrap : ClapTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std :: string name);
		~DiamondTrap();
};


#endif