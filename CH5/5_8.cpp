#include <iostream>
#include <cstring>

using namespace std;

int main(){
  int cnt =0 ;
  char input[20];
  cout<<"Enter words(type done to stop):\n";
  cin>>input;
  while(strcmp(input,"done")){
    ++cnt;
    cin>>input;
  }

  cout<<"You entered a total of "<<cnt<<" words\n";

  return 0;
}
