#include <iostream>

int main() {
  using namespace std;
  long long int total_secs;
  cout << "Enter the number of seconds: ";
  cin >> total_secs;
  const int days = total_secs / 60 / 60 / 24;
  const int hrs = (total_secs / 60 / 60) % 24;
  const int mins = (total_secs / 60) % 60;
  const int secs = total_secs % 60;
  cout << total_secs << " = " << days << " days " << hrs << " hours " << mins
       << " minutes " << secs << " seconds " << endl;
  return 0;
}
