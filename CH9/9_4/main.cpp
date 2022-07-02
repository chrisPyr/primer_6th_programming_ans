#include "sales.h"
#include <iostream>

using namespace std;
int main(){
  using namespace SALES;
  Sales s1;
  Sales s2;
  double s_arr[3] = {50,100,90};
  setSales(s1, s_arr, 3);
  showSales(s1);
  setSales(s2);
  showSales(s2);


  return 0;
}
