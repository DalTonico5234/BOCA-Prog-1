/*L1_10
criado em:29/03/2024
autor: leonardo roxo*/

#include <stdio.h>
#include <stdlib.h>

int main () 
{
  int x;
  scanf("%d", &x);
  if(x%2==0)
  {
    printf("Par");
  }
  if(x%2 != 0)
  {
  printf("Impar");
  }
  return 0;
}