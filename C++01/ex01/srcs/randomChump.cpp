/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:23:17 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 19:25:23 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../includes/Zombie.hpp"

void	randomChump(std :: string name)
{
	Zombie	chump(name);

	chump.announce();
}