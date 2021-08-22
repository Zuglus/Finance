//
//  Account.h
//  Finance
//

#pragma once
#include <iostream>
#include <vector>
#include "Check.hpp"

class Account
{
public:
  Account(int);
  virtual void IncreaseSum(int);
  virtual void DecreaseSum(int, std::string);
  virtual void PrintSum() = 0;
protected:
  int sum;
  std::vector <Check*> checks;
};
