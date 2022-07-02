#include "sales.h"
#include <iostream>
#include <cfloat>
#include <algorithm>

using namespace std;

namespace SALES{
void setSales(Sales &s, const double ar[], int n){
  int size = min(QUARTERS, n);
  s.max = ar[0];
  s.min = ar[0];
  double sum = 0;
  for(int i = 0; i<size; ++i){
    s.sales[i] = ar[i];
    s.max = max(s.max, ar[i]);
    s.min = min(s.min, ar[i]);
    sum+=ar[i];
  }
  for(int i = size; i<4; ++i){
    s.sales[i] = 0;
  }
  s.average = sum/size;
  return;
}

void setSales(Sales &s){
  int size;
  cout<<"Please enter the number of sales(<=4):";
  cin>>size;
  double sum = 0;
  s.max = DBL_MIN;
  s.min = DBL_MAX;
  for(int i = 0; i<size; ++i){
    cout<<"Please enter the value of sale #"<<(i+1)<<":";
    cin>>s.sales[i];
    s.max = max(s.max, s.sales[i]);
    s.min = min(s.min, s.sales[i]);
    sum+=s.sales[i];
  }
  for(int i = size; i<4; ++i){
    s.sales[i] = 0;
  }
  s.average = sum/size;
  return;
}

void showSales(const Sales &s){
  for(int i = 0; i<QUARTERS; ++i){
    cout<<"Sales #"<<(i+1)<<": "<<s.sales[i]<<endl;
  }
  cout<<"Average Sales: "<<s.average<<endl;
  cout<<"Maximum Sales: "<<s.max<<endl;
  cout<<"Minimum Sales: "<<s.min<<endl;
  return;
}
}
