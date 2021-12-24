#include <iostream>
#include <vector>
#include <array>


int main(){
  using namespace std;
  const int array_size = 20;
  string name, dessert;

  cout<<"Enter your name:\n";
  getline(cin,name);
  cout<<"Enter your favorite dessert:\n";
  getline(cin, dessert);
  cout<<"I have some delicious "<<dessert<<" for you, "<<name<<endl;

  return 0;
}
