#include <stdio.h>

void ImprimeOrdemDeRetirada (int numerosA[], int numerosB[], int NA, int NB);
void OrdenaCrescente(int numeros[], int N);
int maiorN(int NA, int NB);
int levetores(int numerosA[], int NA);

int levetores(int numerosA[], int NA)
{
  int i;
  for (i=0; i < NA; i++)
  {
    scanf("%d ", &numerosA[i]);
  }
 
  int NB;
  scanf("%d ", &NB);
  int numerosB[NB];
  for (i=0; i < NB; i++)
  {
    scanf("%d ", &numerosB[i]);
  }

  ImprimeOrdemDeRetirada (numerosA, numerosB, NA, NB);
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

void ImprimeOrdemDeRetirada (int numerosA[], int numerosB[], int NA, int NB)
{
  int i=0, j=0;
  
  OrdenaCrescente(numerosA, NA);
  OrdenaCrescente(numerosB, NB);

  while (i < NA && j < NB)
  {
    if (numerosA[i] <= numerosB[j])
    {
      printf("A");
      i++;
    }
    else
    {
      printf("B");
      j++;
    }
  }
  
  while (i < NA)
  {
    printf("A");
    i++;
  }
  while (j < NB)
  {
    printf("B");
    j++;
  }
}

void main()
{
  int NA;
  scanf("%d ", &NA);
  int numerosA[NA];

  levetores(numerosA, NA);
}