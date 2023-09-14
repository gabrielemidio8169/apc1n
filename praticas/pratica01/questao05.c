#include <stdio.h>
#include <math.h>
int main(){
  int valor_em_gb = 10;

  double valor_em_bytes = valor_em_gb * pow(1024,3);
  
  printf("o valor %d  em gigabytes equivale a %f\n",valor_em_gb, valor_em_bytes);






  return 0;






}