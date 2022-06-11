#include <iostream>
using namespace std;


void show(const char *str, int times = 0){
  static int cnt = 0;
  if(!times){
    cout<<str<<endl;
  }else{
    for(int i = 0 ;i < cnt; ++i){
      cout<<str<<endl;
    }
  }
  cnt++;
  return;
}

int main(){
  show("Eric", 1);
  show("Eric");
  show("Eric");
  show("Eric", 1);


  return 0;
}
