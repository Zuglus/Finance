//
//  Account.h
//  Finance
//

#pragma once
#include <iostream>

class Account
{
public:
  Account(int);
  virtual void IncreaseSum(int);
  virtual void PrintSum() = 0;
protected:
  int sum;
};
