#include <iostream>
#include <ctime>
#include "Account.hpp"

Account::Account(int initial_deposit) :  _amount(initial_deposit), _nbDeposits(0)
{
	_displayTimestamp();
	_nbWithdrawals = 0;
	// _nbDeposits = 0;
	_accountIndex = _nbAccounts;
	// _amount = initial_deposit;
	_totalAmount = _totalAmount + _amount;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	_nbAccounts++;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed"  << std::endl;
}


void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	std::cout << "amount:" << _amount << ";";
	_nbDeposits += 1;
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
	_totalNbDeposits += 1;
	_totalAmount += deposit;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (_amount >= withdrawal)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		_amount -= withdrawal;
		std::cout << "amount:" << _amount << ";";
		_nbWithdrawals += 1;
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += 1;

	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return(false);
	}
	return (true);
}

int		Account::checkAmount(void) const
{
	// std::cout << "oui\n";
	return (0);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

	std::cout << "["  << (now->tm_year + 1900);
	if (now->tm_mon < 10)
		std::cout << "0";
    std::cout << (now->tm_mon + 1);
	if (now->tm_mday < 10)
		std::cout << "0";
    std::cout << now->tm_mday;
	if (now->tm_hour < 10)
		std::cout << "0";
	std::cout  << "_" << now->tm_hour;
	if (now->tm_min < 10)
		std::cout << "0";
	std::cout << now->tm_min;
	if (now->tm_sec < 10)
		std::cout << "0";
	std::cout << now->tm_sec << "] ";
}

int Account::_nbAccounts = 0;
int Account::_totalNbWithdrawals = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}
