/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:45:34 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/08 12:00:16 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>
using namespace std;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void) { return _nbAccounts; }

int	Account::getTotalAmount(void) { return _totalAmount; }

int	Account::getNbDeposits(void) { return _totalNbDeposits; }

int	Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

int	Account::checkAmount(void) const { return this->_amount > 0; }

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	_totalAmount += initial_deposit;
	this->_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "created" << endl;
}

Account::~Account(void) {
	_totalAmount -= this->_amount;
	_nbAccounts -= 1;
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "closed" << endl;
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	cout << "accounts:" << getNbAccounts() << ";";
	cout << "total:" << getTotalAmount() << ";";
	cout << "deposits:" << getNbDeposits() << ";";
	cout << "withdrawals:" << getNbWithdrawals() << ";" << endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "p_amount:" << this->_amount << ";";
	cout << "withdrawal:";
	if (withdrawal > this->_amount)
	{
		cout << "refused" << endl;
		return (false);
	}
	else
	{
		cout << withdrawal << ";";
		this->_amount -= withdrawal;
		cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		cout << "nb_withdrawals:" << this->_nbWithdrawals << endl;	
	}
	return (true);
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "p_amount:" << this->_amount << ";";
	cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	cout << "nb_deposits:" << this->_nbDeposits << endl;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "deposits:" << this->_nbDeposits << ";";
	cout << "withdrawals:" << this->_nbWithdrawals << endl;
}

void	Account::_displayTimestamp(void) {
	time_t	rawtime;
	struct tm *timeinfo;
	char	buffer[19];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 19, "[%G%m%d_%H%M%S] ", timeinfo);
	cout << buffer;
}
