#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

// ------- CREATOR AND DESTRUCTOR

Account::Account(int initial_deposit) : _accountIndex(Account::getNbAccounts()), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
  
  this->_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "amount:" << this->_amount << ";created" << std::endl;
  
  Account::_nbAccounts += 1;
  Account::_totalAmount += this->_amount;
  return ;
}

Account::~Account(void) {

  this->_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "amount:" << this->_amount << ";closed" << std::endl;

  Account::_nbAccounts -= 1;
  Account::_totalAmount -= this->_amount;
  return ;
}

// ------- PUBLIC MEMBER FUNCTIONS

int Account::getNbAccounts(void) {
  return (Account::_nbAccounts);
}

int Account::getTotalAmount(void) {
  return (Account::_totalAmount);
}

int Account::getNbDeposits(void) {
  return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
  return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) {

  Account::_displayTimestamp();
  std::cout << "accounts:" << getNbAccounts() << ";";
  std::cout << "total:" << getTotalAmount() << ";";
  std::cout << "deposits:" << getNbDeposits() << ";";
  std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void  Account::makeDeposit(int deposit) {

  if (deposit < 0)
    return ;
  this->_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "p_amount:" << this->_amount << ";";
  std::cout << "deposit:" << deposit << ";";
  this->_amount += deposit;
  this->_nbDeposits += 1;
  Account::_totalNbDeposits += 1;
  Account::_totalAmount += deposit;
  std::cout << "amount:" << this->_amount << ";";
  std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
  return ;
}

bool Account::makeWithdrawal(int withdrawal) {

  if (withdrawal < 0)
      return (false);
  this->_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "p_amount:" << this->_amount << ";";
  if (this->_amount - withdrawal < 0) {
    std::cout << "withdrawal:refused" << std::endl;
    return (false);
  }
  this->_amount -= withdrawal;
  std::cout << "withdrawal:" << withdrawal << ";";
  this->_nbWithdrawals += 1;
  Account::_totalNbWithdrawals += 1;
  Account::_totalAmount -= withdrawal;
  std::cout << "amount:" << this->_amount << ";";
  std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
  return (true);
}

int Account::checkAmount(void) const {
  return (this->_amount);
}

void Account::displayStatus(void) const {
  
  this->_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "amount:" << this->_amount << ";";
  std::cout << "deposits:" << this->_nbDeposits << ";";
  std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
  return ;
}

// ------- PRIVATE MEMBER FUNCTIONS

void  Account::_displayTimestamp(void) {
  time_t  now = time(0);
  tm      local_tm = *localtime(&now);

  std::cout << "[" << local_tm.tm_year + 1900 << std::setfill('0') << std::setw(2);
  std::cout << local_tm.tm_mon + 1 << std::setw(2) << local_tm.tm_mday << "_";
  std::cout << std::setw(2) << local_tm.tm_hour << std::setw(2) << local_tm.tm_min << std::setw(2) << local_tm.tm_sec << "] ";
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
