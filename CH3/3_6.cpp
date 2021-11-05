#include <iostream>

int main() {
  using namespace std;
  double miles, gallons;
  cout << "Enter how many miles you have driven: ";
  cin >> miles;
  cout << "Enter how many gallons of oil have been used: ";
  cin >> gallons;
  cout << "Your car gets " << miles / gallons << " miles per gallons\n";
  return 0;
}
