#include <iostream>
#include <array>

const int ArrSize = 101;

int main(){
  using namespace std;
  array<long double, ArrSize> factorials;
  factorials[0]  = factorials[1] = 1L;
  for(int i = 2; i< ArrSize; ++i){
    factorials[i] = i * factorials[i-1];
  }
  for(int i = 0; i< ArrSize; ++i){
    cout<<i<<"! = "<<factorials[i]<<endl;
  }
  return 0;
}
