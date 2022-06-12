#include <iostream>

using namespace std;

template<typename T>
T maxn(T *arr, const int size){
  if(!size){
    return -1;
  }
  T max = arr[0];
  for(int i = 0; i <size; ++i){
    max = max > arr[i] ? max: arr[i];
  }
  return max;
}

template<>
char *maxn(char **arr, const int size){
  if(!size){
    return "";
  }
  int max_length = -1;
  char *max;
  for(int i =0; i <size; ++i){
    int tmp_length =0;
    char *tmp_ptr = arr[i];
    while(*tmp_ptr){
      tmp_length++;
      tmp_ptr++;
    }
    if(tmp_length>max_length){
      max = arr[i];
      max_length = tmp_length;
    }
  }
  return max;
}

int main(){
  int arri[8] = {1,4,2,7,9,10,4,3};
  double arrd[5] = {324.324, 333.454, 1343.7657, 34.054, 8678.32};
  char *arrc[3] = {"There is a dog", "I'm handsome", "HIHI"};
  cout<<maxn(arri, 8)<<endl;
  cout<<maxn(arrd, 5)<<endl;
  cout<<maxn(arrc, 3)<<endl;
  return 0;
}
