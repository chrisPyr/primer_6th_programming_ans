#include <iostream>

const int max_num = 10;

int main(){
  using namespace std;
  double arr[max_num];
  int i = 0;
  double sum = 0;
  cout<<"Please enter double type valuse(up to 10 items)\n";
  while(i<max_num && cin>>arr[i]){
    sum+=arr[i];
    ++i;
  }

  if(i!=0){
    double avg = sum/i;
    int ab_avg_num = 0;
    for(int k = 0; k<i;++k){
      if(arr[k] > avg){
        ab_avg_num++;
      }
    }
    cout<<"Avg is: "<<avg<<endl;
    cout<<ab_avg_num<<" number(s) is/are greater than avg\n";
  }else{
    cout<<"No data\n";
  }

  return 0;
}
