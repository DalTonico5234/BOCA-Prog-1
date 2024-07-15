#include <stdio.h>

void comparavetor(int numerosA[], int numerosB[], int NA, int NB)
{
  int i,j, iguais=0;
  for (i = 0; i < NA; i++)
  {
    for (j = 0; j < NB; j++)
    {
      if (numerosA[i] == numerosB[j]) iguais++;
    }
  }
  
  if (!(iguais)) printf("NENHUM");
  else if (iguais >= NA) printf("TODOS");
  else printf("PARCIAL");
}

void main()
{
  int NA, i, NB, j, iguais;
 
  scanf("%d ", &NA);
  int numerosA[NA];
  for (i=0; i < NA; i++)
  {
    scanf("%d ", &numerosA[i]);
  }
  //le vetor A

  scanf("%d ", &NB);
  int numerosB[NB];
  for (i=0; i < NB; i++)
  {
    scanf("%d ", &numerosB[i]);
  }
  //le vetor B

  comparavetor(numerosA, numerosB, NA, NB);
}