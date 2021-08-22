//
//  Count.cpp
//  Finance
//

#include "Count.hpp"

Count::Count(int sum)
: Account(sum){}

void Count::PrintSum()
{
  std:: cout << "Sum: " << sum << std::endl;
}
