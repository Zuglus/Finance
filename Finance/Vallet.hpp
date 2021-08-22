//
//  Vallet.h
//  Finance
//

#pragma once
#include <map>
#include "Count.hpp"
#include "Card.hpp"

class Vallet
{
public:
  // Constructor
  Vallet(int, int, Card::Type);
  Vallet(int, int);
  Vallet();
  
  // Add
  void AddAccount(int);
  void AddAccount(int, int);
  void AddAccount(int, Card::Type);
  void AddAccount(int, int, Card::Type);
  
  // Increase
  void IncreaseAccount(int, int);
  
  // Del
  void DeleteAccount(int);
  
  // Print
  void PrintAccount(int);
  void PrintAccounts();
  
private:
  std::map <int, Account*> accounts;
};
