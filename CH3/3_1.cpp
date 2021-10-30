#include <cstddef>
#include <iostream>

int main() {

  using namespace std;
  size_t height;
  const size_t convert_factor = 12; // 1 feet = 12 inches
  cout << "Please enter your height in inches:_____\b\b\b\b\b";
  cin >> height;
  cout << "\nYour height is in " << height / convert_factor << " feet "
       << height % convert_factor << " inches\n";

  return 0;
}
