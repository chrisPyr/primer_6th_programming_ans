#include <iostream>

using namespace std;

double HarmonicMean(const double x, const double y);

int main(){
  cout<<"Enter pair of numbers(a pair of 0 to exit)\n";
  double x,y;
  while(cin>>x>>y && (x || y)){
    double mean = HarmonicMean(x,y);
    cout<<"Harmonic Mean of this pair is: "<<mean<<endl;
  }
  return 0;
}

double HarmonicMean(const double x, const double y){
  return 2*x*y/(x+y);
}
