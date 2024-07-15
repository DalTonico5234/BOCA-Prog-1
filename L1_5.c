/*L1_5
criado em: 26/03/2024
autor: leonardo roxo*/

#include <stdio.h>
#include <stdlib.h>

int main () 
{
  int x,y;
  scanf("%d %d", &x, &y);
    if(x > y)
    {
      printf("N1= %d", x);
    }
    if(y > x)
    {
      printf("N2= %d", y);
    }
    if(x == y)
    {
      printf("N1=N2");
    }
  return 0;
}