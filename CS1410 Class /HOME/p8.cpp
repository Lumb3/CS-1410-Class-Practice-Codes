#include <iostream>
using namespace std;

class Account
{
public:
  double account_balance;

  // Constructor
  Account(double initial_balance)
  {
    if (initial_balance >= 0.0)
    {
      account_balance = initial_balance;
    }
    else
    {
      account_balance = 0.0;
      cout << "Error. Your initial balance must be greater than or equal to 0.0" << endl;
    }
  }

  void credit(double amount_to_add)
  {
    account_balance += amount_to_add;
  }

  bool debit(double amount_to_withdraw)
  {
    if (amount_to_withdraw <= account_balance)
    {
      account_balance -= amount_to_withdraw;
      return true;
    }
    else
    {
      cout << "Debit amount exceeded account balance." << endl;
      return false;
    }
  }

  double getBalance() const
  {
    return account_balance;
  }
};

class SavingsAccount : public Account
{
public:
  double interest_rate;

  SavingsAccount(double initial_balance, double interest_rate) : Account(initial_balance)
  {
    interest_rate = interest_rate;
  }

  double calculateInterest() const
  {
    return account_balance * (interest_rate / 100);
  }
};
