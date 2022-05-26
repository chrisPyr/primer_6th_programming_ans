#include <iostream>

using namespace std;

int main(){
  int income;
  double tax;
  cout<<"Please enter your income(enter non-numeric or negative to quit):";
  while(cin>>income && (income>=0)){
    if(income<=5000){
      tax = 0;
    }else if(income>5000 && income<=15000){
      tax = (income-5000) * 0.1;
    }else if(income>15000 && income<=35000){
      tax = 10000 * 0.1 + (income-15000) * 0.15;
    }else{
      tax = 10000 * 0.1 + 20000 * 0.15 + (income - 35000)*0.2;
    }
    cout<<"The tax is: "<<tax<<endl;
    cout<<"Next:";

  }


  return 0;
}
