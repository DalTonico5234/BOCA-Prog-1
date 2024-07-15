#include <stdio.h>

int levetor(int numeros[], int N)
{
  int i;
  for (i = 0; i < N; i++)
  {
    scanf("%d", &numeros[i]);
  }
}

void OrdenaCrescente(int numeros[], int N)
{
  int i, j, temp;
  for (i = 0; i < N - 1; i++)
  {
    for (j = 0; j < N - i - 1; j++)
    {
      if (numeros[j] > numeros[j + 1])
      {
        temp = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] =  temp;
      }
    }
  }
}

void ImprimeDadosDoVetor(int numeros[], int N)
{
  printf("{");
  int i;
  for (i = 0; i < N; i++)
  {
    printf("%d", numeros[i]);
    if(i < N-1) printf(", ");
  }
  printf("}");
}

void main()
{
  int N;
  scanf("%d ", &N);
  int numeros[N];
  if (N)
  {
    levetor(numeros, N);
    OrdenaCrescente(numeros, N);
    ImprimeDadosDoVetor(numeros, N);
  }
  else printf("{}");
}