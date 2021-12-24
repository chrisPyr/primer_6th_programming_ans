#include <iostream>
#include <vector>
#include <array>
#include <cstring>

int main(){
  using namespace std;
  char first_name[80];
  char last_name[80];
  cout<<"Enter your first name: ";
  cin.getline(first_name,80);
  cout<<"Enter your last name: ";
  cin.getline(last_name,80);
  char full_name[strlen(first_name)+strlen(last_name)+3];
  strncpy(full_name, last_name, sizeof(full_name) - strlen(last_name) - 1);
  strncat(full_name,", ",2);
  strncat(full_name,first_name,sizeof(full_name) - strlen(first_name) - 1);
  cout<<"Here's the information in a single string: "<<full_name<<endl;

  return 0;
}
