#include <iostream>

using namespace std;
const int ARR_SIZE = 10;

int InputScore(double *scr){
  double input;
  int i;
  for(i = 0; i<ARR_SIZE && cin>>input; ++i){
    scr[i] = input;
  }
  return i;
}

void Display(const double *scr, const int size){
  for(int i = 0; i<size; ++i){
    cout<<scr[i]<<" ";
  }
  cout<<endl;
  return;
}

void Mean(const double *scr, const int size){
  double sum = 0;
  for(int i = 0; i<size; ++i){
    sum+=scr[i];
  }
  cout<<"The mean of scores is: "<< sum/size<<endl;

}

int main(){
  double scr[ARR_SIZE];
  int size;
  cout<<"Enter up to 10 golf scores(enter non-numeric to quit)\n";
  size = InputScore(scr);
  Display(scr, size);
  Mean(scr, size);
  return 0;
}
