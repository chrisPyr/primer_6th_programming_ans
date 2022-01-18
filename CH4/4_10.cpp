#include <iostream>
#include <array>

using namespace std;

int main(){
  array<float,3> records;

  cout<<"Enter 3 times of 40-meter dash: ";
  cin>>records[0]>>records[1]>>records[2];

  cout<<"1 time: "<< records[0] \
      <<"\n2 time: "<< records[1] \
      <<"\n3 time: "<< records[2] \
      <<"\nAverage time: " << (records.at(0)+records.at(1)+records.at(2))/3 \
      <<endl;

  return 0;
}
