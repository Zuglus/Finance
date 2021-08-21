//
//  Account.h
//  Finance
//

#pragma once

class Account
{
public:
  Account(int sum)
  : sum {sum}{};
  Account()
  : Account(0){};
private:
  int sum;
};
