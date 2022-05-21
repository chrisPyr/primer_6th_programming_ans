#include <iostream>

int main(){
  using namespace std;
  cout<<"Enter 2 integers, smaller one needed to been entered first\n";
  int x,y;
  cin>>x>>y;
  int sum = 0;
  for(int i = x; i<=y; ++i){
    sum+=i;
  }
  cout<<"The sum between is:"<<sum<<endl;

  return 0;
}
