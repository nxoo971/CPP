/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:53:44 by jewancti          #+#    #+#             */
/*   Updated: 2023/02/23 19:26:16 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./includes/Account.hpp"

Account :: Account(int initial_deposit)
{
	this -> _nbDeposits = initial_deposit;
}

Account :: ~Account(void) {}

int	Account::getNbAccounts(void)
{
	return (Account :: _nbAccounts);
}

int	Account :: getTotalAmount(void)
{
	return (Account :: _totalAmount);
}

int	Account :: getNbDeposits(void)
{
	return (Account :: _nbDeposits);
}

int	Account :: getNbWithdrawals(void)
{
	return (Account :: _nbWithdrawals);
}

void	makeDeposit(int deposit)
{
	Account :: _totalAmount += deposit;
	Account :: _totalNbDeposits ++;
}

bool	makeWithdrawal(int withdrawal)
{
	Account :: _totalNbDeposits += withdrawal;
	Account :: _totalNbWithdrawals ++;
}

int		checkAmount(void) const
{

}

void	displayStatus(void) const
{

}