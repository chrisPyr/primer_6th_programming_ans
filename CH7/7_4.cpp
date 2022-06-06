#include <iostream>
long double probability(unsigned numbers, unsigned picks);

using namespace std;
int main() {
  double total, choices, choice_of_mega, mega_num;
  cout << "Enter the total number of choices on the game card and\n"
          "the number of picks allowed:\n"
          "And also the number of choices of a mega number\n";
  while ((cin >> total >> choices) && choices <= total) {
    cout<<"Enter the number of choices on the mega number and\n"
          "the number of picks allowed:\n";
    if((cin>>mega_num>>choice_of_mega) && choice_of_mega<=mega_num){
      cout << "You have one chance in ";
      cout << probability(total, choices) * probability(mega_num, choice_of_mega);
      cout << " of winning.\n";
    }
    cout << "Next two numbers (q to quit): ";

  }
  cout << "bye\n";
  return 0;
}

long double probability(unsigned numbers, unsigned picks) {
  long double result = 1.0; // here come some local variables long double n;
  unsigned n, p;
  for (n = numbers, p = picks; p > 0; n--, p--)
    result = result * n / p;
  return result;
}
