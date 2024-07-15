#include <stdio.h>

int levetor(int notas[], int N)
{
  int i, crescentes = 0, decrescentes = 0, iguais = 0;
  if (N == 1)
  {
    printf("CRESCENTE&DECRESCENTE");
    return 0;
  }
  for (i = 0; i < N; i++)
  {
    scanf("%d", &notas[i]);
  }
  for (i = 0; i < N - 1; i++)
  {
    if (notas[i + 1] >= notas[i]) crescentes++;
    if (notas[i + 1] <= notas[i]) decrescentes++;
    if (notas[i + 1] == notas[i]) iguais++;
  }
  if (iguais == N - 1) printf("CRESCENTE&DECRESCENTE");
  else if (crescentes == N - 1) printf("CRESCENTE");
  else if (decrescentes == N - 1) printf("DECRESCENTE");
  else printf("DESORDENADO");
}

void main()
{
  int N;

  scanf("%d ", &N);

  int notas[N];

  levetor(notas, N);
}