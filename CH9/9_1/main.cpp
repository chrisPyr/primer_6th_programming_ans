#include "golf.h"

int main(){
  golf g_arr[5];
  int entry_num = 0;
  setgolf(g_arr[0], "chris", 18);
  entry_num++;
  for(int i = 1;i < 5; ++i){
    if(!setgolf(g_arr[i])){
      break;
    }
    entry_num++; 
  }

  for(int i = 0; i < entry_num; ++i){
    showgolf(g_arr[i]);
  }
  return 0;
}
