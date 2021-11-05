#include <iostream>

int main() {
  using namespace std;
  const float inch_to_meter = 0.0254; // convert factor
  const float pound_to_kilog = 2.2;   // convert factor

  double height, weight;
  cout << "Please enter your height in inches and weight in pounds:" << endl;
  cin >> height >> weight;
  const double height_in_meter = height * inch_to_meter;
  const double weight_in_kilog = weight / pound_to_kilog;
  auto square = [](double x) -> double { return x * x; }; // lambda function
  cout << "Your BMI is " << weight_in_kilog / square(height_in_meter) << endl;

  return 0;
}
