#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//jgit reset command is
// /jgit.sh glog --all
// master ... 
// Add ...
//
// jgit.sh reset HEAD^ --head
int main(){
  int n1,n2;
  char name[20];
  srand(time(NULL));
  printf("What is your name?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n\n",name);
  printf("Rolling the dice....\n");

  n1 = rand()%6 + 1 ;
  n2 = rand()%6 + 1 ;
  printf("Die 1: %d\n",n1);
  printf("Die 2: %d\n",n2);
  printf("Total value: %d\n",n1+n2);
  
}
