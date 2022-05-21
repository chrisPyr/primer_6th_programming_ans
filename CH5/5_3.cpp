#include <iostream>


int main(){
  using namespace std;

  cout<<"Type any numbers of interger(0 means end)\n";
  int input;
  int sum = 0;
  while(cin>>input && input != 0){
    cout<<"Current cumulative summation:";
    cout<<(sum+=input)<<endl;
  }


  return 0;
}
