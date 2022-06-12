#include <iostream>
#include <cstring>

using namespace std;

struct stringy{
  char *str;
  int ct;
};

void set(stringy &str, const char *cp){
  int cnt = strlen(cp);
  str.str = new char[cnt+1];
  str.ct = cnt;
  strcpy(str.str, cp);
  return;
}

void show(const stringy &x, const int times = 1){
  for(int i = 0; i<times; ++i){
    cout<<x.str<<endl;
  }
  return;
}
void show(const char *str, const int times = 1){
  for(int i = 0; i<times; ++i){
    cout<<str<<endl;
  }
  return;
}

int main(){
  stringy beany;
  char testing[]="Reality isn't what it used to be.";
  set(beany, testing);
  show(beany);
  show(beany,2);
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);
  show(testing,3);
  show("Done!");
  delete [] beany.str; // Remember to free memory!!


  return 0;
}
