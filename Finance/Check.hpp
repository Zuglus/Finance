//
//  Check.hpp
//  Finance
//

#pragma once
#include <ctime>
#include <string>
#include <iostream>

class Check
{
public:
  Check (int, std::string);
  bool IsDateInRange(time_t, time_t);
  int ChangeSum(int);
  bool IsType(std::string);
  void Print();
private:
  time_t date;
  int sum;
  std::string type;
};
