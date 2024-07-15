#include <stdio.h>

int main ()
{
  int a,b,x1,y1,x2,y2,x3,y3,cont=0;
  scanf("%d %d %d %d %d %d %d %d", &a, &b, &x1, &y1, &x2, &y2, &x3, &y3);
  if (y1 == a*x1 + b) cont++;
  if (y2 == a*x2 + b) cont++;
  if (y3 == a*x3 + b) cont++;
  switch(cont)
  {
    case 0: printf("Nenhum"); break;
    case 1: printf("Um"); break;
    case 2: printf("Dois"); break;
    case 3: printf("Todos"); break;
  }
  return 0;
}