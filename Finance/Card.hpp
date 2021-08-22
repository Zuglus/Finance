//
//  Card.hpp
//  Finance

#pragma once
#include "Account.hpp"

class Card : public Account
{
public:
  enum Type
  {
    debit,
    credit
  };
  Card(int, Type);
  
  void PrintSum() override;
  
private:
  Type type;
};
