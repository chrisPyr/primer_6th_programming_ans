#include <iostream>
#include <cctype>

int main(){
  using namespace std;
  char ch;
  while(cin>>ch && ch != '@'){
    if(isdigit(ch)){
      continue;
    }else if(isalpha(ch)){
      if(isupper(ch)){
        cout<<char(tolower(ch));
      }else{
        cout<<char(toupper(ch));
      }
    }else{
      cout<<ch;
    }
  }
  return 0;
}
