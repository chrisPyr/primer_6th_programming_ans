#include <iostream>

using namespace std;

long long factorial(int n){
  if(n==1){
    return 1;
  }else{
    return n*factorial(n-1);
  }
}

int main(){

  int n;
  cout<<"Enter factorial number n(q to quit)\n";
  while(cin>>n){
    cout<<n<<"!= "<<factorial(n)<<endl;
  }

  return 0;
}
