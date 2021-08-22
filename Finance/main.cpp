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
  vallet.Print();
  vallet2.Print();
  vallet3.Print();
  vallet.IncreaseAccount(100, 50);
  vallet.Print();
  vallet.IncreaseAccount(178, 33);
  vallet.Print();
  vallet.Print(18);
  vallet3.Print(253);
  vallet3.DecreaseAccount(253, 700, "products");
  vallet3.Print(253);
  vallet.AddAccount(200, 1000);
  vallet.Print(200);
  std::cout << "\nDeleted\n";
  vallet.DeleteAccount(200);
  vallet.Print();
    return 0;
}
