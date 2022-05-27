#include <iostream>
#include <string>

using namespace std;


struct donor{
  string name;
  double donation;
};

int main(){
  int num_of_donors;
  int cnt = 0;
  cout<<"Please enter the number of donors:\n";
  cin>>num_of_donors;
  donor donors[num_of_donors];
  cout<<"Please enter name and donation\n";
  for(int i = 0; i<num_of_donors; ++i){
    cout<<"Name:";
    cin>>donors[i].name;
    cout<<"Donation:";
    cin>>donors[i].donation;
  }
  cout<<"Grand Patrons:\n";
  for(int i = 0; i<num_of_donors; ++i){
    if(donors[i].donation>=10000){
      cout<<donors[i].name<<" "<<donors[i].donation<<endl;
      cnt++;
    }
  }
  if(0 == cnt){
    cout<<"None\n";
  }
  cout<<"Patrons:\n";
  if(cnt == num_of_donors){
    cout<<"None\n";
  }else{
    for(int i = 0; i<num_of_donors; ++i){
      if(donors[i].donation<10000){
        cout<<donors[i].name<<" "<<donors[i].donation<<endl;
      }
    }
  }

  return 0;
}
