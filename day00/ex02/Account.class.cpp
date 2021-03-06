#include "Account.class.hpp"
#include <iostream>
#include <ctime>

Account::Account( int initial_deposit ) {
  this->_accountIndex = Account::_nbAccounts;
  this->_amount = initial_deposit;
  this->_nbDeposits = 0;
  this->_nbWithdrawals = 0;
  Account::_nbAccounts++;
  Account::_totalAmount += initial_deposit;
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex
            << ";amount:" << this->_amount
            << ";created" << std::endl;
}

Account::~Account( void ) {
  Account::_totalAmount -= this->_amount;
  Account::_totalNbDeposits -= this->_nbDeposits;
  Account::_totalNbWithdrawals -= this->_nbWithdrawals;
  Account::_nbAccounts--;
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex
            << ";amount:" << this->_amount
            << ";closed" << std::endl;
}

int Account::getNbAccounts( void ) {
  return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
  return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
  return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
  return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
  Account::_displayTimestamp();
  std::cout << "accounts:" << Account::_nbAccounts
            << ";total:" << Account::_totalAmount
            << ";deposits:" << Account::_totalNbDeposits
            << ";withdrawals:" << Account::_totalNbWithdrawals
            << std::endl;
}

void	Account::makeDeposit( int deposit ) {
  this->_amount += deposit;
  this->_nbDeposits++;
  Account::_totalAmount += deposit;
  Account::_totalNbDeposits++;
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex
            << ";p_amount:" << (this->_amount - deposit)
            << ";deposit:" << deposit
            << ";amount:" << this->_amount
            << ";nb_deposits:" << this->_nbDeposits
            << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
  bool success;
  if (this->_amount >= withdrawal) {
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    Account::_displayTimestamp();
    success = true;
  } else {
    Account::_displayTimestamp();
    success = false;
  }
  std::cout << "index:" << this->_accountIndex;
  if (success) {
    std::cout << ";p_amount:" << (this->_amount + withdrawal)
              << ";withdrawal:" << withdrawal
              << ";amount:" << this->_amount
              << ";nb_withdrawals:" << this->_nbWithdrawals;
  } else {
    std::cout << ";p_amount:" << (this->_amount)
              << ";withdrawal:refused";
  }
  std::cout << std::endl;
  return success;
}

int		Account::checkAmount( void ) const {
  return this->_amount;
}

void	Account::displayStatus( void ) const {
  Account::_displayTimestamp();

  std::cout << "index:" << this->_accountIndex
            << ";amount:" << this->_amount
            << ";deposits:" << this->_nbDeposits
            << ";withdrawals:" << this->_nbWithdrawals
            << std::endl;
}

void	Account::_displayTimestamp( void ) {
  char buffer [80];
  time_t t = std::time(0);
  struct tm * timeinfo = std::localtime(&t);

  std::strftime(buffer, 80, "[%Y%m%d_%H%M%S]", timeinfo);
  std::cout << buffer << " ";
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//

//
//
//
//
//
//
//               ////                    ////
//               ////                    ////
//
//
//                          ////
//                          ///
//                          //
//
//
//             ///                               ///
//             ///                              ///
//               ///                          ///
//                 /////////////////////////////
//
//
//
//
//