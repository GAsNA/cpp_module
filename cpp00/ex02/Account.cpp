/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:09:56 by rleseur           #+#    #+#             */
/*   Updated: 2022/05/07 18:39:22 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account(void)
{
	return ;
}

Account::Account(int initial_deposit)			// TODO
{
	return ;
}

Account::~Account(void)
{
	return ;
}

static int	Account::getNbAccounts(void)
{
	return (this->_nbAccounts);
}

static int	Account::getTotalAmount(void)
{
	return (this->_totalAmount);
}

static int	Account::getNbDeposits(void)
{
	return (this->_totalNbDeposits);
}

static int	Account::getNbWithdrawals(void)
{
	return (this->_totalNbWithdrawals);
}

static void	Account::displayAccountsInfos(void)	// TODO
{
}

void	Account::makeDeposit(int deposit)		// TODO
{
}

bool	Account::makeWithdrawals(int withdrawals)	// TODO
{
}

int	Account::checkAmount(void) const		// TODO
{
}

void	Account::displayStatus(void) const		// TODO
{
}

static void	Account::_displayTimestamp(void)	// TODO
{
}
