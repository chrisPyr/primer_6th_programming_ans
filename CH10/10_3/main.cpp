#include "golf.h"

int main(){
  golf g_arr[5];
  int entry_num = 0;
  g_arr[0].setgolf();
  entry_num++;
  for(int i = 1;i < 5; ++i){
    if(!g_arr[i].setgolf()){
      break;
    }
    entry_num++;
  }

  for(int i = 0; i < entry_num; ++i){
    g_arr[i].showgolf();
  }
  return 0;
}
