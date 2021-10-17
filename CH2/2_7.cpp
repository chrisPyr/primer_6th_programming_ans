#include <iostream>

using namespace std;

void display(int hours, int mins) {
  cout << "Time: " << hours << ":" << mins << endl;
}
int main() {
  int hours, mins;
  cout << "Enter the number of hours:";
  cin >> hours;
  cout << "Enter the number of minutes:";
  cin >> mins;
  display(hours, mins);
  return 0;
}
