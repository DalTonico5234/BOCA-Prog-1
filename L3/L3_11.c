#include <stdio.h>

int EhPar(int x)
{
  if (x%2) return 0;
  else return 1;
}

void PrintaPares(int N)
{
  if (EhPar(N)) printf("%d ", N);
}

void PrintaImpares(int N)
{
  if (!(EhPar(N))) printf("%d ", N);
}

void main ()
{
  int tipo, N, i;

  scanf("%d %d", &tipo, &N);

  if (!(tipo))
  {
    for (i=2; i <= 2*N; i += 2)
  { 
    PrintaPares(i);
  }
  }
  if (tipo == 1)
  {
    for (i=1; i <= 2*N; i += 2)
  { 
    PrintaImpares(i);
  }
  }
}

