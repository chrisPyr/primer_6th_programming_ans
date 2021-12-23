#include <iostream>
#include <string>

int main(){
  using namespace std;
  cout<<"What's your first name? ";
  char first_name[80];
  cin.getline(first_name,80);
  cout<<"What's your last name? ";
  string last_name;
  cin>>last_name;
  cout<<"What letter grade do you deserve? ";
  char grade;
  cin>>grade;
  cout<<"What is your age? ";
  int age;
  cin>>age;
  cout<<"Name: "<<last_name<<", "<<first_name<<endl;
  cout<<"Grade: "<<char(grade+1)<<endl;
  cout<<"Age: "<<age<<endl;

  return 0;
}
