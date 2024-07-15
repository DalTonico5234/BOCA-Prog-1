/*parte inteira e real
criado em 24/03/2024
autor: leonardo roxo*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  float x,z;
  int y;
  scanf("%f",&x);
  // leitura de x
  y=x;
  z=x-y;
  //cálculo das partes do número
  printf("INTEIRO:%d,REAL:%.2f\n", y, z);
  
  return 0;
}