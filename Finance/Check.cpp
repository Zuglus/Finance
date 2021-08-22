//
//  Check.cpp
//  Finance
//

#include "Check.hpp"

Check::Check(int sum, std::string type)
: sum {sum}, type {type}, date {time(NULL)}
{}

bool Check::IsDateInRange(time_t start, time_t end)
{
  if (date >= start &&
      date <= end)
    return true;
  return false;
}

int Check::ChangeSum(int sum)
{
  return sum - this->sum;
}

bool Check::IsType(std::string type)
{
  return this->type == type;
}

void Check::Print()
{
  std::cout << "Date: " << date << std::endl
  << "Sum: " << sum << std::endl
  << "Type: " << type << std::endl;
}
