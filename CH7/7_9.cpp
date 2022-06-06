#include <iostream>

using namespace std;

const int SLEN = 30;
struct student {
  char fullname[SLEN];
  char hobby[SLEN];
  int ooplevel;
};
int getinfo(student pa[], int n){
  int i = 0;
  while(i<n){
    cout<<"Student #"<<(i+1)<<endl;
    cout<<"Full name: ";
    if(!(cin.get(pa[i].fullname, SLEN))){
      return i;
    }
    while(cin.get()!='\n'){
      continue;
    }
    cout<<"Hobby: ";
    cin.getline(pa[i].hobby, SLEN);
    cout<<"ooplevel: ";
    cin>>pa[i].ooplevel;
    cin.get();
    ++i;
  }
  return i;
}
// display1() takes a student structure as an argument // and displays its contents
void display1(student st){
  cout<<"Full Name: ";
  cout<<st.fullname<<endl;
  cout<<"Hobby: ";
  cout<<st.hobby<<endl;
  cout<<"ooplevel: ";
  cout<<st.ooplevel<<endl;
}
// display2() takes the address of student structure as an // argument and displays the structure’s contents
void display2(const student * ps){
  cout<<"Full name: ";
  cout<<ps->fullname<<endl;
  cout<<"Hobby: ";
  cout<<ps->hobby<<endl;
  cout<<"ooplevel: ";
  cout<<ps->ooplevel<<endl;
} // display3() takes the address of the first element of an array // of student structures and the number of array elements as
void display3(const student pa[], int n){
  for(int i = 0; i<n ;++i){
    cout<<"Full name: ";
    cout<<pa[i].fullname<<endl;
    cout<<"Hobby: ";
    cout<<pa[i].hobby<<endl;
    cout<<"ooplevel: ";
    cout<<pa[i].ooplevel<<endl;

  }
}
int main() {
  cout << "Enter class size: ";
  int class_size;
  cin >> class_size;
  while (cin.get() != '\n')
    continue;
  student * ptr_stu = new student[class_size]; 
  int entered = getinfo(ptr_stu, class_size); 
  for (int i = 0; i < entered; i++)
  {
    display1(ptr_stu[i]);
    display2(&ptr_stu[i]);
  }
  display3(ptr_stu, entered); 
  delete [] ptr_stu;
  cout << "Done\n";
  return 0;
}
