#include "Account.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>
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
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "created" << std::endl;
}

Account::~Account( void ) {
	Account::_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
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
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts()
		    	<< ";total:" << Account::getTotalAmount()
		    	<< ";deposits:" << Account::getNbDeposits()
		    	<< ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";"
				<< "amount:" << Account::checkAmount() << ";"
				<< "deposits:" << Account::_nbDeposits << ";"
				<< "withdrawals:" << Account::_nbWithdrawals << std::endl;
}

// deposits and withdrawls

void Account::makeDeposit(int amount)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		    	<< ";p_amount:" << this->_amount
		    	<< ";deposit:" << amount;
	
	this->_amount += amount;
	_totalAmount += amount;

	_nbDeposits++;
	this->_totalNbDeposits++;

	std::cout << ";amount:" << this->_amount
				<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) 
{

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		      << ";p_amount:" << this->_amount;
	if (this->_amount >= withdrawal) {
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal
					<< ";amount:" << this->_amount
					<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << ";withdrawal:refused" << std::endl;
	return (false);
}