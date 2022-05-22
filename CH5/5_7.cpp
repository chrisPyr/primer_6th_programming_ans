#include <iostream>
#include <string>

using namespace std;
struct car{
  string name;
  int year;
};

int main(){
  int num_of_car;
  cout<<"How many car do you want to catalog?";
  cin>>num_of_car;
  car cars[num_of_car];
  for(int i =0; i<num_of_car;++i){
    cout<<"Car #"<<(i+1)<<":\n";
    cout<<"Please enter the make:";
    cin>>cars[i].name;
    cout<<"Please enter the year made:";
    cin>>cars[i].year;
  }
    cout<<"Here is your collection:\n";
  for(int i =0; i <num_of_car;++i){
    cout<<cars[i].year<<" "<<cars[i].name<<endl;;

  }

  return 0;
}
