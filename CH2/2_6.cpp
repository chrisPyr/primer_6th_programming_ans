#include <iostream>

double lightYaerToAU(double ly) { return ly * 63240; }
int main() {
  using namespace std;
  cout << "Enter the number of light years:";
  double light_year;
  cin >> light_year;
  cout << light_year << " light years = " << lightYaerToAU(light_year)
       << " astronomical units\n";

  return 0;
}
