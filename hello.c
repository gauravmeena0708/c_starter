#include "common.h"
int main(int argc,char **argv){

  INTRO_t intro;
  printf("Enter your the info:\n");
  fscanf(stdin,"%s %s %d",intro.firstName,intro.lastName,&(intro.age));
  
  print_intro(&intro); 
  print_an_address();

  return 0;
}
