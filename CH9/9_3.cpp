#include <iostream>
#include <new>
#include <cstring>

using namespace std;

struct chaff{
  char dross[20];
  int slag;
};

int main(){
  char buffer[512];
  chaff *p1 = new (buffer) chaff[2];
  strcpy(p1[0].dross, "chris");
  p1[0].slag = 1;
  strcpy(p1[1].dross, "Takeda");
  p1[1].slag = 2;
  for(int i = 0; i<2;++i){
    cout<<p1[i].dross<<" "<<p1[i].slag<<endl;
  }

  return 0;
}
