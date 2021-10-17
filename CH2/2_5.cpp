#include <iostream>

using namespace std;

double CtoF(double Cel) { return Cel * 1.8 + 32; }

int main() {
  cout << "Please enter a Celsius value:";
  double cel;
  cin >> cel;
  cout << cel << " degrees Celsius is " << CtoF(cel) << " degrees Fahrenheit\n";
  return 0;
}
