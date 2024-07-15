#include <stdio.h>

int levetor(int numeros[], int N)
{
  int i;
  for (i = 0; i < N; i++)
  {
    scanf("%d", &numeros[i]);
  }
}

void TrocaParEImpar(int numeros[], int N)
{
  int i, temp;
  if (N%2) N -= 1;
  for (i = 0; i < N; i += 2)
  {
    temp = numeros[i];
    numeros[i] = numeros[i+1];
    numeros[i + 1] = temp;
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
    TrocaParEImpar(numeros, N);
    ImprimeDadosDoVetor(numeros, N);
  }
  else printf("{}");
}