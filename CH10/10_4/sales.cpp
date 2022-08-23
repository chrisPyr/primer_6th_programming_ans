#include "sales.h"
#include <iostream>
#include <cfloat>
#include <algorithm>

using namespace std;

namespace SALES{
  Sales::Sales(const double ar[], int n){
    int size = min(int(QUARTERS), n);
    m_max = ar[0];
    m_min = ar[0];
    double sum = 0;
    for(int i = 0; i<size; ++i){
      m_sales[i] = ar[i];
      m_max = max(m_max, ar[i]);
      m_min = min(m_min, ar[i]);
      sum+=ar[i];
    }
    for(int i = size; i<4; ++i){
      m_sales[i] = 0;
    }
    m_average = sum/size;
    return;
  }

  void Sales::setSales(){
    int size;
    double tmp_ar[QUARTERS];
    cout<<"Please enter the number of sales(<=4):";
    cin>>size;
    for(int i = 0; i<size; ++i){
      cout<<"Please enter the value of sale #"<<(i+1)<<":";
      cin>>tmp_ar[i];
    }
    for(int i = size; i<4; ++i){
      tmp_ar[i] = 0;
    }
    Sales tmp(tmp_ar, size);
    *this = tmp;
    return;
  }

  void Sales::showSales() const{
    for(int i = 0; i<QUARTERS; ++i){
      cout<<"Sales #"<<(i+1)<<": "<<m_sales[i]<<endl;
    }
    cout<<"Average Sales: "<<m_average<<endl;
    cout<<"Maximum Sales: "<<m_max<<endl;
    cout<<"Minimum Sales: "<<m_min<<endl;
    return;
  }
}
