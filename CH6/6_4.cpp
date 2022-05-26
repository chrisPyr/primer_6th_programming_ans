#include <iostream>

using namespace std;
const int strsize = 20;
const int arrsize = 3;

struct bop{
  char fullname[strsize];
  char title[strsize];
  char bopname[strsize];
  int preference; // 0 for fullname, 1 for title, 2 for bopname
};


bop members[arrsize] = {{"zyyang","master","chris",2}, {"yyzhong","master","Eric",0}, {"jshong","CTO","God",1}};



int main(){


  cout<<"Benevolent Order of Programmers Report\n"
        "a) display by name     b) display by title\n"
        "c) display by bopname  d) display by preference\n"
        "q) quit\n";
  char choice;
  while(cin>>choice && choice != 'q'){
    switch(choice){
      case 'a':
        for(int i = 0; i < arrsize; ++i){
          cout<<members[i].fullname<<endl;
        }
        break;
      case 'b':
        for(int i = 0; i < arrsize; ++i){
          cout<<members[i].title<<endl;
        }
        break;
      case 'c':
        for(int i = 0; i < arrsize; ++i){
          cout<<members[i].bopname<<endl;
        }
        break;
      case 'd':
        for(int i = 0; i < arrsize; ++i){
          switch(members[i].preference){
            case 0:
              cout<<members[i].fullname<<endl;
              break;
            case 1:
              cout<<members[i].title<<endl;
              break;
            case 2:
              cout<<members[i].bopname<<endl;
              break;
          }
        }
        break;
      default:
        cout<<"Please enter a a, b, c, d, or q\n";
    }
    cout<<"Enter next choice:";
  }


  return 0;
}
