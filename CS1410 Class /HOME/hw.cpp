#include <iostream>
using namespace std;

class Account
{
private:
  double account_balance;

public:
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

  inline void credit(double amount_to_add)
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

protected:
  double getBalance() const
  {
    return account_balance;
  }
};

class SavingsAccount : public Account
{
private:
  double interest_rate;

public:
  SavingsAccount(double initial_balance, double interest_rate) : Account(initial_balance)
  {
    this->interest_rate = interest_rate; // Corrected
  }

  double calculateInterest() const
  {
    return getBalance() * (interest_rate / 100);
  }
};

class CheckingAccount : public Account
{
private:
  double fee;

public:
  CheckingAccount(double initial_balance, double fee_amount) : Account(initial_balance)
  {
    fee = fee_amount;
  }

  void credit(double amount_to_add)
  {
    Account::credit(amount_to_add);
    account_balance -= fee; // Subtract transaction fee
  }

  bool debit(double amount_to_withdraw)
  {
    bool success = Account::debit(amount_to_withdraw);
    if (success)
    {
      account_balance -= fee; // Subtract transaction fee if debit is successful
    }
    return success;
  }
};

int main()
{
  SavingsAccount savings(100.0, 5.0);   // Initial balance of 100, interest rate of 5%
  CheckingAccount checking(100.0, 2.0); // Initial balance of 100, transaction fee of 2

  cout << "Initial Savings Account balance: $" << savings.getBalance() << endl;
  double interest = savings.calculateInterest();
  savings.credit(interest); // Adding interest to the balance
  cout << "Savings Account balance after interest: $" << savings.getBalance() << endl;

  cout << "Initial Checking Account balance: $" << checking.getBalance() << endl;
  checking.credit(50.0); // Deposit with fee
  cout << "Checking Account balance after credit: $" << checking.getBalance() << endl;
  checking.debit(30.0); // Withdraw with fee
  cout << "Checking Account balance after debit: $" << checking.getBalance() << endl;

  return 0;
}

// 7. user cannot enter negative number. It has to be done in constructor
// user has to ener the interest rate to constructor
// interest rate will be determined based on balance
// if you deposit or withdraw money, the fee will be detected
// fee will be detected when there is a successful transaction
// interest rate * current balance, add that into

// 8. use same hierarchy as Account, apply polymorphism, vector means array
// start with 5 members of array