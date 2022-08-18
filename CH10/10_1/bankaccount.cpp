#include <iostream>
#include "bankaccount.h"


BankAccount::BankAccount(const string &name,const string &number, double balance): m_name(name), m_number(number), m_balance(balance){};

void BankAccount::display() const{
  cout<<"Depositor's name: "<<m_name<<endl;
  cout<<"Account number: "<<m_number<<endl;
  cout<<"balance: "<<m_balance<<endl;
  return ;
};

void BankAccount::deposit(double money){
  m_balance+=money;
  cout<<"Deposit success!\n";
  return;
};

void BankAccount::withdraw(double money){
  if(m_balance - money >= 0){
    m_balance-=money;
    cout<<"withdraw success!\n";
  }else{
    cout<<"You don't have enough money!!\n";
  }
  return ;
};
