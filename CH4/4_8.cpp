#include <iostream>
#include <string>
#include <memory>


using namespace std;

struct pizza{
  string name_company;
  float diameter;
  float weight;
};


int main(){
  unique_ptr<pizza> new_pizza = make_unique<pizza>();

  cout<<"Enter diameter:";
  cin>>(*new_pizza).diameter;
  cin.get();
  cout<<"Enter company name:";
  getline(cin, (*new_pizza).name_company);
  cout<<"Enter weight: ";
  cin>>(*new_pizza).weight;

  cout<<"Info of the new pizza:" \
      <<"\nName of company: "<< (*new_pizza).name_company \
      <<"\nDiameter: "<< (*new_pizza).diameter \
      <<"\nWeight: "<< (*new_pizza).weight \
      <<endl;


  return 0;
}

