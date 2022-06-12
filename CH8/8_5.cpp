#include <iostream>

using namespace std;

template<typename T>
T max5(T *arr){
  T max = arr[0];
  for(int i =1; i <5; ++i){
    max = max>arr[i] ? max : arr[i];
  }
  return max;
}

int main(){
  int arr[5] = {45,100,400,1343,33};
  double arrd[5] = {98.33, 32.13, 99454.32432, 33.33, 3.22};
  cout<<max5(arr)<<endl;
  cout<<max5(arrd)<<endl;


  return 0;
}
