#include <stdio.h>

int levetor(int numeros[], int N)
{
  if (N <= 1)
    {
      printf("NAO");
      return 0;
    }
  
  int i;
  for (i = 0; i < N; i++)
  {
    scanf("%d", &numeros[i]);
  }

  int dif = numeros[1] - numeros[0];
  for (i = 2; i < N; i++)
  {
    if ((numeros[i] - numeros[i-1]) != dif)
    {
      printf("NAO");
      return 0;
    }
  }
  printf("RESP:%d", dif);
}

void main()
{
  int N;
  scanf("%d ", &N);
  int numeros[N];
  levetor(numeros, N);
}