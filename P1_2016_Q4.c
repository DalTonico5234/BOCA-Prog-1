#include <stdio.h>
#include <stdlib.h>

int main()
{
  int menor=11,i, N, n;
  for(i=1; i <= 3; i++)
  {
    scanf("%d", &N);
    N = (N  / 100) % 10;
    if (N > 0 && N < menor)
    {
     menor = N;
     n = i;
    }
  }
  if(menor == 11) printf("Nenhum");
  else printf("N%d", n);
  return 0;
}