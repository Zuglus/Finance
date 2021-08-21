//
//  Account.cpp
//  Finance
//

#include "Account.h"

Account::Account(int sum)
: sum {sum}{};

void Account::PrintSum()
{
  std::cout << sum << std::endl;
}
