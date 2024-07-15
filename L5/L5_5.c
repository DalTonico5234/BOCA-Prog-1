#include <stdio.h>

int levetor(int numeros[], int N, int X)
{
  int i;
  for (i = 0; i < N; i++)
  {
    scanf("%d", &numeros[i]);
    if (numeros[i] == X)
    {
      printf("RESP:%d", i);
      return 0;
    }
  } 
  printf("RESP:%d", N);
}

void main()
{
  int N,X;

  scanf("%d %d ", &X, &N);

  int numeros[N];

  levetor(numeros, N, X);
}