#include <stdio.h>

int main ()
{
  int x,y;
  scanf("%d %d", &x, &y);
  if (x==y && x >=1 && x <=5) printf("Um homem");
  else if (x==y && x >=6 && x <=10) printf("Uma mulher");
  else if (x >=1 && x <=5 && y >=1 && y<=5) printf("Par de homens");
  else if (x >=6 && x <=10 && y >=6 && y<=10) printf("Par de mulheres");
  else if ((x >=1 && x <=5 && y >=6 && y<=10)||(y >=1 && y<=5 && x >=6 && x <=10)) printf("Um casal");
  else printf("Invalido");
  return 0;
}