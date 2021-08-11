/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:07:02 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/11 13:56:39 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_accountIndex = Account::_nbAccounts++;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" 
		<< _amount << ";deposits:" << deposit << ";amount:";
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

int Account::checkAmount() const
{
	if (_amount < 0)
		return (1);
	return (0);
}

bool Account::makeWithdrawal(int withdrawal)
{
	int temp;

	temp = _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:"
		<< _amount;
	_amount -= withdrawal;
	if (checkAmount())
	{
		std::cout << ";withdrawal:refused" << std::endl;
		_amount = temp;
	}
	else
	{
		_amount = temp;
		_amount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
	}
	return (1);
}

void Account::displayStatus() const 
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount 
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accouts:"<< Account::_nbAccounts << ";total:" << _totalAmount 
		<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
	time_t	now = time(0);
	tm		*time;

	time = localtime(&now);
	std::cout << "[" << 1900 + time->tm_year 
	<< time->tm_mon / 10 << time->tm_mon % 10 
	<< time->tm_mday / 10 << time->tm_mday % 10 
	<< "_" << time->tm_hour / 10 << time->tm_hour % 10 
	<< time->tm_min / 10 << time->tm_min % 10
	<< time->tm_sec / 10 << time->tm_sec % 10 << "] ";
}
