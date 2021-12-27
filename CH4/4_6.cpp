#include <iostream>
#include <string>

using namespace std;

struct CandyBar{
  string name;
  float weight;
  size_t calorie;
};

int main(){
  CandyBar snacks[3] = { {"chocolate", 1.5, 300}, {"Gummy Bear", 3.2, 350}, {"Candy", 0.5, 150} };

  for (auto &x:snacks){
    cout<<x.name<<" "<<x.weight<<" "<<x.calorie<<endl;
  }
  return 0;
}
