#include <iostream>

using namespace std;
struct CandyBar{
  char name[50];
  double weight;
  int calories;
};


void setBar(CandyBar &bar, const char *name = "Millennium Munch", double wei = 2.85, int cal = 350){
  strcpy(bar.name, name);
  bar.weight = wei;
  bar.calories = cal;
  return;
}

void display(const CandyBar &bar){
  cout<<"Name: "<<bar.name<<endl;
  cout<<"Weight: "<<bar.weight<<endl;
  cout<<"Calories: "<<bar.calories<<endl;
  return;
}

int main(){
  CandyBar newbar;
  setBar(newbar);
  display(newbar);
  setBar(newbar, "Churos",150.3, 500);
  display(newbar);

  return 0;
}
