#include "Account.class.hpp"

static int	_nbAccounts1;
static int	_totalAmount1;
static int	_totalNbDeposits1;
static int	_totalNbWithdrawals1;

int	Account::getNbAccounts( void ) {
  return _nbAccounts1;
}

int	Account::getTotalAmount( void ) {
  return _totalAmount1;
}

int	Account::getNbDeposits( void ) {
  return _totalNbDeposits1;
}

int	Account::getNbWithdrawals( void ) {
  return _totalNbWithdrawals1;
}

void	Account::makeDeposit( int deposit ) {
    _totalAmount1 += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
  if (_totalAmount1 > withdrawal) {
    _totalAmount1 -= withdrawal;
    return true;
  }
  return false;
}

int		checkAmount( void ) const {
  
}
