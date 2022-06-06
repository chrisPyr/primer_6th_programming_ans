#include <iostream>

using namespace std;
struct box{
  char make[40];
  float height;
  float width;
  float length;
  float volume;
};

void Display(box x){
  cout<<"Name: "<<x.make<<endl;
  cout<<"Height: "<<x.height<<endl;
  cout<<"Width: "<<x.width<<endl;
  cout<<"Length: "<<x.length<<endl;
  cout<<"Volume: "<<x.volume<<endl;
  return;
}

void CalVolume(box *x){
  x->volume = x->height * x->width * x->length;
  return;
}

int main(){
  box var = {"Chris", 2, 3, 5, 0};
  CalVolume(&var);
  Display(var);


  return 0;
}
