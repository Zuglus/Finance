//
//  Count.hpp
//  Finance
//

#pragma once
#include "Account.hpp"

class Count : public Account
{
public:
  Count(int);
  void PrintSum() override;
};
