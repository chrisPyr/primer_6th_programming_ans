#include <iostream>
#include <string>

using namespace std;

int main(){
  int cnt =0 ;
  string input;
  cout<<"Enter words(type done to stop):\n";
  cin>>input;
  while(input != "done"){
    ++cnt;
    cin>>input;
  }

  cout<<"You entered a total of "<<cnt<<" words\n";

  return 0;
}
