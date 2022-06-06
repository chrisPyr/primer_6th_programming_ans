#include <iostream>

using namespace std;

double calculate(double x, double y, double (*method)(double , double )){
  return method(x,y);
}

double add(double x, double y){
  return x+y;
}
double sub(double x, double y){
  return x-y;
}
double multiply(double x, double y){
  return x*y;
}

int main(){
  cout<<"Enter pairs of numbers(non-numeric to quit)\n";
  double x,y;
  double (*ar[3])(double , double ) = {add,sub,multiply};
  while(cin>>x>>y){
    for(int i = 0; i< 3; ++i){
      switch(i){
        case 0:
          cout<<"add: "<<calculate(x,y,ar[0])<<endl;
          break;
        case 1:
          cout<<"sub: "<<calculate(x,y,ar[1])<<endl;
          break;
        case 2:
          cout<<"multiply: "<<calculate(x,y,ar[2])<<endl;
          break;
      };
    }

  }
  return 0;
}
