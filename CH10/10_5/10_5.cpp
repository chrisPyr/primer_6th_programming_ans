#include "Stack.h"
#include <iostream>
#include <cctype>

using namespace std;
int main(){
  Customer cus;
  char input;
  Stack st;
  double total = 0;
  cout<<"Enter A(a) to add a new customer\n "
        "Enter P(p) to pop a custimer\n"
        "Enter Q(q) to quit\n";
  while(cin >> input && toupper(input) != 'Q'){
    while(cin.get() != '\n'){}
    switch(input){
      case 'A':
      case 'a':
        cout<< "Enter name of customer: ";
        double payment;
        cin.get(cus.fullname, 35);
        while(cin.get() != '\n'){}
        cout<< "Enter payment of customer: ";
        cin>>cus.payment;
        if(!st.push(cus)){
          cout<<"Stack already full!\n";
        }
        break;
      case 'P':
      case 'p':
        if(!st.pop(cus)){
          cout<<"Stack is empty!\n";
        }else{
          total += cus.payment;
          cout<<"Total of payment is: "<<total<<endl;
        }
        break;
    }
    cout<<"Enter A(a) to add a new customer\n "
          "Enter P(p) to pop a custimer\n"
          "Enter Q(q) to quit\n";

  }
  cout<<"Bye!\n";
  return 0;
}
