#include <stdio.h>

int main ()
{
  int x, y, z;
  scanf("%d %d %d", &x, &y, &z);
  if (x < y && y < z) 
  {
    printf("CRESCENTE");
  }
  else if (x > y && y > z) 
  {
    printf("DECRESCENTE");
  }
  else
  {
    printf("TUDO DOIDO");
  }
  return 0;
}