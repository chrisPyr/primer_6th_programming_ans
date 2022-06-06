#include <iostream>

const int Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct expense{
  double arr[Seasons];
};

void fill1(double *pa);
void fill2(expense *pa);
void show1(const double *da);
void show2(expense da);

using namespace std;

int main(){
  double expenses[Seasons];
  fill1(expenses);
  show1(expenses);

  expense exp;
  fill2(&exp);
  show2(exp);

  return 0;
}

void fill1(double *pa){
  for(int i = 0; i< Seasons; ++i){
    cout<<"Enter "<<Snames[i]<<" expenses: ";
    cin>>pa[i];
  }
}

void fill2(expense *pa){
  for(int i = 0; i< Seasons; ++i){
    cout<<"Enter "<<Snames[i]<<" expenses: ";
    cin>>pa->arr[i];
  }
}

void show1(const double *da){
  double total = 0.0;
  cout<<"\nEXPENSES\n";
  for(int i = 0; i< Seasons; ++i){
    cout<<Snames[i]<<" :$"<<da[i]<<endl;
    total+=da[i];
  }
  cout<<"Total Expenses: $"<< total<<endl;
}

void show2(expense da){
  double total = 0.0;
  cout<<"\nEXPENSES\n";
  for(int i = 0; i< Seasons; ++i){
    cout<<Snames[i]<<" :$"<<da.arr[i]<<endl;
    total+=da.arr[i];
  }
  cout<<"Total Expenses: $"<< total<<endl;
}
