/*L1_15
criado em: 30/03/2024
autor: leonardo roxo*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  int x,y;
  scanf("%d %d", &x, &y);
    x = x / (pow(10,y-1));
    x = x % 2;
    if(x == 0)
    {
      printf("PAR");
    }
    else
    {
      printf("IMPAR");
    }
  return 0;  
}