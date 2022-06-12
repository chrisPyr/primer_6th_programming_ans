#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

void convert(string &str){
  for(unsigned int i = 0; i <str.length();++i){
    str[i] = toupper(str[i]);
  }
  return;
}

int main(){

  string tmp;
  while(1){
    cout<<"Enter a string(q to quit): ";
    getline(cin, tmp);
    if(tmp == "q"){
      break;
    }
    convert(tmp);
    cout<<tmp<<endl;
  }
  return 0;

}

