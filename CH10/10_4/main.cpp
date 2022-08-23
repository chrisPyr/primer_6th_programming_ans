#include "sales.h"
#include <iostream>

using namespace std;
int main(){
  using namespace SALES;
  Sales s2;
  double s_arr[3] = {50,100,90};
  Sales s1(s_arr, 3);
  s1.showSales();
  s2.setSales();
  s2.showSales();


  return 0;
}
