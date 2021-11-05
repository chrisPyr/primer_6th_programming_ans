#include <iostream>

int main() {
  using namespace std;
  long long int world_p;
  long long int US_p;
  cout << "Enter the world's population: ";
  cin >> world_p;
  cout << "Enter the population of US: ";
  cin >> US_p;
  cout << "The population of US is " << (double(US_p) / world_p) * 100
       << "\% of the world population\n";
  return 0;
}
