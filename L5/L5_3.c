#include <stdio.h>
#include <math.h>

int levetor(int postes[], int N)
{
  int i, maiordif = -1;

  if (N <= 1) 
  {
    printf("IMPOSSIVEL"); 
    return 0;
  }
  
  for (i = 0; i < N; i++) //OK
  {
    scanf("%d", &postes[i]);
    if (i >= 1) 
    {
      if (fabs(postes[i] - postes[i-1]) >= maiordif) maiordif = fabs(postes[i] - postes[i-1]);   
    }
  } //calcula a maior diferença entre pares consecutivos
  

  for (i = 0; i < N; i++) //OK
  {
    if (fabs(postes[i] - postes[i+1]) == maiordif)
    {
      printf("(%d %d) ", i, i+1); 
    } 
  } //identifica pares consecutivos com a menor diferença
  
}

void main()
{
  int N;

  scanf("%d ", &N);

  int postes[N];

  levetor(postes, N);
}