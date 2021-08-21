//
//  Vallet.h
//  Finance
//

#pragma once
#include <map>
#include "Account.h"

class Vallet
{
public:
  Vallet(int, int);
  Vallet();
  void AddAccount(int);
  void AddAccount(int, int);
  void UpdateAccount(int, int);
  void DeleteAccount(int);
  void PrintAccounts();
private:
  std::map <int, Account*> accounts;
};
