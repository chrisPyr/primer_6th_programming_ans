#include "golf.h"
#include <cstring>
#include <iostream>

golf::golf(const char *name, int hc){
  strncpy(m_fullname, name, Len-1);
  m_fullname[Len-1] = '\0';
  m_handicap = hc;
  return;
}

int golf::setgolf(){
  char name[Len];
  std::cout<<"Please enter name(empty name to exit): ";
  std::cin.getline(name, Len);
  if(*name == '\0'){
    return 0;
  }
  int hc;
  std::cout<<"Please enter handicap: ";
  std::cin>>hc;
  std::cin.get();
  *this = golf(name, hc);
  return 1;
}

void golf::handicap(int hc){
  m_handicap = hc;
  return;
}

void golf::showgolf() const {
  std::cout<<"Name: "<<m_fullname<<std::endl;
  std::cout<<"Handicap: "<<m_handicap<<std::endl;
  return;
}
