#include <iostream>

using namespace std;

void showMenu(){
  cout<<"Please enter one of the following choices:\n"
        "c) carnivore           p) pianist\n"
        "t) tree                g) game\n";
  return;
}

int main(){
  showMenu();
  char choice;
  int flag = 0;
  while((!flag) && cin>>choice){
    switch(choice){
      case 'c':
        cout<<"You chose c\n";
        flag = 1;
        break;
      case 'p':
        cout<<"You chose p\n";
        flag = 1;
        break;
      case 't':
        cout<<"You chose t\n";
        flag = 1;
        break;
      case 'g':
        cout<<"You chose g\n";
        flag = 1;
        break;
      default:
        cout<<"Please enter a c,p,t, or g:";
    }
  }

  return 0;
}
