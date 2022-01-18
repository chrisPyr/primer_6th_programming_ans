#include <iostream>
#include <string>

using namespace std;

struct pizza{
  string name_company;
  float diameter;
  float weight;
};


int main(){
  cout<<"Enter the company name\n";
  pizza new_pizza;
  getline(cin, new_pizza.name_company);
  cout<<"Enter the diameter\n";
  cin>>new_pizza.diameter;
  cout<<"Enter the weight\n";
  cin>>new_pizza.weight;

  cout<<"The pizza info:" \
      <<"\nName: "<<new_pizza.name_company \
      <<"\nDiameter: "<<new_pizza.diameter \
      <<"\nWeight: "<<new_pizza.weight \
      <<endl;

  return 0;
}
