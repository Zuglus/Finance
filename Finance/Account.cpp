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

void Account::DecreaseSum(int sum, std::string type)
{
  this->sum -= sum;
  checks.push_back(new Check(sum, type));
}
