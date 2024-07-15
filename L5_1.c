#include <stdio.h>
#include <math.h>

typedef struct {
int menornota;
int maiornota;
float media;
float std;
int acimadamedia;
int nreprovados;
} resultados;

resultados inicializa (resultados r)
{
r.menornota = 101;
r.maiornota = -1;
r.media = 0;
r.std = 0;
r.acimadamedia = 0;
r.nreprovados = 0;
return r;
}

resultados levetor(int notas[], int N, resultados r)
{
  int i;
  for (i = 0; i < N; i++)
  {
    scanf("%d", &notas[i]);
    if (notas[i] < r.menornota) r.menornota = notas[i];
    if (notas[i] > r.maiornota) r.maiornota = notas[i];
    r.media += (float)notas[i]/(float)N;
    if (notas[i] < 70) r.nreprovados++;
  }
  return r;
}

resultados STD(resultados r, int notas[], int N)
{
  int i;
  for (i=0; i < N; i++)
  {
    r.std += pow((notas[i] - r.media),2);
    if (notas[i] > r.media) r.acimadamedia++;
  }
  r.std /= (float)N;
  r.std = sqrt(r.std);
  return r;
}

void main()
{
  int N;
  resultados r;
  
  r = inicializa(r);
  
  scanf("%d ", &N);

  int notas[N];
  
  r = levetor(notas, N, r);
  r = STD(r, notas, N);
  
  printf("MENOR:%d, MAIOR:%d, MEDIA:%.2f, STD:%.2f, ACIMA_MEDIA_CONC:%d, REPROV: %d", r.menornota, r.maiornota,  r.media, r.std, r.acimadamedia, r.nreprovados);  
}