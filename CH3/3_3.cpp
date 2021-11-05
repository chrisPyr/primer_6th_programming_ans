#include <iostream>

int main() {
  using namespace std;

  const int sec_to_minute = 60;
  const int min_to_degree = 60;
  int degrees, minutes, seconds;
  cout << "Enter a latitude in degrees, minutes, and seconds:\n";
  cout << "First, enter the degrees:";
  cin >> degrees;
  cout << "Next, enter the minutes of arc:";
  cin >> minutes;
  cout << "Finally, enter the seconds of arc:";
  cin >> seconds;
  cout << degrees << " degrees, " << minutes << " minutes, " << seconds
       << " seconds = "
       << degrees + (minutes + double(seconds) / sec_to_minute) / min_to_degree
       << " degrees" << endl;
}
