#include <iostream>

using namespace std;

const int Max = 5;
double *fill_array(double *beg_arr, double *end_arr);
void show_array(double *beg_arr, double *end_arr);
void revalue(double r, double *beg_arr, double *end_arr);

int main() {
  double properties[Max];
  double *last_of_arr = fill_array(properties, properties + Max);
  show_array(properties, last_of_arr);
  if (last_of_arr != properties) {
    cout << "Enter revaluation factor: ";
    double factor;
    while (!(cin >> factor)) {
      cin.clear();
      while (cin.get() != '\n')
        continue;
      cout << "Bad input; Please enter a number: ";
    }
    revalue(factor, properties, last_of_arr);
    show_array(properties, last_of_arr);
  }
  cout << "Done.\n";
  cin.get();
  cin.get();
  return 0;
}

double *fill_array(double *beg_arr, double *end_arr) {
  double temp;
  double *ptr;
  int i;
  for (i = 0, ptr = beg_arr; ptr != end_arr; ++ptr, ++i) {
    cout << "Enter value #" << (i + 1) << ": ";
    cin >> temp;
    if (!cin) {
      cin.clear();
      while (cin.get() != '\n') {
        continue;
      }
      cout << "Bad input! Input process terminated\n";
      break;
    } else if (temp < 0) {
      break;
    }
    *ptr = temp;
  }
  return ptr;
}

void show_array(double *beg_arr, double *end_arr) {
  int i;
  double *ptr;
  for (i = 0, ptr = beg_arr; ptr != end_arr; ++i, ++ptr) {
    cout << "Property #" << (i + 1) << ": $";
    cout << *ptr << endl;
  }
}

void revalue(double r, double *beg_arr, double *end_arr) {
  for (double *ptr = beg_arr; ptr != end_arr; ++ptr) {
    (*ptr) *= r;
  }
}
