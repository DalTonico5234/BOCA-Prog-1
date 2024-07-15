#include <stdio.h>
#include <math.h>

int levetor(int numeros[], int N)
{
  int i,dentro=0,fora=0;
  int a,b;
  for (i = 0; i < N; i++)
  {
    scanf("%d", &numeros[i]);
  } 
  
  scanf("%d %d", &a, &b);

  for (i = 0; i < N; i++)
  {
    if (numeros[i] >= a && numeros[i] <= b) dentro++;
    else fora++;
  } 
  
  printf("%d %d", dentro, fora);

}

void main()
{
  int N;

  scanf("%d ", &N);

  int numeros[N];

  levetor(numeros, N);
}