#include <stdio.h>

#define PI 3.1316f;

int main(){
  int raio = 20;
  float constante_pi = 3.1416f;
  float perimetro_da_pizza = 2 * constante_pi * raio;

  printf("o perimetro da pizza é %f\n", perimetro_da_pizza);

  return 0;
}