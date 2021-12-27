#include <iostream>
#include <string>
using namespace std;
struct CandyBar{
  string name;
  float weight;
  int calorie;
};
int main(){
  CandyBar snack = {"Mocha Munch", 2.3, 350};

  cout<<snack.name<<" "<<snack.weight<<" "<<snack.calorie<<endl;

  return 0;
}
