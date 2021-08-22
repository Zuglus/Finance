//
//  Account.cpp
//  Finance
//

#include "Account.hpp"

Account::Account(int sum)
: sum{sum}{};

void Account::IncreaseSum(int sum)
{
  this->sum += sum;
}
