//
//  Vallet.cpp
//  Finance
//

#include "Vallet.h"

Vallet::Vallet(int id, int sum)
{
  Account* account = new Account(sum);
  auto result = accounts.insert(std::pair<int, Account*>(id, account));
  while (!result.second)
    result = accounts.insert(std::pair<int, Account*> (id, account));
}

Vallet::Vallet()
: Vallet(0, 0){};

void Vallet::PrintAccounts()
{
  for (auto iter = accounts.begin(); iter != accounts.end(); ++iter)
  {
    std::cout << "ID: " << iter->first << std::endl
    << "Sum: ";
    iter->second->PrintSum();
  }
}
