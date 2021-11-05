#include <iostream>

int main() {
  using namespace std;

  double euro_gas;
  cout << "Enter the gasoline consumption in European style(liters/100 "
          "kilometers): ";
  cin >> euro_gas;
  const float liter_to_gallon = 3.785412;
  const float km100_to_miles = 62.14;
  const double us_gas = 1 / (euro_gas / km100_to_miles / liter_to_gallon);
  cout << "After convert: " << us_gas << " miles/gallons\n";
  return 0;
}
