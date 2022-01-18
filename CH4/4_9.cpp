#include <iostream>
#include <string>
#include <memory>

using namespace std;

struct CandyBar{
  string name;
  float weight;
  size_t calorie;
};

int main(){
  //CandyBar snacks[3] = { {"chocolate", 1.5, 300}, {"Gummy Bear", 3.2, 350}, {"Candy", 0.5, 150} };
  unique_ptr<CandyBar[]> snacks(new CandyBar[3]{{"chocolate", 1.5, 300}, {"Gummy Bear", 3.2, 350}, {"Candy", 0.5, 150}});

  for (int i = 0; i < 3; ++i){
    cout<<snacks[i].name<< " "<<snacks[i].weight<<" "<<snacks[i].calorie<<endl;
  }

  return 0;
}
