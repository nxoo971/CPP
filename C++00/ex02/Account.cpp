/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:53:44 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 00:32:26 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <time.h>


int	Account :: _nbAccounts = 0,
	Account :: _totalAmount = 0,
	Account :: _totalNbDeposits = 0,
	Account :: _totalNbWithdrawals = 0;

Account :: Account(void) { }

Account :: ~Account(void) { 
	_displayTimestamp();
	std :: cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";closed" << std :: endl;
}


Account :: Account(int initial_deposit)
{
	_displayTimestamp();
	std :: cout	<< "index:" << _nbAccounts << ";"
				<< "amount:" << initial_deposit << ";created" << std :: endl;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
}

void	Account :: _displayTimestamp(void)
{
	time_t	timer = time(& timer);

	std :: cout << "[" << timer << "] ";
}

void	Account :: makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std :: cout	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount << ";"
				<< "deposit:" << deposit << ";"
				<< "amount:" << deposit + _amount << ";"
				<< "nb_deposits:" << _nbDeposits << std :: endl;
	_amount += deposit;
	_totalAmount += deposit;
}

bool	Account :: makeWithdrawal(int withdrawal)
{
	const bool	possible = _amount - withdrawal >= 0;

	_displayTimestamp();
	std :: cout	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount << ";";
	if (possible)
	{
		_totalNbWithdrawals++;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std :: cout << "withdrawal:" << withdrawal << ";"
		<< "amount:" << _amount << ";"
		<< "nb_withdrawals:" << ++_nbWithdrawals << std :: endl;
	}
	else
		std :: cout << "withdrawal:refused" << std :: endl;
	return (possible);
}
int		Account :: checkAmount(void) const
{
	return _amount;
}
void	Account :: displayStatus(void) const
{
	_displayTimestamp();
	std :: cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawals:" << _nbWithdrawals << std :: endl;
}

int		Account :: getNbAccounts(void)
{
	return _nbAccounts;
}

int		Account :: getTotalAmount(void)
{
	return _totalAmount;
}
int		Account :: getNbDeposits(void)
{
	return _totalNbDeposits;
}
int		Account :: getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}
void	Account :: displayAccountsInfos(void)
{
	_displayTimestamp();
	std :: cout	<< "accounts:" << _nbAccounts << ";"
				<< "total:" << _totalAmount << ";"
				<< "deposits:" << _totalNbDeposits << ";"
				<< "withdrawals:" << _totalNbWithdrawals << std :: endl;
}

/*
Pour afficher le timestamp dans le format "19920104_091532" en C++, vous pouvez utiliser la biblioth??que standard <ctime> et les fonctions associ??es pour obtenir les composants de temps tels que l'ann??e, le mois, le jour, l'heure, les minutes et les secondes, puis les concat??ner dans une cha??ne de caract??res dans le format souhait??.

Voici un exemple de code qui utilise la fonction time() de <ctime> pour r??cup??rer le temps actuel en secondes depuis l'??poque UNIX, puis utilise les fonctions localtime() et strftime() pour obtenir les composants de temps et les formater en cha??ne de caract??res selon le format "19920104_091532" :

c++
Copy code
#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>

int main()
{
    std::time_t now = std::time(nullptr);
    std::tm *tm = std::localtime(&now);
    std::ostringstream oss;
    oss << std::put_time(tm, "%Y%m%d_%H%M%S");
    std::string timestamp = oss.str();
    std::cout << timestamp << std::endl;
    return 0;
}
La fonction std::put_time() de <iomanip> permet de formater les composants de temps en cha??ne de caract??res selon un format sp??cifi??. Dans cet exemple, "%Y%m%d_%H%M%S" sp??cifie le format pour l'ann??e, le mois, le jour, l'heure, les minutes et les secondes respectivement, avec des s??parateurs '_' entre la date et l'heure. La cha??ne de caract??res r??sultante est stock??e dans une variable de type std::string pour affichage ult??rieur.
*/