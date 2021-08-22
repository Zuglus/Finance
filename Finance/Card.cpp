//
//  Card.cpp
//  Finance
//

#include "Card.hpp"

Card::Card(int sum, Type type)
: Account(sum), type {type}{};

void Card::PrintSum()
{
    std::cout << "Card: " << (type == debit ? "Debit" : "Credit") << std::endl
    << "Sum: " << sum << std::endl;
  
}
