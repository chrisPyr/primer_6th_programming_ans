#include <iostream>
#include <array>
#include <vector>
#include <string>

int main(){
  using namespace std;
  string first_name, last_name;
  cout<<"Enter your first name: ";
  cin>>first_name;
  cout<<"Enter your last name: ";
  cin>>last_name;
  cout<<"Here's the information in a single string: " \
      <<(last_name+", "+first_name)<<endl;
  return 0;
}
