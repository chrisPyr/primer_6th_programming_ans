#include <iostream>
#include <string>

const int month = 12;

int main(){
  using namespace std;

  const string mon[month] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  int sales[month];
  cout<<"Enter sales of \"C++ for fools\" per month\n";
  int sum = 0;
  for(int i = 0; i< month; ++i){
    cout<<mon[i]<<": ";
    cin>>sales[i];
    sum+=sales[i];
    cout<<endl;
  }

  cout<<"Total Sales: "<<sum<<endl;
  return 0;
}
