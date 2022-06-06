#include <iostream>

using namespace std;

int FillArray(double *arr, const int size){
  double input;
  int i;
  cout<<"Enter at most "<<size<<" numbers(non-numeric to quit)\n";
  for(i = 0; i < size && cin>>input; ++i){
    arr[i] = input;
  }
  return i;
}

void ShowArray(const double *arr, const int size){
  for(int i = 0; i<size; ++i){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void ReverseArray(double *arr, const int size){
  for(int i = 0, j =size-1; i < j ; ++i, --j){
    double tmp = *(arr+i);
    *(arr+i) = *(arr+j);
    *(arr+j) = tmp;
  }
}
int main(){
  double arr[10];
  int size;
  size = FillArray(arr, 10);
  ShowArray(arr,size);
  ReverseArray(arr,size);
  ShowArray(arr,size);
  ReverseArray(arr+1, size-2);
  ShowArray(arr,size);
  return 0;
}
