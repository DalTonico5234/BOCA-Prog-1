/* L1_12
criado em: 29/03/2024
autor: leonardo roxo */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int N1,N2,N3;
  scanf("%d %d %d", &N1, &N2, &N3);
  if(N1 < N2 && N1 < N3 )
  {
    if(N2 < N3) 
    {
      printf("N1=%d,N2=%d,N3=%d", N1, N2, N3);
    }
    if(N3 < N2)
    {
     printf("N1=%d,N3=%d,N2=%d", N1, N3, N2);
    }
  }
  if(N2 < N1 && N2 < N3)
  {
    if (N1 < N3)
  	{
      printf("N2=%d,N1=%d,N3=%d", N2, N1, N3);
    
    }
    if(N3 < N1)
    {
      printf("N2=%d,N3=%d,N1=%d", N2, N3, N1);
    }
  }
  if(N3 < N1 && N3 < N2)
  {
    if(N1 < N2)
    {
      printf("N3=%d,N1=%d,N2=%d", N3, N1, N2);
    }
    if(N2 < N1)
    {
      printf("N3=%d,N2=%d,N1=%d", N3, N2, N1);
    }
  }
return 0;
}