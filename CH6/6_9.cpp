#include <iostream>
#include <string>
#include <fstream>

using namespace std;


struct donor{
  string name;
  double donation;
};

int main(){
  int num_of_donors;
  int cnt = 0;
  ifstream fin;
  fin.open("6_9.txt");
  if(fin.is_open()){
    fin>>num_of_donors;
    donor donors[num_of_donors];
    for(int i = 0; i<num_of_donors; ++i){
      fin>>donors[i].name;
      fin>>donors[i].donation;
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

    fin.close(); //Remember to close file
  }else{
    cout<<"Cannot open file \"6_9.txt\"\n";
  }
  return 0;
}
