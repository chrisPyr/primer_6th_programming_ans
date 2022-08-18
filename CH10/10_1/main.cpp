#include <iostream>
#include "bankaccount.h"


int main(){
  using namespace std;

  BankAccount acc("Chris", "1234", 100000000);

  acc.display();
  acc.deposit(500);
  acc.withdraw(500);
  acc.withdraw(1000000000);
  return 0;
}
