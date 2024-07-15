#include <stdio.h>

int levetor(int numeros[], int N)
{
  int i;
  for (i = 0; i < N; i++)
  {
    scanf("%d", &numeros[i]);
  }
}

void InverteVetor(int numeros[], int N)
{
  int i, j, temp;
  j = N;
  for (i = 0; i < N/2; i++)
  {
    j--;
    temp = numeros[i];
    numeros[i] = numeros[j];
    numeros[j] = temp;
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
    InverteVetor(numeros, N);
    ImprimeDadosDoVetor(numeros, N);
  }
  else printf("{}");
}