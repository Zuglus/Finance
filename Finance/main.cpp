//
//  main.cpp
//  Finance
//

#include "Vallet.hpp"

int main(int argc, const char * argv[]) {
  
  Vallet vallet(178, 15000);
  Vallet vallet2;
  Vallet vallet3(253, 1000, Card::credit);
  vallet.AddAccount(18, 250);
  vallet.AddAccount(100, Card::debit);
  vallet.AddAccount(100);
  vallet.PrintAccounts();
  vallet2.PrintAccounts();
  vallet3.PrintAccounts();
  vallet.IncreaseAccount(100, 50);
  vallet.PrintAccounts();
  vallet.IncreaseAccount(178, 33);
  vallet.PrintAccounts();
    return 0;
}
