//
//  Vallet.cpp
//  Finance
//

#include "Vallet.hpp"

Vallet::Vallet(int id, int sum, Card::Type type)
{
  accounts[id] = new Card(sum, type);
}

Vallet::Vallet(int id, int sum)
{
  accounts[id] = new Count(sum);
}

Vallet::Vallet()
: Vallet(1, 0){};

void Vallet::AddAccount(int id)
{
  AddAccount(id, 0);
}

void Vallet::AddAccount(int id, int sum)
{
  auto result = accounts.insert(std::pair <int, Account*> (id, new Count(sum)));
  if (!result.second)
    std::cout << "Error: account '" << id << "' exists!!!\n";
}

void Vallet::AddAccount(int id, Card::Type type)
{
  AddAccount(id, 0, type);
}

void Vallet::AddAccount(int id, int sum, Card::Type type)
{
  auto result = accounts.insert(std::pair <int, Account*> (id, new Card(sum, type)));
  if (!result.second)
    std::cout << "Error: account '" << id << "' exists!!!\n";
}

void Vallet::IncreaseAccount(int id, int sum)
{
  auto result = accounts.find(id);
  if (result == accounts.end())
    std::cout << "\nInvalid ID!!!\n";
  else
    result->second->IncreaseSum(sum);
}

void Vallet::DecreaseAccount(int id, int sum, std::string type)
{
  auto result = accounts.find(id);
  if (result == accounts.end())
    std::cout << "\nInvalid ID!!!\n";
  else
  {
    result->second->DecreaseSum(sum, type);
  }
}

void Vallet::DeleteAccount(int id)
{
  accounts.erase(id);
}

void Vallet::Print(int id)
{
  auto result = accounts.find(id);
  if (result == accounts.end())
    std::cout << "\nInvalid ID!!!\n";
  else
  {
    std::cout << "Account: " << id << std::endl;
    result->second->PrintSum();
  }
}

void Vallet::Print()
{
  for (auto iter = accounts.begin(); iter != accounts.end(); ++iter)
  {
    Print(iter->first);
  }
}
