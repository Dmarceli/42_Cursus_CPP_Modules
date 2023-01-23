#include "Account.hpp"
#include <string>
#include <iostream>
#include <iomanip>
typedef std::string	str;

//constructors and destructors

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) { return Account::_nbAccounts;}

int Account::getTotalAmount(void) { return Account::_totalAmount;}

int Account::getNbDeposits(void){return Account::_totalNbDeposits;}

int Account::getNbWithdrawals(void){return Account::_totalNbWithdrawals;}

int Account::checkAmount(void) const{return Account::_amount;}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "created" << std::endl;
}

Account::~Account( void ) {
	_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "closed" << std::endl;
}

//display functions

void Account::_displayTimestamp(void)
{
	time_t 		currentTime;
	struct tm 	*localTime;
	char 		outstr[20];

	time(&currentTime);
	localTime = localtime(&currentTime);
	strftime(outstr, 20, "[%Y%m%d_%H%M%S] ", localTime);
	std::cout << outstr;
}

void	Account::displayAccountsInfos( void ) 
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
		    	<< ";total:" << getTotalAmount()
		    	<< ";deposits:" << getNbDeposits()
		    	<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
				<< "amount:" << checkAmount() << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawals:" << _nbWithdrawals << std::endl;
}

// deposits and withdrawls methods

void Account::makeDeposit(int amount)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
		    	<< ";p_amount:" << _amount
		    	<< ";deposit:" << amount;
	
	_amount += amount;
	_totalAmount += amount;

	_nbDeposits++;
	_totalNbDeposits++;

	std::cout << ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) 
{

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		      << ";p_amount:" << _amount;
	if (_amount >= withdrawal) {
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal
					<< ";amount:" << _amount
					<< ";nb_withdrawals:" << _nbWithdrawals 
					<< std::endl;
		return (true);
	}
	std::cout << ";withdrawal:refused" << std::endl;
	return (false);
}