#include <stdio.h>

int global = 20; 

int main ()  { 
  int local = 10; 

  printf ("global = %i, local = %i\n", global, local);

  
  {
    int local = 20;
    int temp = 10;
    printf("global = %i, local = %i\n", global, local);
  }
  printf("global = %i, local = %i\n", global, local);
  return 0;  
}