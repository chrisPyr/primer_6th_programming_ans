#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ifstream fin;
  fin.open("6_8.txt");
  int num = 0;
  char ch;
  if(fin.is_open()){
    while(fin.good() && fin>>ch){
      num++;
    }
    cout<<"There are "<<num<<" characters in this file\n";
  }else{
    cout<<"Cannot open file \"6_8.txt\"\n";
  }


  return 0;
}
