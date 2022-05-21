#include <iostream>


int main(){
  using namespace std;

  double DapOrg = 100, CleoOrg = 100;
  double DapInt = 0.1, CleoInt = 0.05;
  double DapCur = DapOrg, CleoCur = CleoOrg;
  while( (DapCur+=(DapOrg * DapInt)) > (CleoCur*=(1+CleoInt))){
  }
  cout<<"Dap:"<<DapCur<<" Cleo:"<<CleoCur<<endl;
  return 0;
}
