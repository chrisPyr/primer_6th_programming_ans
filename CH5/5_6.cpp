#include <iostream>
#include <string>

const int month = 12;
const int years = 3;

int main(){
  using namespace std;

  const string mon[month] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  int sales[years][month];
  cout<<"Enter sales of \"C++ for fools\" per month\n";
  int annual_sum[years] = {0};
  int total_sum = 0;

  for(int i = 0; i< years; ++i){
    for(int j = 0; j<month; ++j){
      cout<<"Year "<<(i+1)<<" "<<mon[j]<<": ";
      cin>>sales[i][j];
      annual_sum[i] += sales[i][j];
    }
    total_sum+=annual_sum[i];
  }

  for(int i = 0;i<years; ++i){
    cout<<"Year "<<(i+1)<<" Sum: "<<annual_sum[i]<<endl;
  }

  cout<<"Total Sales: "<<total_sum<<endl;
  return 0;
}
