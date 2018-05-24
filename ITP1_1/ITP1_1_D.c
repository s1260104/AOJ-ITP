#include<stdio.h>

int main(){
  int s;
  scan("%d , &s");

  printf("%d:%d:%d\n",s/60/60,s/60%60,s/60/60%60);
  return 0;
}

