#include <iostream>

using namespace std;
template<typename T>
void SumArray(T *arr, int n){
  cout<<"Sum of "<<n<<" things:";
  int sum = 0;
  for(int i = 0; i<n; ++i){
    sum+=arr[i];
  }
  cout<<sum<<endl;
  return;
}

template<typename T>
void SumArray(T *arr[], int n){
  cout<<"Sum of "<<n<<" debts: ";
  double sum = 0.0;
  for(int i =0; i<n; ++i){
    sum+=*(arr[i]);
  }
  cout<<sum<<endl;
  return;
}

struct debts{
  char name[50];
  double amount;
};

int main(){
  int things[6] = {13, 31, 103, 301, 310, 130};
  debts mr_E[3] = {
    {"Ima Wolfe", 2400.0},
    {"Ura Foxe", 1300.0},
    {"Iby Stout", 1800.0}
  };

  double *pd[3];
  for(int i = 0;i <3; ++i){
    pd[i] = &mr_E[i].amount;
  }

  cout<<"Show sum of Mr.E's things\n";
  SumArray(things, 6);
  cout<<"Sum of Mr.E's debts:\n";
  SumArray(pd, 3);
  return 0;
}
