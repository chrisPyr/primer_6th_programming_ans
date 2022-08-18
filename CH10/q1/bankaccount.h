#ifndef _BANKACCOUNT_H
#define _BANKACCOUNT_H

#include <cstring>
using namespace std;

class BankAccount{
  private:
    string m_name;
    string m_number;
    double m_balance;

  public:
    BankAccount(const string &name =  string(), const string &number = string(), double balance = 0);
    void display() const;
    void deposit(double money);
    void withdraw(double money);
};

#endif
