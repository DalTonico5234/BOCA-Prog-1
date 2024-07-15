#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int num, negativo=0, positivo=0, soman=0, somap=0, i=0;
  while(scanf("%d", &num) == 1)
  {
    if (num < 0 && num >= -100)
    {
      negativo++;
      soman += num;
    }
    else if (num > 0 && num <= 100)
    {
      positivo++;
      somap += num;
    }
  }
  printf("%d %d %d %d", negativo, positivo, soman, somap);
  return 0;
}
