#include "golf.h"
#include <cstring>
#include <iostream>

void setgolf(golf &g, const char *name, int hc){
  strcpy(g.fullname, name);
  g.handicap = hc;
  return;
}

int setgolf(golf &g){
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
  setgolf(g, name, hc);
  return 1;
}

void handicap(golf &g, int hc){
  g.handicap = hc;
  return;
}

void showgolf(const golf &g){
  std::cout<<"Name: "<<g.fullname<<std::endl;
  std::cout<<"Handicap: "<<g.handicap<<std::endl;
  return;
}
